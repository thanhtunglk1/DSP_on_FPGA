module Start_condition (
    input logic                 i_clk   ,
    input logic                 i_rst_n ,
    input logic                 i_en    ,
    input logic                 i_SCL   ,
    output logic                o_SDA   ,
    output logic                o_done  
);

//==================================
// Parameter 
//==================================
logic w_en;

typedef enum logic [1:0] {
    PHY_1 = 2'd0,
    PHY_2 = 2'd1,
    PHY_3 = 2'd2,
    PHY_4 = 2'd3
} phase_e;
phase_e phase, n_phase;
//==================================
// Module
//==================================
Detect_edge Detect_edge_unit(
    .i_clk       (i_clk),
    .i_rst_n     (i_rst_n),
    .i_pos_edge  (1'b1),
    .i_signal    (i_en),
    .o_signal    (w_en) 
);

//==================================
// Process
//==================================
//    ____ 
//scl  ST \
//    __   
//sda   \__

always_comb begin
    case(phase)
        PHY_1:
            n_phase = (w_en & i_SCL) ? PHY_2 : PHY_1;
        PHY_2:
            n_phase = PHY_3;
        PHY_3:
            n_phase = PHY_4;
        PHY_4: 
            n_phase = PHY_1;
        default:
            n_phase = PHY_1;
    endcase
end 
always_ff @(posedge i_clk or negedge i_rst_n) begin
    if(~i_rst_n)
        phase <= PHY_1;
    else
        phase <= n_phase;
end 

always_ff @(posedge i_clk or negedge i_rst_n) begin 
    if(~i_rst_n) begin
        o_SDA   <= 1'b1;
        o_done  <= 1'b0;
    end else begin
        case(phase)
            PHY_1: begin
                o_SDA   <= 1'b1;
                o_done  <= 1'b0;
            end 
            PHY_2, PHY_3: begin
                o_SDA   <= 1'b0;
                o_done  <= 1'b0;
            end 
            PHY_4: begin
                o_SDA   <= 1'b0;
                o_done  <= 1'b1;
            end 
            default: begin
                o_SDA   <= 1'b1;
                o_done  <= 1'b0;
            end 
        endcase
    end 
end 
endmodule

