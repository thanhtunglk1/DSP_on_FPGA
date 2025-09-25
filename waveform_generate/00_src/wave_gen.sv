module wave_gen #(
    parameter WIDTH = 24  ,
    parameter DEPTH = 1024
)(
    input  logic                              i_clk             ,
    input  logic                              i_rst_n           ,

    input  logic                              i_add_noise       , // 0 - sóng thuần túy, 1 - sóng + nhiễu

    input  logic        [                2:0] i_sel_wave        , // chọn loại sóng xuất
    input  logic        [$clog2(DEPTH) - 1:0] i_wave_phase_step , // chỉnh bước nhảy của NCO của sóng - chỉnh tẩn số
    input  logic        [                2:0] i_sel_duty_cycle  , // chọn duty cycle cho sóng vuông
    input  logic signed [                3:0] i_gain_wave       , // lựa chọn độ lợi áp khôi phục của sóng

    input  logic                              i_lfsr_sin        , // 0 - lfsr, 1 - hài bậc cao sóng sine
    input  logic                              i_wave_noise_step , // chỉnh bước nhảy của NCO của nhiểu sin cao - chỉnh tẩn số
    input  logic signed [                3:0] i_gain_noise      , // lựa chọn độ lợi áp khôi phục của nhiễu
    
    output logic signed [WIDTH         - 1:0] o_wave_out  
);

    logic        [$clog2(DEPTH) - 1:0] phase;
    logic        [WIDTH         - 1:0] wave_sine, wave_square, wave_triangle, wave_sawtooth, wave_ecg;
    logic signed [WIDTH         - 1:0] wave_out ;
    logic signed [WIDTH - 1 + 4    :0] wave_gain;

    phase_accummulator #(
        .DEPTH    (DEPTH),
        .BEHAVIOR (1)
    ) phase_acummulator_for_wave (
        .i_clk        (i_clk),
        .i_rst_n      (i_rst_n),
        .i_count_value(i_wave_phase_step),
        .o_phase_count(phase)
    );

    wave_sine #(
        .WIDTH(WIDTH),
        .DEPTH(DEPTH),
        .HEX_LINK("../04_fir_cof/sine_wave_0.1.txt")
    ) sine (
        .i_clk        (i_clk),
        //.i_rst_n      (i_rst_n),
        .i_phase_count(phase),
        .o_sine_wave  (wave_sine)
    );

    //sawtooth
    assign wave_sawtooth = {4'b0, phase[WIDTH - 1:0], '0};

    wave_triangle #(
        .WIDTH(WIDTH)  ,
        .DEPTH(DEPTH)
    ) triangle (
        .i_phase_count  (phase),
        .o_triangle_wave(wave_triangle)
    );

    wave_square #(
        .WIDTH   (WIDTH),
        .DEPTH   (DEPTH),
        .BEHAVIOR(0)
    ) square (
        .i_phase_count   (phase),
        .i_sel_duty_cycle(i_sel_duty_cycle),
        .o_square_wave   (wave_square)
    );

    wave_ecg #(
        .WIDTH   (WIDTH),
        .DEPTH   (DEPTH),
        .HEX_LINK("../04_fir_cof/ecg_wave_0.1.txt") 
    ) ecg (
        .i_clk        (i_clk),
        //.i_rst_n      (i_rst_n),
        .i_phase_count(phase),
        .o_ecg_wave   (wave_ecg)
    );

    always_comb begin
        case(i_sel_wave)
            3'd0: wave_out = wave_sine    ;  
            3'd1: wave_out = wave_square  ;
            3'd2: wave_out = wave_triangle; 
            3'd3: wave_out = wave_sawtooth;
            3'd4: wave_out = wave_ecg     ;
            3'd5: wave_out = '0           ; 
            3'd6: wave_out = 24'hE00000   ;
            3'd7: wave_out = 24'h3FFFFF   ;
        endcase
    end

    lfsr #(
        .LFSR_WIDTH(24)
    ) white_noise (
        .i_clk   (i_clk),
        .i_rst_n (i_rst_n),
        .i_en    (tick),
        .i_sel   (i_sel_gain),                   
        .o_noise (noise)
    );

    harmony_sin_gen #(
        .WIDTH(WIDTH)  ,
        .DEPTH(DEPTH/2)
    )(
    input  logic                       .i_clk                (),
    input  logic                       .i_rst_n              (),
    input  logic [$clog2(DEPTH) - 1:0] .i_harmony_phase_step (), 
    input  logic [                1:0] .i_harmony_gain       (), 
    output logic                       .o_harmony_out        ()  
    );

    assign wave_gain  = wave_out * i_gain;
    assign o_wave_out = wave_gain[WIDTH - 1 + 4:4];

endmodule