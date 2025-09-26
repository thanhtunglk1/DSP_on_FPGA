module sine_gen #(
    parameter SAMP_WIDTH = 24  ,
    parameter SAMP_DEPTH = 1024,
    parameter SAMP_LINK  = "../04_fir_cof/sine_wave.txt"
)(
    input  logic                    i_clk       ,
    input  logic                    i_rst_n     ,
    input  logic [            15:0] i_phase_step, //16'd1042 48kHz 
    output logic                    o_phase_tick,
    output logic [SAMP_WIDTH - 1:0] o_sine_wave
);

    localparam SAMP_ADDR = $clog2(SAMP_DEPTH);

    logic [15:0] p_count, n_count;

    logic  tick;
    assign tick = (p_count == i_phase_step);  

    assign n_count = tick ? '0 : (p_count + 1);

    always_ff @(posedge i_clk, negedge i_rst_n) begin: proc_devider_update
        if (~i_rst_n) p_count <= '0;
        
        else          p_count <= n_count;
    end

    assign o_phase_tick = tick;

    logic [SAMP_ADDR - 1:0] p_addr, n_addr;
    assign n_addr = tick ? (p_addr + 1) : p_addr;

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