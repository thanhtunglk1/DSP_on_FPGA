module wave_rec #(
    parameter DATA_WIDTH = 24   ,
    parameter ADDR_WIDTH = 11   ,
    parameter LINK       = "../01_tb/wave_result.txt"
)(
    input  logic i_clk                    ,
    input  logic i_rst_n                  ,
    input  logic i_en                     ,
    input  logic [DATA_WIDTH - 1:0] i_data
);

    logic [ADDR_WIDTH - 1:0] p_addr, n_addr;

    assign n_addr = i_en ? p_addr + 1'b1 : p_addr;

    always_ff @(posedge i_clk, negedge i_rst_n) begin
            if(~i_rst_n)    p_addr <= '0    ;
            else            p_addr <= n_addr;
    end

    single_port_ram_x #(
        .DATA_WIDTH(DATA_WIDTH), 
        .ADDR_WIDTH(ADDR_WIDTH),
        .HEX_LINK(LINK)
    ) sine_RAM (
        .i_clk(i_clk),
        .i_wren(i_en),
        .i_addr(p_addr),
	    .i_st_data(i_data),
	    .o_ld_data()
    );

endmodule

module single_port_ram_x #(
    parameter DATA_WIDTH = 8, 
    parameter ADDR_WIDTH = 11,
	parameter HEX_LINK	 = "../01_tb/wave_result.txt"
)(
    input  logic                      i_clk,
    input  logic                      i_wren,
    input  logic [(ADDR_WIDTH - 1):0] i_addr,
	input  logic [(DATA_WIDTH - 1):0] i_st_data,

	output logic [(DATA_WIDTH - 1):0] o_ld_data
);
	
	reg [DATA_WIDTH - 1:0] ram [2**ADDR_WIDTH - 1:0];

    initial $readmemh(HEX_LINK, ram);

	reg [ADDR_WIDTH - 1:0] addr_reg;

	always @ (posedge i_clk) begin : proc_ram
		if (i_wren) ram[i_addr] <= i_st_data;

		addr_reg <= i_addr;
	end
	  
	assign o_ld_data = ram[addr_reg];

    final $writememh(HEX_LINK, ram);

endmodule
