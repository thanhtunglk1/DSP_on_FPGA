package TWI_pkg;

parameter SIZE_FSM = 4;
typedef enum logic [SIZE_FSM-1:0] {
    FSM_IDLE    = 0 ,
    FSM_START1  = 1 ,
    FSM_START2  = 2 ,
    FSM_HOLD    = 3 ,
    FSM_RESTART = 4 ,
    FSM_STOP1   = 5 ,
    FSM_STOP2   = 6 ,
    FSM_DATA    = 7 ,
    FSM_DATAEND = 8
} FSM_e;

parameter NUM_CMD = 3;
typedef enum logic [NUM_CMD-1:0] {
    CMD_START   = 0 ,
    CMD_WR      = 1 ,
    CMD_RD      = 2 ,
    CMD_STOP    = 3 ,
    CMD_RESTART = 4
} CMD_e;

endpackage

