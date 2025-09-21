module config_codec #(
    parameter DEPTH = 11
)(
    input  logic i_clk  , //
    input  logic i_rst_n,

    output logic o_done,
    
    output logic o_scl  ,
    inout  logic io_sda
);

    logic [15:0] reg_setup [DEPTH:0]; 

    assign reg_setup[ 0] = 16'b0001_111_0_0000_0000; //R15 reset all                                        | addr: 0001_111  15| data: 0_0000_0000                              
    assign reg_setup[ 1] = 16'b0000_010_0_0001_0000; //R6  Power up EX OUTPD                                | addr: 0000_110   6| data: 0_0001_0000  
    assign reg_setup[ 2] = 16'b0000_010_1_0111_1001; //R2  LV 0dB balance                                   | addr: 0000_010   2| data: 1_0111_1001
    assign reg_setup[ 3] = 16'h0000_011_1_0111_1001; //R3  RV 0dB balance                                   | addr: 0000_011   3| data: 1_0111_1001 
    //assign reg_setup[ 4] = 16'b0000_000_0_0001_0111; //R0  0dB - Not Mute                                   | addr: 0000_000   0| data: 0_0001_0111 
    //assign reg_setup[ 5] = 16'b0000_001_0_0001_0111; //R1  0dB - Not Mute                                   | addr: 0000_001   1| data: 0_0001_0111
    assign reg_setup[ 4] = 16'b0000_000_0_1000_0000; //R0  Mute Linein                                      | addr: 0000_000   0| data: 0_1000_0000 
    assign reg_setup[ 5] = 16'b0000_001_0_1000_0000; //R1  Mute Linein                                      | addr: 0000_001   1| data: 0_1000_0000
    assign reg_setup[ 6] = 16'b0000_100_0_0001_0000; //R4  LINEIN selected to ADC, mute MICIN               | addr: 0000_100   4| data: 0_0001_0000  
    assign reg_setup[ 7] = 16'b0000_101_0_0000_0000; //R5                                                   | addr: 0000_101   5| data: 0_0000_0000   
    assign reg_setup[ 8] = 16'b0000_111_0_0000_0000; //R7  24bit MSB first                                  | addr: 0000_111   7| data: 0_0000_1000 
    assign reg_setup[ 9] = 16'b0001_000_0_0000_0001; //R8  USB mode, MCLK 12Mhz, 48Khz sampling             | addr: 0001_000   8| data: 0_0000_0001 
    assign reg_setup[10] = 16'b0001_001_0_0000_0001; //R9  active                                           | addr: 0001_001   9| data: 0_0000_0001   
    assign reg_setup[11] = 16'b0000_110_0_0000_0010; //R6  Not PD: LINEOUT, LINEIN, ADC, DAC...; PD: Mic in | addr: 0000_110   6| data: 0_0000_0010

    /*
    assign reg_setup[ 0] = 16'h1e00; //R15 reset all                                        | addr: 0001_111  15| data: 0_0000_0000                              
    assign reg_setup[ 1] = 16'h0c10; //R6  Power up EX OUTPD                                | addr: 0000_110   6| data: 0_0001_0000  
    assign reg_setup[ 2] = 16'h0579; //R2  LV 0dB balance                                   | addr: 0000_010   2| data: 1_0111_1001
    assign reg_setup[ 3] = 16'h0779; //R3  RV 0dB balance                                   | addr: 0000_011   3| data: 1_0111_1001 
    //assign reg_setup[ 4] = 16'h0017; //R0  0dB - Not Mute                                   | addr: 0000_000   0| data: 0_0001_0111 
    //assign reg_setup[ 5] = 16'h0217; //R1  0dB - Not Mute                                   | addr: 0000_001   1| data: 0_0001_0111
    assign reg_setup[ 4] = 16'h0080; //R0  Mute Linein                                             | addr: 0000_000   0| data: 0_1000_0000 
    assign reg_setup[ 5] = 16'h0280; //R1  Mute Linein                                             | addr: 0000_001   1| data: 0_1000_0000
    assign reg_setup[ 6] = 16'h0810; //R4  LINEIN selected to ADC, mute MICIN               | addr: 0000_100   4| data: 0_0001_0000  
    assign reg_setup[ 7] = 16'h0a00; //R5                                                   | addr: 0000_101   5| data: 0_0000_0000   
    assign reg_setup[ 8] = 16'h0e08; //R7  24bit MSB first                                  | addr: 0000_111   7| data: 0_0000_1000 
    assign reg_setup[ 9] = 16'h1001; //R8  USB mode, MCLK 12Mhz, 48Khz sampling             | addr: 0001_000   8| data: 0_0000_0001 
    assign reg_setup[10] = 16'h1201; //R9  active                                           | addr: 0001_001   9| data: 0_0000_0001   
    assign reg_setup[11] = 16'h0c02; //R6  Not PD: LINEOUT, LINEIN, ADC, DAC...; PD: Mic in | addr: 0000_110   6| data: 0_0000_0010
    */

    typedef enum logic [1:0] {
        IDLE ,
        START,
        HOLD ,
        DONE
    } e_state;

    e_state reg_state, next_state;

    always_ff @(posedge i_clk, negedge i_rst_n) begin
        if(~i_rst_n) reg_state <= IDLE      ;
        else         reg_state <= next_state;
    end

    logic [3:0] reg_counter, next_counter;

    always_ff @(posedge i_clk, negedge i_rst_n) begin
        if(~i_rst_n) reg_counter <='0           ;
        else         reg_counter <= next_counter;
    end

    logic  done, start, ready;
    assign done = (reg_counter == DEPTH);

    logic [15:0] trans_data;

    always_comb begin
        case(reg_state)
            IDLE    : next_state = START;
            START   : next_state = HOLD ;
            HOLD    : next_state = ready ? (done ? DONE : START) : HOLD;
            DONE    : next_state = DONE ;
            default : next_state = IDLE ;
        endcase
    end

    always_comb begin
        case(reg_state)
            IDLE    : begin
                start        = 1'b0;
                next_counter = '0;
                trans_data   = reg_setup[reg_counter];
                o_done       = 1'b0;
            end
            START   : begin
                start        = 1'b1;
                next_counter = reg_counter;
                trans_data   = reg_setup[reg_counter];
                o_done       = 1'b0;
            end
            HOLD    : begin
                start        = 1'b0;
                next_counter = ready ? reg_counter + 1'b1 : reg_counter;
                trans_data   = reg_setup[reg_counter];
                o_done       = 1'b0;
            end
            DONE    : begin
                start        = 1'b0;
                next_counter = reg_counter;
                trans_data   = reg_setup[reg_counter];
                o_done       = 1'b1;
            end
            default : begin
                start        = 1'b0;
                next_counter = reg_counter;
                trans_data   = reg_setup[reg_counter];
                o_done       = 1'b0;
            end
        endcase
    end


    i2c_trans i2c (
        .i_clk       (i_clk),
        .i_rst_n     (i_rst_n),
        //.i_div_clk   (1),
        .i_start     (start),
        .i_addr      (7'b0011010),
        .i_mode      (1'b0), //write
        .i_reg_data  (trans_data),
        .o_ready     (ready),
        .o_scl       (o_scl),
        .io_sda      (io_sda)
    );

endmodule
