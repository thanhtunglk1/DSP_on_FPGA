module dac_tb();

    logic               i_clk          ;
    logic               i_rst_n        ;
    logic               i_sel          ;
    logic               samp_tick      ;
    logic        [ 1:0] i_noise_gain   ;
    logic signed [23:0] sine_noise     ;
    logic signed [23:0] sine_wave      ;
    logic signed [23:0] noise          ;
    logic signed [23:0] filting_data   ;
    logic        [23:0] adc_data_s2p   ;

    logic               config_done    ;
    logic               bclk           ;
    logic               daclrck        ;
    logic               dac_serial     ;
    logic               adc_serial     ;

    //assign sine_noise = noise;
    assign sine_noise = sine_wave;
    //assign sine_noise = sine_wave + noise;

    sine_gen_test #(
        .SAMP_WIDTH(24)  ,
        .SAMP_DEPTH(1024),
        .SAMP_LINK("../04_fir_cof/sine_wave_0.7.txt")
    ) sine_wave_test(
        .i_clk(i_clk)       ,
        .i_rst_n(i_rst_n)     ,
        .i_tick_samp(samp_tick),
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

    codec_data dut_codec (
        .i_clk        (i_clk),  //12MHz - MCLK
        .i_rst_n      (i_rst_n),
        .i_config_done(config_done),
        .i_p2s_in     (sine_noise),
        .o_s2p_out    (adc_data_s2p),
        .o_bclk       (bclk),
        .o_daclrck    (daclrck),
        .o_adclrck    (),
        .o_sample_tick(samp_tick),
        .i_adc_dat    (adc_serial),
        .o_dac_dat    (dac_serial)   
    );

/*
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
*/

    logic [7:0] counter;

    initial begin 
        $shm_open("waves.shm")  ;
        $shm_probe("ASM")       ;
    end

    always #5 i_clk = ~i_clk;

    always begin
        wait(i_rst_n)
        @(negedge bclk);
        adc_serial = $random;
    end

    initial begin 
        i_clk   = '0;
        i_rst_n = '0;
        config_done = '0;
        adc_serial  = '0;

        #20
        i_rst_n = '1;
        i_noise_gain = 2'd1;
        i_sel = 1;

        #40 
        config_done = '1;
        #500000

        $finish;
    end

endmodule