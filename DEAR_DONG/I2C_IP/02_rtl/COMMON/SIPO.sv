module SIPO #(
    parameter SIZE_DATA_IN  = 1,
    parameter SIZE_DATA_OUT = 8
)(
    input  logic                     i_clk,
    input  logic                     i_rst_n,
    input  logic                     i_start,
    input  logic [SIZE_DATA_IN-1:0]  i_data,
    output logic [SIZE_DATA_OUT-1:0] o_data,
    output logic                     o_done
);

    parameter SIZE_DEPTH = SIZE_DATA_OUT / SIZE_DATA_IN;
    parameter SIZE_COUNT = $clog2(SIZE_DEPTH);

    logic [SIZE_DATA_IN-1:0] shift_reg [0:SIZE_DEPTH-1];
    logic [SIZE_COUNT-1:0]   count;

    // Shift register update
    always_ff @(posedge i_clk or negedge i_rst_n) begin
        if (~i_rst_n) begin
            for (int i = 0; i < SIZE_DEPTH; i++) begin
                shift_reg[i] <= '0;
            end
            count <= '0;
        end else begin
            if (i_start) begin
                shift_reg[0] <= i_data;
                for (int i = 1; i < SIZE_DEPTH; i++) begin
                    shift_reg[i] <= shift_reg[i-1];
                end
                count <= (o_done) ? '0 : count + 1'b1;
            end
        end
    end

    // Done flag
    assign o_done = (count == SIZE_DEPTH-1);

    // Pack shift_reg into output
    genvar j;
    generate
        for (j = 0; j < SIZE_DEPTH; j++) begin : gen_concat
            assign o_data[(j+1)*SIZE_DATA_IN-1 -: SIZE_DATA_IN] = shift_reg[j];
        end
    endgenerate

endmodule
