module sine_gen_test #(
    parameter SAMP_WIDTH = 24  ,
    parameter SAMP_DEPTH = 1024,
    parameter SAMP_LINK  = "../04_fir_cof/sine_wave.txt"
)(
    input  logic                    i_clk       ,
    input  logic                    i_rst_n     ,
    input  logic                    i_tick_samp ,
    output logic [SAMP_WIDTH - 1:0] o_sine_wave
);

    localparam SAMP_ADDR = $clog2(SAMP_DEPTH);

    logic [SAMP_ADDR - 1:0] p_addr, n_addr;
    assign n_addr = i_tick_samp ? (p_addr + 1) : p_addr;

    always_ff @(posedge i_clk, negedge i_rst_n) begin
        if(~i_rst_n) p_addr <= '0    ;
        else         p_addr <= n_addr;
    end

    single_port_ram #(
        .DATA_WIDTH(SAMP_WIDTH), 
        .ADDR_WIDTH(SAMP_ADDR),
        .HEX_LINK(SAMP_LINK)
    ) sine_RAM (
        .i_clk(i_clk),
        .i_wren(1'b0),
        .i_addr(p_addr),
	    .i_st_data('0),
	    .o_ld_data(o_sine_wave)
    );

endmodule