module fir_tb();

    logic            i_clk          ;
    logic            i_rst_n        ;
    logic [24 - 1:0] sine_wave      ;
    logic [24 - 1:0] filting_data   ;

    sine_gen #(
        .SAMP_WIDTH(24)  ,
        .SAMP_DEPTH(1024),
        .SAMP_LINK("../04_fir_cof/sine_wave.txt")
    ) sine_wave_test(
        .i_clk(i_clk)       ,
        .i_rst_n(i_rst_n)     ,
        .i_sel(1'b0)       , // 0 - sine and noise, 1 - sine
        .i_phase_step('0), //16'd1042 48kHz 
        .o_phase_tick(),
        .o_sine_wave(sine_wave)
    );

    //fir_top#(
    //    .SAMP_WIDTH(24),
    //    .COEFF_LINK("../04_fir_cof/lowpass_250.txt")
    //) lowpass_filter_fir (
    //    .i_clk(i_clk)       ,
    //    .i_rst_n(i_rst_n)     ,
    //    .i_gain('1)      ,
    //    .i_samp_data(sine_wave) ,
    //    .o_fir_data(filting_data)
    //);

    initial begin 
        $shm_open("waves.shm")  ;
        $shm_probe("ASM")       ;
    end

    always #5 i_clk = ~i_clk;

    initial begin 
        i_clk   = '0;
        i_rst_n = '0;

        #20

        i_rst_n = '1;
        #50000
        $finish;
    end

endmodule