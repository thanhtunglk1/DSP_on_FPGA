module i2c_top(
	input clk,rst,wr,
	input [6:0] addr,
	input [7:0] din,
	output [7:0] datard,
	output reg done
);

	wire update,sdan,send_ack_start,send_ack_end,en;
	
	wire scl,sdat,temp_done;
	
	wire [7:0] temprd;

	
	i2c_master master_dut (
    .clk(clk),
    .rst(rst),
    .wr(wr),
    .addr(addr),
    .din(din),
    .update(update),
    .sdan(sdan),
    .send_ack_start(send_ack_start),
    .send_ack_end(send_ack_end),
    .en(en),
    .temprd(temprd),
    .done(temp_done),
    .scl(scl),
    .sdat(sdat)
	);

	
	
	i2c_slave slave_dut (.clk(clk),.rst(rst),.en(en),.sdat(sdat),.scl(scl),.update(update),.sdan(sdan),.send_ack_start(send_ack_start),.send_ack_end(send_ack_end));
	
	assign datard = temprd;
	
	assign done = temp_done;
	
endmodule
	
