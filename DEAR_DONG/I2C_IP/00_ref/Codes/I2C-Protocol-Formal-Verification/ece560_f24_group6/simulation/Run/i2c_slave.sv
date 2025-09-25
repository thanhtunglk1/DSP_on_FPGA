module i2c_slave
(
	input clk, rst, en,
	input sdat,
	input scl,
	output reg update,
	output reg sdan,
	output reg send_ack_start,
	output reg send_ack_end
);
	parameter MSB = 8'hFF;
	parameter LSB = 8'h00;
	parameter file = "MEM_CONTENTS.txt";
	 
	reg [7:0] mem [MSB:LSB];
	reg [3:0] countn;
	reg [7:0] addrn, data_rd, datan;
	
	
	typedef enum logic [3:0] {idle = 0, start = 1, get_addr = 2, send_ack1 = 3, get_data = 4, send_ack2= 5, send_data = 6, complete = 7} state_t;
		
	state_t state, next_state;
	
	
	
	always_ff @(posedge clk) begin
		if(rst) begin
			state <= idle;
		end
		else
			state <= next_state;
	end

	always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            countn <= 4'b0000;
        end else begin
            case (state)
                idle: countn <= 4'b0000; // Reset count in idle state
                get_addr: if (countn <= 7) countn <= countn + 1;
                get_data: if (countn <= 7) countn <= countn + 1;
                send_data: if (countn <= 7) countn <= countn + 1;
                default: countn <= 4'b0000;
            endcase
        end
    end

	always@(*) begin
		unique case(state)
			idle	: 	begin
							addrn  = 0;
							datan  = 0;
							update = 0;
							data_rd = 0;
							for(int i = 0; i < 128; i++)
								mem[i] <= 0;
						end
			start	:	begin
							//countn = 0;
						end
			get_addr:	begin
							if(countn <= 7) begin
								addrn[countn] = sdat;
							end
							else begin
								if(addrn[0] == 1'b0)
									data_rd = mem[addrn[7:1]];
							end
						end
			send_ack1:	begin
							sdan = 1'b0;
							send_ack_start = 1'b1;
						end

			get_data:	begin
							if(countn <= 7) begin
								datan[countn] = sdat;
							end
							else begin
								mem[addrn[7:1]] = datan;
							end
						end

			send_ack2:	begin 
							sdan  = 1'b0;
							send_ack_end = 1'b1;
						end


			send_data: begin
							if(countn <= 7) begin
								sdan   = data_rd[countn];
							end
						end
		
		
			complete:	begin
							update  = 1'b1;
						end
		endcase
	end

	always_comb begin
		next_state = state;
		unique case(state)
			idle	:	begin
							if(scl && sdat)
								next_state = start;
							else
								next_state = idle;
						end   

			start	:	begin
							if(scl && !sdat)
								next_state = get_addr;
							else
								next_state = start; 
						end

			get_addr:	begin 
							if(countn <= 7)
								next_state = get_addr;
		
							else
								next_state = send_ack1;
						end 

			send_ack1:	begin 
							
								if(en == 1'b1)
								begin 
									next_state = get_data;
								end
								else if(en == 1'b0)
									next_state = send_data;
								else
									next_state = send_ack1;
						end

			get_data:	begin
							if(countn <= 7) begin
								next_state = get_data;
							end
							else begin
								next_state  = send_ack2;
							end
						end

			send_ack2:	begin 
							next_state = complete; 
						end
			send_data:	begin
							if(countn <= 7) begin
								next_state = send_data;
							end
							else
							begin
								next_state  = complete;
							end
						end
		
		
			complete:	begin
							next_state  = idle; 
						end

			default:	next_state = idle;
    endcase 
end 

initial 
	begin
	$readmemh(file, mem , MSB , LSB);
	end
	

endmodule 
