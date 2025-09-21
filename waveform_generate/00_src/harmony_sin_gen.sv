module harmony_sin_gen #(
    parameter WIDTH = 24 ,
    parameter DEPTH = 512
)(
    input  logic                       i_clk                ,
    input  logic                       i_rst_n              ,
    input  logic [$clog2(DEPTH) - 1:0] i_harmony_phase_step , 
    input  logic [                1:0] i_harmony_gain       , 
    output logic                       o_harmony_out  
);

    logic [$clog2(DEPTH) - 1:0] phase       ;
    logic [WIDTH         - 1:0] sine_harmony;

    phase_acummulator #(
        .WIDTH    (WIDTH),
        .DEPTH    (DEPTH),
        .BEHAVIOR (1)
    ) phase_acummulator_for_harmony (
        .i_clk        (i_clk),
        .i_rst_n      (i_rst_n),
        .i_count_value(i_harmony_phase_step),
        .o_phase_count(phase)
    );

    wave_sine #(
        .WIDTH(WIDTH),
        .DEPTH(DEPTH),
        .HEX_LINK("../04_fir_cof/sine_wave_0.1.txt")
    ) sine (
        .i_clk        (i_clk),
        //.i_rst_n      (i_rst_n),
        .i_phase_count({phase, 1'b0}),
        .o_sine_wave  (sine_harmony)
    );

    always_comb begin
        case(i_harmony_gain)
            2'd0: o_harmony_out = {{6{sine_harmony[WIDTH - 1]}}, sine_harmony[WIDTH - 1:6]}; 
            2'd1: o_harmony_out = {{5{sine_harmony[WIDTH - 1]}}, sine_harmony[WIDTH - 1:5]};
            2'd2: o_harmony_out = {{4{sine_harmony[WIDTH - 1]}}, sine_harmony[WIDTH - 1:4]};
            2'd3: o_harmony_out = {{3{sine_harmony[WIDTH - 1]}}, sine_harmony[WIDTH - 1:3]};
        endcase
    end

endmodule