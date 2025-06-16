module fir_sym_trans #( //FIR symmetric - transposed form
    parameter FIR_LENGTH = 51,
    parameter DATA_WIDTH = 24,
    parameter COEF_WIDTH = 16,
    parameter COEFF_LINK = "../04_fir_cof/lowpass_250.txt"
)(
    input  logic i_clk,
    input  logic i_rst_n,

    input  logic [DATA_WIDTH - 1:0] i_data,
    output logic [DATA_WIDTH - 1:0] o_data
);
    localparam ORDER      = FIR_LENGTH - 1         ;
    localparam REG_WIDTH  = DATA_WIDTH + COEF_WIDTH;
    localparam HALF_ORDER = ORDER / 2              ;

    logic [COEF_WIDTH - 1:0] coeffs [ORDER - 0:0];
    initial $readmemh(COEFF_LINK,coeffs);

    logic [REG_WIDTH - 1:0] multi_result [HALF_ORDER - 0:0];
    logic [REG_WIDTH - 1:0] multi_delay  [HALF_ORDER - 0:0];
    logic [REG_WIDTH - 1:0] sum_result   [HALF_ORDER - 1:0];
    logic [REG_WIDTH - 1:0] sum_delay    [HALF_ORDER - 1:0];

    genvar i;
    generate
        for(i = 0; i <= HALF_ORDER; i++) begin
            multi #(
                .A_WIDTH(DATA_WIDTH),
                .B_WIDTH(COEF_WIDTH),
                .RESULT_WIDTH(REG_WIDTH)
            ) multi_coeff (
                .i_a(i_data),
                .i_b(coeffs[i]),
                .o_result(multi_result[i])
            );
        end
    endgenerate

    // PIPELINE MULTIPLY AND ADD
    // The first half of the coefficients are multiplied with the input data

    genvar j;
    generate
        for(j = 0; j <= HALF_ORDER; j++) begin
            shift_reg #(
                .WIDTH(REG_WIDTH),
                .DEPTH(1)
            ) pipeline_mul_add (
                .i_clk(i_clk),
                .i_rst_n(i_rst_n),
                .i_data_in(multi_result[j]),
                .o_data_out(multi_delay[j])
            );
        end
    endgenerate

    //DELAY FOR ADD

    genvar k;
    generate
        for(k = 0; k <= ORDER - 1; k++) begin
            shift_reg #(
                .WIDTH(REG_WIDTH),
                .DEPTH(1)
            ) pipeline_mul_add (
                .i_clk(i_clk),
                .i_rst_n(i_rst_n),
                .i_data_in(sum_result[k]),
                .o_data_out(sum_delay[k])
            );
        end
    endgenerate

    // Symmetric form base on similar of [0 -> (N/2 - 1)] and [(N/2 + 1) -> N] (N is ORDER of FIR FILTER)
    // h[i] = h[N-1 - i] and h[N/2];

    always_comb begin
            sum_result[0]          = multi_delay[0]                                                 ;
            sum_result[HALF_ORDER] = multi_delay[HALF_ORDER] + sum_delay[HALF_ORDER - 1]            ;

        for(int i = 1; i <= HALF_ORDER - 1; i++) begin
            sum_result[i]              = multi_delay[i]              + sum_delay[i              - 1];
            sum_result[i + HALF_ORDER] = multi_delay[HALF_ORDER - i] + sum_delay[i + HALF_ORDER - 1];
        end
    end

    assign o_data = sum_result[ORDER - 1][REG_WIDTH - 1:COEF_WIDTH];

endmodule