module lfsr #(
    parameter LFSR_WIDTH = 24
)(
    input  logic                    i_clk   ,
    input  logic                    i_rst_n ,
    input  logic                    i_en    ,
    input  logic [             1:0] i_sel   ,                   
    output logic [LFSR_WIDTH - 1:0] o_noise
);

    logic [LFSR_WIDTH - 1:0] p_noise, n_noise;
    logic feedback;

    always_ff @(posedge i_clk, negedge i_rst_n) begin
        if(~i_rst_n) p_noise <= {'0, 1'b1};
        else         p_noise <= n_noise; 
    end

    assign feedback = p_noise[LFSR_WIDTH - 1] ^ p_noise[LFSR_WIDTH/2] ^ p_noise[LFSR_WIDTH/3] ^ p_noise[0];
    assign n_noise  = i_en ? {p_noise[LFSR_WIDTH - 2:0], feedback} : p_noise;
    //assign o_noise  = p_noise;

    always_comb begin
        case(i_sel)
            2'd0: o_noise = {{6{p_noise[WIDTH - 1]}}, p_noise[WIDTH - 1:6]}; 
            2'd1: o_noise = {{5{p_noise[WIDTH - 1]}}, p_noise[WIDTH - 1:5]};
            2'd2: o_noise = {{4{p_noise[WIDTH - 1]}}, p_noise[WIDTH - 1:4]};
            2'd3: o_noise = {{3{p_noise[WIDTH - 1]}}, p_noise[WIDTH - 1:3]};
        endcase
    end

endmodule