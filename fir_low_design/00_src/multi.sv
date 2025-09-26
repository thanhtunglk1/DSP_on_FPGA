module multi #(
    parameter A_WIDTH = 24,
    parameter B_WIDTH = 16,
    parameter RESULT_WIDTH = A_WIDTH + B_WIDTH
)(
    input  logic [A_WIDTH      - 1:0] i_a,
    input  logic [B_WIDTH      - 1:0] i_b,
    output logic [RESULT_WIDTH - 1:0] o_result
);

    assign o_result = i_a * i_b;

endmodule