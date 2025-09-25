module i2c_top_assertions (
	input wire clk,rst,wr,
	input wire [7:0] din,
	input wire [6:0] addr,
	input wire [7:0] datard, 
	input wire done,
	input wire update
);

	
	property p1;
		@(posedge clk) disable iff(rst)
			update |-> ##[1:$] done;
	endproperty
	
	a1: assert property(p1);
	
endmodule
