module top_module (
    input  logic        CLOCK_50        ,
    input  logic  [9:0] SW              ,
    input  logic  [3:0] KEY             ,

    inout  logic        FPGA_I2C_SDAT   ,
    output logic        FPGA_I2C_SCLK   ,

    output logic        AUD_XCK         ,
    output logic        AUD_BLCK        ,
    input  logic        AUD_ADCDAT      ,
    output logic        AUD_ADCLRCK     ,
    output logic        AUD_DACDAT      ,
    output logic        AUD_DACLRCK 
);

    logic config_done, config_synch_i, config_synch_done;

    logic CLOCK_12, samp_tick_en;

    logic [23:0] p2s_dac, s2p_adc;

    config_codec #(
        .DEPTH(11)
    ) codec_config_i2c (
        .i_clk  (CLOCK_12), 
        .i_rst_n(SW[9]),
        .o_done (config_done), 
        .o_scl  (FPGA_I2C_SCLK),
        .io_sda (FPGA_I2C_SDAT)
    );

    always_ff @(posedge CLOCK_12, negedge i_rst_n) begin : proc_synchronizer_config_done_i2c
        if(~i_rst_n) {config_synch_done, config_synch_i} <= '0;
        else         {config_synch_done, config_synch_i} <= {config_synch_i, config_done};
    end

    assign AUD_XCK = CLOCK_12;

    codec_data codec_trans_rec (
        .i_clk        (CLOCK_12),          //  12MHz - MCLK
        .i_rst_n      (SW[9]),
        .i_config_done(config_synch_done), // done kick signal from i2c_config
        .i_p2s_in     (p2s_dac),           // data need DAC
        .o_s2p_out    (s2p_adc),           // only left channel
        .o_bclk       (AUD_BLCK),          // 240kHz ( 40:60 - 0:1)
        .o_daclrck    (AUD_DACLRCK),       //  48kHz ( 50:50 - 0:1) 
        .o_adclrck    (AUD_ADCLRCK),       //  48kHz ( 50:50 - 0:1)   
        .o_sample_tick(samp_tick_en),      //  48kHz (249: 1 - 0:1) 
        .i_adc_dat    (AUD_ADCDAT),
        .o_dac_dat    (AUD_DACDAT)
    );



endmodule