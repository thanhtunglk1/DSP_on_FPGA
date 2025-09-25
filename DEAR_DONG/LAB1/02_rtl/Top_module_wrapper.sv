module Top_module_wrapper #(
    parameter NUM_BTN = 4   ,
    parameter NUM_SW  = 10   
)(
    input logic                         i_clk   ,
    input logic                         i_rst_n ,
    input logic [NUM_BTN-1:0]           i_btn   ,
    input logic [NUM_SW-1:0]            i_sw    ,

    output logic                        o_wave_noise_sel    ,
    output logic [2:0]                  o_wave_sel          ,
    output logic                        o_wave_gain         ,
    output logic [2:0]                  o_square_duty       ,
    output logic                        o_noise_sel         ,
    output logic [1:0]                  o_noise_gain        
); 

//////////////////////////////////////////////////////////
// Internal Signal
//////////////////////////////////////////////////////////
typedef enum logic [2:0] { 
    IDLE        = 3'b000    ,
    ECG         = 3'b011    ,
    SIN         = 3'b100    ,
    SQUARE      = 3'b101    ,
    TRIANGLE    = 3'b110    ,
    SAWMOOTH    = 3'b111    
} mode_e;
logic [2:0] w_mode;

//////////////////////////////////////////////////////////
// 
//////////////////////////////////////////////////////////


always_ff @( posedge i_clk or negedge i_rst_n ) begin
    if(~i_rst_n) begin
        
    end else begin
        
    end
end

endmodule
