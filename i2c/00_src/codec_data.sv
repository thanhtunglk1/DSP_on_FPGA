module codec_data(
    input  logic        i_clk        ,  //12MHz - MCLK
    input  logic        i_rst_n      ,
    input  logic        i_config_done,
    input  logic [23:0] i_p2s_in     ,
    output logic        o_bclk       ,
    output logic        o_daclrck    ,
    output logic        o_sample_up  ,
    output logic        o_dac_dat
);

    typedef enum logic [3:0] {
        IDLE            ,
        LEFT_SETUP_I    ,
        LEFT_SETUP_II   ,
        LEFT_HOLD_I     ,
        LEFT_HOLD_II    ,
        LEFT_HOLD_III   ,
        RIGHT_SETUP_I   ,
        RIGHT_SETUP_II  ,
        RIGHT_HOLD_I    ,
        RIGHT_HOLD_II   ,
        RIGHT_HOLD_III
    } e_state;

    e_state reg_state, next_state; 

    logic [4:0] reg_index, next_index;

    logic [23:0] reg_data_dac;
    logic [24:0] data_trans_dac;
    assign data_trans_dac = {reg_data_dac, 1'b0};

    logic samp_detect;

    always_ff @(posedge i_clk, negedge i_rst_n) begin
        if(~i_rst_n)          reg_data_dac <= '0      ;
        else if(samp_detect) reg_data_dac <= i_p2s_in;
    end


    always_ff @(posedge i_clk, negedge i_rst_n) begin
        if(~i_rst_n) begin
            reg_index <= '0         ;
            reg_state <= IDLE       ;
        end

        else begin
            reg_index <= next_index ;
            reg_state <= next_state ;
        end
    end

    logic count_done;
    assign count_done = (reg_index == '0);

    always_comb begin
        case(reg_state)
            IDLE            : next_state = i_config_done ? LEFT_SETUP_I : IDLE;
            LEFT_SETUP_I    : next_state = LEFT_SETUP_II    ;
            LEFT_SETUP_II   : next_state = LEFT_HOLD_I      ;
            LEFT_HOLD_I     : next_state = LEFT_HOLD_II     ;
            LEFT_HOLD_II    : next_state = LEFT_HOLD_III    ;
            LEFT_HOLD_III   : next_state = count_done ? RIGHT_SETUP_I : LEFT_SETUP_I;
            RIGHT_SETUP_I   : next_state = RIGHT_SETUP_II   ;
            RIGHT_SETUP_II  : next_state = RIGHT_HOLD_I     ;
            RIGHT_HOLD_I    : next_state = RIGHT_HOLD_II    ;
            RIGHT_HOLD_II   : next_state = RIGHT_HOLD_III   ;
            RIGHT_HOLD_III  : next_state = count_done ? LEFT_SETUP_I  : RIGHT_SETUP_I;
            default         : next_state = IDLE;
        endcase
    end

    always_comb begin
        case(reg_state)
            IDLE            : begin
                o_bclk      = 1'b1 ;
                o_daclrck   = 1'b0 ;
                next_index  = 5'd24;
            end

            LEFT_SETUP_I    : begin
                o_bclk      = 1'b0 ;
                o_daclrck   = 1'b1 ;
                next_index  = reg_index;
            end
            
            LEFT_SETUP_II   : begin
                o_bclk      = 1'b0 ;
                o_daclrck   = 1'b1 ;
                next_index  = reg_index;
            end

            LEFT_HOLD_I     : begin
                o_bclk      = 1'b1 ;
                o_daclrck   = 1'b1 ;
                next_index  = reg_index;
            end

            LEFT_HOLD_II    : begin
                o_bclk      = 1'b1 ;
                o_daclrck   = 1'b1 ;
                next_index  = reg_index;
            end

            LEFT_HOLD_III   : begin
                o_bclk      = 1'b1 ;
                o_daclrck   = 1'b1 ;
                next_index  = count_done ? 5'd24 : reg_index - 1'b1;
            end

            RIGHT_SETUP_I   : begin
                o_bclk      = 1'b0 ;
                o_daclrck   = 1'b0 ;
                next_index  = reg_index;
            end

            RIGHT_SETUP_II  : begin
                o_bclk      = 1'b0 ;
                o_daclrck   = 1'b0 ;
                next_index  = reg_index;
            end

            RIGHT_HOLD_I    : begin
                o_bclk      = 1'b1 ;
                o_daclrck   = 1'b0 ;
                next_index  = reg_index;
            end

            RIGHT_HOLD_II   : begin
                o_bclk      = 1'b1 ;
                o_daclrck   = 1'b0 ;
                next_index  = reg_index;
            end

            RIGHT_HOLD_III  : begin
                o_bclk      = 1'b1 ;
                o_daclrck   = 1'b0 ;
                next_index  = count_done ? 5'd24 : reg_index - 1'b1;
            end

            default         : begin
                o_bclk      = 1'b1 ;
                o_daclrck   = 1'b1 ;
                next_index  = reg_index;
            end
        endcase
    end

    assign o_dac_dat   = data_trans_dac[reg_index];
    assign o_sample_up = samp_detect              ;

    rise_edge_detect #(
        .WIDTH(1)
    ) daclr_rise_egde_detect (
        .i_clk       (i_clk),
        .i_rst_n     (i_rst_n),
        .i_detect_in (o_daclrck), 
        .o_detect_out(samp_detect) 
    );

endmodule

module rise_edge_detect #(
    parameter WIDTH = 1
)(
    input  logic               i_clk       ,
    input  logic               i_rst_n     ,
    input  logic [WIDTH - 1:0] i_detect_in , 
    output logic [WIDTH - 1:0] o_detect_out 
);

    logic [WIDTH - 1:0] reg_delay;

    always_ff @(posedge i_clk, negedge i_rst_n) begin
        if(~i_rst_n) reg_delay <= '0         ;
        else         reg_delay <= i_detect_in;
    end

    assign o_detect_out = ~reg_delay & i_detect_in; 

endmodule