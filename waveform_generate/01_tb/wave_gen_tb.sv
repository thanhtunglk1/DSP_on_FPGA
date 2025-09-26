module wave_gen_tb();

    parameter WIDTH = 24  ;
    parameter DEPTH = 1024;

    logic                              i_clk             ;
    logic                              i_rst_n           ;
    logic                              i_samp_tick       ;
    logic                              i_add_noise       ; // 0 - sóng thuần túy, 1 - sóng + nhiễu
    logic        [                2:0] i_sel_wave        ; // chọn loại sóng xuất
    logic        [$clog2(DEPTH) - 1:0] i_wave_phase_step ; // chỉnh bước nhảy của NCO của sóng - chỉnh tẩn số
    logic        [                2:0] i_sel_duty_cycle  ; // chọn duty cycle cho sóng vuông
    logic signed [                3:0] i_gain_wave       ; // lựa chọn độ lợi áp khôi phục của sóng
    logic                              i_lfsr_sin        ; // 0 - lfsr, 1 - hài bậc cao sóng sine
    logic        [$clog2(DEPTH) - 1:0] i_wave_sine_step  ; // chỉnh bước nhảy của NCO của nhiểu sin cao - chỉnh tẩn số
    logic signed [                3:0] i_gain_noise      ; // lựa chọn độ lợi áp khôi phục của nhiễu
    logic signed [WIDTH         - 1:0] o_wave_out        ;

    wave_gen #(
        .WIDTH(24  ),
        .DEPTH(1024)
    ) dut (
        .i_clk             (i_clk),
        .i_rst_n           (i_rst_n),
        .i_samp_tick       (i_samp_tick),
        .i_add_noise       (i_add_noise), // 0 - sóng thuần túy, 1 - sóng + nhiễu
        .i_sel_wave        (i_sel_wave), // chọn loại sóng xuất
        .i_wave_phase_step (i_wave_phase_step), // chỉnh bước nhảy của NCO của sóng - chỉnh tẩn số
        .i_sel_duty_cycle  (i_sel_duty_cycle), // chọn duty cycle cho sóng vuông
        .i_gain_wave       (i_gain_wave), // lựa chọn độ lợi áp khôi phục của sóng
        .i_lfsr_sin        (i_lfsr_sin), // 0 - lfsr, 1 - hài bậc cao sóng sine
        .i_wave_sine_step  (i_wave_sine_step), // chỉnh bước nhảy của NCO của nhiểu sin cao - chỉnh tẩn số
        .i_gain_noise      (i_gain_noise), // lựa chọn độ lợi áp khôi phục của nhiễu
        .o_wave_out        (o_wave_out) 
    );

    always #10 i_clk = ~i_clk;

    initial begin 
        $shm_open("waves.shm")  ;
        $shm_probe("ASM")       ;
    end

    initial begin
        i_clk             =  1'b0;
        i_rst_n           =  1'b0;
        i_samp_tick       =  1'b1;
        i_add_noise       =  1'b1;
        i_sel_wave        =  3'd4;
        i_wave_phase_step = 10'd1;
        i_sel_duty_cycle  =  3'd4;
        i_gain_wave       =  4'd7;
        i_lfsr_sin        =  1'b0;
        i_wave_sine_step  = 10'd3;
        i_gain_noise      =  4'd4;

        #40
        i_rst_n           =  1'b1;

       

        #100000
        $finish;
    end

endmodule
