`timescale 1ns/1ps

module tb_Start_condition();

//==================================
// Parameter 
//==================================
logic i_clk, i_rst_n, i_en, i_SCL;
logic o_SDA, o_done;


//==================================
// Module 
//==================================
Start_condition DUT (
    .i_clk   (i_clk),
    .i_rst_n (i_rst_n),
    .i_en    (i_en),
    .i_SCL   (i_SCL),
    .o_SDA   (o_SDA),
    .o_done  (o_done) 
);

initial begin
    i_clk = 1'b0;
    forever #5 i_clk = ~i_clk;
end 

initial begin
    $dumpfile("tb_Start_condition.vcd");
    $dumpvars(0, tb_Start_condition);
end 

initial begin
    i_rst_n = 0;
    i_SCL   = 1;
    i_en    = 0;
    #20;
    i_rst_n = 1;
    i_SCL   = 1;
    i_en    = 0;

    #20;
    @(posedge i_clk);
    i_SCL   = 1;
    i_en    = 1;
    @(posedge i_clk);
    i_en    = 0;
    
    #40;
    @(posedge i_clk);
    i_SCL   = 0;
    i_en    = 1;
    @(posedge i_clk);
    i_en    = 0;

    #1000;
    $display("End simulation\n");
    $finish;


end 

endmodule

