module phase_accummulator_expire #(
    parameter DEPTH    = 128,
    parameter BEHAVIOR = 1
)(
    input  logic                       i_clk        ,
    input  logic                       i_rst_n      ,
    input  logic [$clog2(DEPTH) - 1:0] i_count_value,
    output logic [$clog2(DEPTH) - 1:0] o_phase_count,
    output logic                       o_expire     
);

    logic [$clog2(DEPTH) - 1:0] reg_count, count;
    logic expire;

    always_ff @(posedge i_clk, negedge i_rst_n) begin
        if(~i_rst_n) reg_count <= '0    ;
        else         reg_count <= count ;
    end

    always_ff @(posedge i_clk, negedge i_rst_n) begin
        if(~i_rst_n) o_expire <= '0    ;
        else         o_expire <= expire;
    end

    generate
        if(BEHAVIOR) assign {expire, count} = reg_count + i_count_value;

        else begin
            adder_flex #(
                .WIDTH($clog2(DEPTH))
            ) adder (
                .i_a   (reg_count),
                .i_b   (i_count_value),
                .i_cin (1'b0),
                .o_s   (count),
                .o_cout(expire)
            );
        end
    endgenerate

    assign o_phase_count = reg_count;

endmodule