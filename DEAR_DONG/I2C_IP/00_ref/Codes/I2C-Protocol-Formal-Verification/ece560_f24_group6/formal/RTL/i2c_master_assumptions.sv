module i2c_master_assumptions (
	input wire clk,rst,wr,
	input wire [6:0] addr,
	input wire [7:0] din,
	input wire update,
	input wire sdan,
	input wire send_ack_start,
	input wire send_ack_end,
	input wire en,
	input wire [7:0] temprd,
	input wire done,
	input wire scl,
	input wire sdat,
	input wire [2:0] state, 
	input wire [2:0] next_state,
	input wire [3:0] count
	);

	parameter idle = 0;
	parameter start = 1;
	parameter send_addr = 2;
	parameter get_ack1 = 3;
	parameter send_data = 4;
	parameter get_ack2 = 5;
	parameter read_data = 6;
	parameter complete = 7;
	
	
	property p1;
		@(posedge clk) disable iff(rst)
			(state == start) |-> sdat == 0 && scl == 1;
	endproperty

	a1: assume property(p1);


	property p2;
		@(posedge clk) disable iff(rst)
			(state == send_addr) |-> $stable(wr);
	endproperty

	a2: assume property(p2);

	property p3;
		@(posedge clk) disable iff(rst)
			(state == send_data) |-> $stable(din);
	endproperty

	a3: assume property(p3);

	
	

endmodule
