module i2c_slave_assertions (
	input wire clk,rst,en,
	input wire sdat,scl,
	input wire update,sdan,
	input wire send_ack_start,send_ack_end,
	input wire [3:0] countn,
	input wire [7:0] addrn,data_rn,datan,
	input wire [2:0] state, next_state
);

	parameter idle = 0;
	parameter start = 1;
	parameter get_addr = 2;
	parameter send_ack1 = 3;
	parameter get_data = 4;
	parameter send_ack2 = 5;
	parameter send_data = 6;
	parameter complete = 7;
	
	
	
	property p1;
		@(posedge clk) disable iff(rst)
			(state == idle) && scl && sdat |-> (next_state == start);
	endproperty
	
	a1: assert property(p1);
	
	
	property p2;
		@(posedge clk) disable iff(rst)
			(state == start) && scl && !sdat |-> (next_state == get_addr);
	endproperty
	
	a2: assert property(p2);
	
	
	property p3;
		@(posedge clk) disable iff(rst)
			(state == get_addr) && (countn <= 7) |-> (next_state == get_addr);
	endproperty
	
	a3: assert property(p3);
	
	
	property p4;
		@(posedge clk) disable iff(rst)
			(state == get_addr) && (countn > 7) |-> (next_state == send_ack1);
	endproperty
	
	a4: assert property(p4);
	
	
	property p5;
		@(posedge clk) disable iff(rst)
			(state == send_ack1) && en |-> (next_state == get_data);
	endproperty
	
	a5: assert property(p5);
	
	
	property p6;
		@(posedge clk) disable iff(rst)
			(state == send_ack1) && !en |-> (next_state == send_data);
	endproperty
	
	a6: assert property(p6);
	
	
	property p7;
		@(posedge clk) disable iff(rst)
			(state == get_data) && (countn > 7) |-> (next_state == send_ack2);
	endproperty
	
	a7: assert property(p7);
	
	
	property p8;
		@(posedge clk) disable iff(rst)
			state == send_ack2 |-> next_state == complete;
	endproperty
	
	a8: assert property(p8);
	
	
	property p9;
		@(posedge clk) disable iff(rst)
			(state == send_data) && (countn <= 7) |-> (next_state == send_data);
	endproperty
	
	a9: assert property(p9);
	
	
	property p10;
		@(posedge clk) disable iff(rst)
			(state == send_data) && (countn > 7) |-> (next_state == complete);
	endproperty
	
	a10: assert property(p10);
	
	
	property p11;
		@(posedge clk) disable iff(rst)
			(state == complete) |-> (next_state == idle);
	endproperty
	
	a11: assert property(p11);
	
	
	property p12;
		@(posedge clk) disable iff(rst)
			update |-> (state == complete);
	endproperty
	
	a12: assert property(p12);


	
endmodule
