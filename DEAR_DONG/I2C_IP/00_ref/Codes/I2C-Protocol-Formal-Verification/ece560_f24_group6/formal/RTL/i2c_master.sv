module i2c_master
(
	input clk, rst, wr,
	input [6:0] addr,
	input [7:0] din,
	input update,
	input sdan,
	input send_ack_start,
	input send_ack_end,
	output reg en,
	output reg [7:0] temprd,
	output reg done,
	output reg scl,
	output reg sdat
);

	reg [3:0] count;
	integer sum = 0;

	reg [7:0] addrt;
	
	
	parameter
		idle = 0,
		start = 1,
		send_addr = 2,
		get_ack1 = 3,
		send_data = 4,
		get_ack2 = 5,
		read_data = 6,
		complete = 7;
		
	reg [2:0] state, next_state;
	
	
	
	always_ff @(posedge clk) begin
		if(rst)
			state <= idle;
		else
			state <= next_state;
	end

	always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            count <= 4'b0000;
        end else begin
            case (state)
                idle: count <= 4'b0000; // Reset count in idle state
                send_addr: if (count <= 7) count <= count + 1;
                send_data: if (count <= 7) count <= count + 1;
                read_data: if (count <= 9) count <= count + 1;
                default: count <= 4'b0000;
            endcase
        end
    end
	
	always@(*) begin
		unique case (state)
			idle	:	begin
							en    = 1'b1;
							scl   = 1'b1;
							sdat  = 1'b1;
							//count = 4'b0;
							done = 1'b0;
							sum = 0;
							temprd = 0;
						end
			start	:	begin
							sdat  = 1'b0;
							scl = 1'b1;
							addrt = {addr,wr};
						end
			send_addr:	begin
							if(count <= 7) begin
								sdat = addrt[count];
							end
							else begin
								//count = 0;
								
							end
										
						end
			get_ack1:	begin 
							if(sdan == 1'b0) begin
								if(wr == 1'b1)
									en = 1'b1;
								else if (wr == 1'b0 )
									en = 1'b0;
							end
						end
			send_data:	begin
							if(count <= 7) begin
								sdat = din[count];
								
							end
							else begin
								//count = 0;
							
							end 
						end
			get_ack2:	begin
							//get_ack_end = 1;
						end
			read_data:	begin
							if(count <= 9) begin
							
								temprd[7:0] = {sdan,temprd[7:1]}; 
								//count = count + 4'b0001;
							end
							//else
								//count = 0;
						end
			complete:	begin
							if(update)
								done = 1'b1;
						end
		endcase
		
	end
	
	
	always_comb begin
		next_state = state;
		unique case(state)
			idle	:	next_state = start;
			start	:	next_state = send_addr;
			send_addr:	begin 
							if(count > 7)
								next_state = get_ack1;
							else
								next_state = send_addr;
						end
			get_ack1:	begin
							if(wr == 1'b1 && send_ack_start == 1)
								next_state = send_data;
							else if(wr == 1'b0 && send_ack_start == 1)
								next_state = read_data;
							else
								next_state = get_ack1;
						end
			send_data:	begin
							if(count > 7)
								next_state = get_ack2;
							else
								next_state = send_data;
						end
			get_ack2:	begin
							if(sdan == 1'b0 && send_ack_end == 1)
							  next_state = complete;
							else
							  next_state = get_ack2;
						end
			read_data:	begin
							if(count > 9)
								next_state = complete;
							else
								next_state = read_data;
						end
			complete:	begin
							if(update)
								next_state = idle;
							else
								next_state = complete;
						end
			default	:	next_state = idle;
		endcase
	end
	
endmodule
	

	

