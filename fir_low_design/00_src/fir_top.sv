module fir_top#(
    parameter SAMP_WIDTH = 24,
    parameter COEFF_LINK = "../04_fir_cof/lowpass_250.txt"
)(

    input  logic                    i_clk       ,
    input  logic                    i_rst_n     ,
    input  logic [SAMP_WIDTH - 1:0] i_gain      ,
    input  logic [SAMP_WIDTH - 1:0] i_samp_data ,
    output logic [SAMP_WIDTH - 1:0] o_fir_data
);

    logic [  SAMP_WIDTH - 1:0] noise_filtering_data;
    logic [2*SAMP_WIDTH - 1:0] gain_data           ;

    //FIR symmetric - transposed form
    fir_sym_trans #( 
        .FIR_LENGTH(51)         ,
        .DATA_WIDTH(24)         ,
        .COEF_WIDTH(16)         ,
        .COEFF_LINK(COEFF_LINK)
    ) lowpass_filter_fir (
        .i_clk(i_clk)           ,
        .i_rst_n(i_rst_n)       ,
        .i_data(i_samp_data)    ,
        .o_data(noise_filtering_data) 
    );

    multi #(
        .A_WIDTH(SAMP_WIDTH),
        .B_WIDTH(SAMP_WIDTH),
        .RESULT_WIDTH(2*SAMP_WIDTH)
    ) out_gain (
        .i_a(noise_filtering_data),
        .i_b(i_gain)              ,
        .o_result(gain_data)
    );

    assign o_fir_data = gain_data[35:12];

endmodule