module fir_tb();

    logic               i_clk          ;
    logic               i_rst_n        ;
    logic               i_sel          ;
    logic               samp_tick      ;
    logic        [ 1:0] i_noise_gain   ;
    logic signed [23:0] sine_noise     ;
    logic signed [23:0] sine_wave      ;
    logic signed [23:0] noise          ;
    logic signed [23:0] filting_data   ;

    //assign sine_noise = noise;
    //assign sine_noise = sine_wave;
    assign sine_noise = sine_wave + noise;

    sine_gen #(
        .SAMP_WIDTH(24)  ,
        .SAMP_DEPTH(1024),
        .SAMP_LINK("../04_fir_cof/sine_wave_0.7.txt")
    ) sine_wave_test(
        .i_clk(i_clk)       ,
        .i_rst_n(i_rst_n)     ,
        .i_phase_step(16'd1042), //16'd1042 48kHz 
        .o_phase_tick(samp_tick),
        .o_sine_wave(sine_wave)
    );

    noise_gen #(
        .SAMP_WIDTH(24)  ,
        .SAMP_DEPTH(1024),
        .SAMP_LINK("../04_fir_cof/sine_wave_0.1.txt")
    ) noise_test (
        .i_clk(i_clk)       ,
        .i_rst_n(i_rst_n)     ,
        .i_sel(i_sel)       , // 0 lfsr, 1 - sine
        .i_noise_gain(i_noise_gain),
        .i_phase_step('d0), 
        .o_noise_wave(noise)
    );

    fir_top#(
        .SAMP_WIDTH(24),
        //.COEFF_LINK("../04_fir_cof/lowpass_250.txt")
        .COEFF_LINK("../04_fir_cof/highpass_4k.txt")
    ) lowpass_filter_fir (
        .i_clk(i_clk)       ,
        .i_rst_n(i_rst_n)     ,
        .i_clk_fir(samp_tick),
        .i_gain(24'd8191)      ,
        .i_samp_data(sine_noise) ,
        .o_fir_data(filting_data)
    );

    wave_rec #(
        .DATA_WIDTH(24),
        .ADDR_WIDTH(12),
        .LINK("../01_tb/wave_result.txt")
    ) wave_result_rec (
        .i_clk  (i_clk)                  ,
        .i_rst_n(i_rst_n)                  ,
        .i_en   (samp_tick)                  ,
        .i_data(filting_data)
    );

    wave_rec #(
        .DATA_WIDTH(24),
        .ADDR_WIDTH(12),
        .LINK("../01_tb/wave_noise.txt")
    ) wave_result_noise (
        .i_clk  (i_clk)                  ,
        .i_rst_n(i_rst_n)                  ,
        .i_en   (samp_tick)                  ,
        .i_data(sine_noise)
    );

    //initial begin 
    //    $shm_open("waves.shm")  ;
    //    $shm_probe("ASM")       ;
    //end

    always #5 i_clk = ~i_clk;

    initial begin 
        i_clk   = '0;
        i_rst_n = '0;

        #20

        i_rst_n = '1;
        i_noise_gain = 2'd1;
        i_sel = 1;
        #50000000

        $finish;
    end

endmodule