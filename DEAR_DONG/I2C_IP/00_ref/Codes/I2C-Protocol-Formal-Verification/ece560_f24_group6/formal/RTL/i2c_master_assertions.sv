module i2c_master_assertions (
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
			(state == idle) |-> (next_state == start);
	endproperty
	
	a1: assert property(p1);
	
	
	property p2;
		@(posedge clk) disable iff(rst)
			(state == start) |-> (next_state == send_addr);
	endproperty
	
	a2: assert property(p2);
	
	
	property p3;
		@(posedge clk) disable iff(rst)
			(state == send_addr) && (count > 7) |-> (next_state == get_ack1);
	endproperty
	
	a3: assert property(p3);
	
	
	property p4;
		@(posedge clk) disable iff(rst)
			(state == send_addr) && (count <= 7) |-> (next_state == send_addr);
	endproperty
	
	a4: assert property(p4);
	
	
	property p5;
		@(posedge clk) disable iff(rst)
			(state == get_ack1) && wr && send_ack_start |-> (next_state == send_data);
	endproperty
	
	a5: assert property(p5);
	
	
	property p6;
		@(posedge clk) disable iff(rst)
			(state == get_ack1) && !wr && send_ack_start |-> (next_state == read_data);
	endproperty
	
	a6: assert property(p6);
	
	
	property p7;
		@(posedge clk) disable iff(rst)
			(state == send_data) && (count > 7) |=> ($past(next_state) == get_ack2);
	endproperty
	
	a7: assert property(p7);
	
	
	property p8;
		@(posedge clk) disable iff(rst)
			(state == send_data) && (count <= 7) |-> (next_state == send_data);
	endproperty
	
	a8: assert property(p8);
	
	
	property p9;
		@(posedge clk) disable iff(rst)
			(state == get_ack2) && !sdan && send_ack_end |-> (next_state == complete);
	endproperty
	
	a9: assert property(p9);


	property p10;
		@(posedge clk) disable iff(rst)
			(state == complete) && update |-> done;
	endproperty

	a10: assert property(p10);
	
	
	property p11;
		@(posedge clk) disable iff(rst)
			(state == read_data) && (count > 9) |-> (next_state == complete);
	endproperty
	
	a11: assert property(p11);
	
	
	property p12;
		@(posedge clk) disable iff(rst)
			(state == read_data) && (count <= 9) |-> (next_state == read_data);
	endproperty
	
	a12: assert property(p12);
	
	
	property p13;
		@(posedge clk) disable iff(rst)
			(state == complete) && update |-> (next_state == idle);
	endproperty
	
	a13: assert property(p13);
	
	
	property p14;
		@(posedge clk) disable iff(rst)
			(state == complete) && !update |-> (next_state == complete);
	endproperty
	
	a14: assert property(p14);


	property p15;
		@(posedge clk) disable iff(rst)
			(state == idle) |-> sdat == 1'b1;
	endproperty
	
	a15: assert property(p15);

	property p16;
		@(posedge clk) disable iff(rst)
			(state == get_ack1) && !sdan && wr |-> (en == 1);
	endproperty
	
	a16: assert property(p16);

	
endmodule
