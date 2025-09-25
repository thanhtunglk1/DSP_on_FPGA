module TWI_master #(
    parameter SIZE_ADDR     = 7 ,
    parameter SIZE_DATA     = 8 ,
    parameter SIZE_REG      = 16
)(
    input logic                 i_clk   ,
    input logic                 i_rst_n ,

    input logic                 i_TWIEN ,
    input logic [SIZE_REG-1:0]  i_TWIWD , // TWI write data 
    input logic [SIZE_REG-1:0]  i_TWIBR , // TWI baud rate = (f_sys) / (4 * f_i2c)
    output logic [SIZE_REG-1:0] o_TWIRD , // TWI read data 

    output logic                TWI_SCL , // Serial Clock line
    inout tri                   TWI_SDA   // Serial Data line 
);

//==================================
// Parameter 
//==================================
parameter NUM_CMD = 3;
typedef enum logic [NUM_CMD-1:0] {
    CMD_START   = 0 ,
    CMD_WR      = 1 ,
    CMD_RD      = 2 ,
    CMD_STOP    = 3 ,
    CMD_RESTART = 4 ,
    CMD_ADDRESS = 5 
} CMD_e;
CMD_e command;
assign command = i_TWIWD[(SIZE_DATA+NUM_CMD)-1:SIZE_DATA];

parameter SIZE_FSM = 3;
typedef enum logic [SIZE_FSM-1:0] {
    FSM_IDLE    = 0 ,
    FSM_START   = 1 ,
    FSM_ADDRESS = 2 ,
    FSM_HOLD    = 3 ,
    FSM_RESTART = 4 ,
    FSM_READ    = 5 ,
    FSM_WRITE   = 6 ,
    FSM_STOP    = 7
} FSM_e;
FSM_e state, n_state;

//==================================
// Variable
//==================================
logic [SIZE_ADDR-1:0] r_TWI_ADDRESS;
logic [SIZE_DATA-1:0] r_TWI_RR, r_TWI_WR;
logic r_ack, r_ready;
logic r_RW;

// -- detect condition
logic r_Start_condition, r_Stop_condition;

//==================================
// Assign signal
//==================================
// -- TWI Read Data 
assign o_TWIRD[SIZE_DATA-1:0] = r_TWI_RR;
assign o_TWIRD[SIZE_ADDR] = r_ready;
assign o_TWIRD[SIZE_DATA+1] = r_ack;
// -- TWI Write Data 
assign command = i_TWIWD[(SIZE_ADDR+NUM_CMD):SIZE_ADDR+1];
always_ff @(posedge i_clk or negedge i_rst_n) begin
    if(~i_rst_n) begin
        r_TWI_ADDRESS <= '0;
        r_RW          <= 1'b1; // auto read
    end else begin
        if(command == CMD_ADDRESS) begin
            r_TWI_ADDRESS   <= i_TWIWD[SIZE_ADDR-1:0];
            r_RW            <= i_TWIWD[SIZE_ADDR];
        end else begin
            r_TWI_ADDRESS   <= r_TWI_ADDRESS;
            r_RW            <= r_RW;
        end 
    end 
end 

// -- FSM signal
logic w_done_RD, w_done_WR;

//==================================
// FSM
//==================================
// -- Process next state 
always_comb begin 
    case(state)
        FSM_IDLE: begin
            n_state = (command == CMD_START) ? FSM_START : FSM_IDLE;
        end 
        FSM_START: begin
            if(r_Start_condition) 
                n_state = FSM_ADDRESS;
            else
                n_state = FSM_START;
        end 
        FSM_ADDRESS: begin
            
        end 
        FSM_HOLD: begin
            if(command == CMD_RESTART) 
                n_state = FSM_RESTART;
            else if(command == CMD_RD)
                n_state = FSM_READ;
            else if(command == CMD_WR)
                n_state = FSM_WRITE;
            else if(command == CMD_STOP)
                n_state = FSM_STOP;
            else
                n_state = FSM_HOLD;
        end 
        FSM_RESTART: begin
            n_state = FSM_START;
        end 
        FSM_WRITE: begin
            if(w_done_WR) begin
                if(r_ack) // ACK = 1 -> NACK
                    n_state = FSM_STOP;
                else // ACK = 0 -> ACK 
                    n_state = FSM_HOLD;
            end else begin
                n_state = FSM_WRITE;
            end 
        end 
        FSM_READ: begin
            if(w_done_RD) begin
                // Once I have received all the data into the r_TWI_RR
                // register (with size = SIZE_DATA), the Master is required to
                // send an ACK signal to the Slave. So, in which state of the
                // FSM should the ACK be generated, and should it also depend
                // on other control signals?
                n_state = FSM_HOLD; 
            end else begin
                n_state = FSM_READ;
            end 
        end 
        FSM_STOP: begin

        end 
        default: begin

        end 
    endcase 
end 
// -- Output next state
always_ff @(posedge i_clk or negedge i_rst_n) begin 
    if(~i_rst_n) begin
        state <= FSM_IDLE;
    end else begin
        state <= (i_TWIEN) ? n_state : FSM_IDLE;
    end 
end 
// -- Output logic 
always_comb begin
    case(state)
        FSM_IDLE: begin

        end 
        FSM_START: begin

        end 
        FSM_ADDRESS: begin

        end 
        FSM_HOLD: begin

        end 
        FSM_RESTART: begin

        end 
        FSM_WRITE: begin

        end 
        FSM_READ: begin

        end 
        FSM_STOP: begin

        end 
        default: begin

        end 
    endcase 
end 

endmodule

