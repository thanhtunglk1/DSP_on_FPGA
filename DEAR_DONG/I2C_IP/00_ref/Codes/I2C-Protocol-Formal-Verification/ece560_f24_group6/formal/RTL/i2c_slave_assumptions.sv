module i2c_slave_assumptions (
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
			state inside {get_data, send_data} |-> (datan <= 8'hFF && data_rd <= 8'hFF);
	endproperty

	a1: assume property(p1);


	property p2;
		@(posedge clk) disable iff(rst)
			state == start |-> next_state == get_addr;
	endproperty

	a2: assume property(p2);


	property p3;
		@(posedge clk)
			state inside {get_addr, get_data} |-> $stable(addrn);
	endproperty

	a3: assume property(p3);

endmodule
