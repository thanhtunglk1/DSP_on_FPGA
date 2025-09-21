module rise_edge_detect #(
    parameter WIDTH = 1
)(
    input  logic               i_clk       ,
    input  logic               i_rst_n     ,
    input  logic [WIDTH - 1:0] i_detect_in , 
    output logic [WIDTH - 1:0] o_detect_out 
);

    logic [WIDTH - 1:0] reg_delay;

    always_ff @(posedge i_clk, negedge i_rst_n) begin
        if(~i_rst_n) reg_delay <= '0         ;
        else         reg_delay <= i_detect_in;
    end

    assign o_detect_out = ~reg_delay & i_detect_in; 

endmodule