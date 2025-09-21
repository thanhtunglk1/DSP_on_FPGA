module white_noise_gen #(
    parameter WIDTH = 24 ,
    parameter COUNT = 128
)(
    input  logic               i_clk        ,
    input  logic               i_rst_n      ,
    input  logic [        1:0] i_sel_gain   ,
    input  logic [COUNT - 1:0] i_count_delay,
    output logic [WIDTH - 1:0] o_noise
);

    logic [COUNT - 1:0] reg_count, count;
    logic tick;
    
    assign tick  = (reg_count == i_count_delay);
    assign count = tick ? '0 : reg_count + 1'b1;

    always_ff @(posedge i_clk, negedge i_rst_n) begin
        if(~i_rst_n) reg_count <= '0   ;
        else         reg_count <= count;
    end

    lfsr #(
        .LFSR_WIDTH(24)
    ) lfsr_gen (
        .i_clk   (i_clk),
        .i_rst_n (i_rst_n),
        .i_en    (tick),
        .i_sel   (i_sel_gain),                   
        .o_noise (o_noise)
    );

endmodule