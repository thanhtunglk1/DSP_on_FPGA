module fir_filter #( //transposed form
    parameter FIR_LENGTH = 51,
    parameter DATA_WIDTH = 24,
    parameter COEF_WIDTH = 16
)(
    input  logic i_clk,
    input  logic i_rst_n,

    input  logic [DATA_WIDTH - 1:0] i_data,
    output logic [DATA_WIDTH - 1:0] o_data
);
    localparam ORDER     = FIR_LENGTH - 1;
    localparam REG_WIDTH = DATA_WIDTH + COEF_WIDTH;

    logic [COEF_WIDTH - 1:0] coeffs [ORDER - 0:0];
    //initial readmemh("../04_fir_cof/lowpass_250.txt",coeffs);

    logic [REG_WIDTH - 1:0] multi_result [ORDER - 0:0];
    logic [REG_WIDTH - 1:0] multi_delay  [ORDER - 0:0];
    logic [REG_WIDTH - 1:0] sum_delay    [ORDER - 1:0];
    logic [REG_WIDTH - 1:0] sum_result   [ORDER - 1:0];

    genvar i;
    generate
        for(i = 0; i < ORDER; i++) begin
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

    genvar j;
    generate
        for(j = 0; j <= ORDER; j++) begin
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

    //shift_reg #(
    //    .WIDTH(REG_WIDTH),
    //    .DEPTH(1)
    //) sum_0 (
    //    .i_clk(i_clk),
    //    .i_rst_n(i_rst_n),
    //    .i_data_in(multi_delay[0]),
    //    .o_data_out(sum_result[0])
    //);

    genvar k;
    generate
        for(k = 0; k < ORDER; k++) begin
            shift_reg #(
                .WIDTH(REG_WIDTH),
                .DEPTH(1)
            ) u_sum_shift_reg_other (
                .i_clk(i_clk),
                .i_rst_n(i_rst_n),
                .i_data_in(sum_result[k]),
                .o_data_out(sum_delay[k])
            );

            if(k == 0) begin
                assign sum_result[k] = multi_delay[k];
            end 
            
            else begin
                assign sum_result[k] = sum_delay[k - 1] + multi_delay[k];
            end
            //assign sum_result[k] = k ? sum_delay[k - 1] + multi_delay[k] : multi_delay[k];
        end
    endgenerate
        
    //always_comb begin
    //    for (int x = 1; x < ORDER - 1; x++) sum_result[x] = sum_delay[x - 1] + multi_delay[x];
    //end

    assign o_data = sum_result[ORDER - 1][REG_WIDTH - 1:COEF_WIDTH];

endmodule