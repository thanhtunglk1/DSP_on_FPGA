module Top_gen_wave #(
    parameter NUM_BTN = 4   ,
    parameter NUM_SW  = 10   
)(
    input logic                         i_clk   ,
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
parameter SIZE_WIDTH = 24;
parameter SIZE_DEPTH = 1024;
parameter NUM_WAVE = 3;
parameter NUM_PHASE_STEP = $clog2(SIZE_DEPTH);
parameter NUM_DUTY_CYC_STEP = 3;
parameter NUM_GAIN_STEP = 4;
parameter NUM_GAIN_NOISE = 4;
//- MODE WAVE SELECT
parameter IDLE      = 3'b000;
parameter ECG       = 3'b011;
parameter SIN       = 3'b100;
parameter SQUARE    = 3'b101;
parameter TRIANGLE  = 3'b110;
parameter SAWTOOTH  = 3'b111;
logic w_mode;
assign w_mode = i_sw[8:6];

//-- Signal
logic i_rst_n;
assign i_rst_n = i_sw[NUM_SW-1];
logic w_add_noise; // 0 - sóng thuần túy, 1 - sóng + nhiễu

logic        [NUM_WAVE-1:0] w_sel_wave        ; // chọn loại sóng xuất
logic        [NUM_PHASE_STEP-1:0] w_wave_phase_step ; // chỉnh bước nhảy của NCO của sóng - chỉnh tẩn số
logic        [NUM_DUTY_CYC_STEP-1:0] w_sel_duty_cycle  ; // chọn duty cycle cho sóng vuông
logic signed [NUM_GAIN_STEP:0] w_gain_wave       ; // lựa chọn độ lợi áp khôi phục của sóng

logic                              w_lfsr_sin        ; // 0 - lfsr, 1 - hài bậc cao sóng sine
logic                              w_wave_noise_step ; // chỉnh bước nhảy của NCO của nhiểu sin cao - chỉnh tẩn số
logic signed [NUM_GAIN_NOISE-1:0] w_gain_noise      ; // lựa chọn độ lợi áp khôi phục của nhiễu
    
logic signed [SIZE_WIDTH-1:0] w_wave_out        ;

//////////////////////////////////////////////////////////
// Submodule
//////////////////////////////////////////////////////////

wave_gen #(
    .WIDTH  (SIZE_WIDTH),
    .DEPTH  (SIZE_DEPTH) 
) WAVE_GEN_TOP (
    .i_clk             (i_clk),
    .i_rst_n           (i_rst_n),
    .i_add_noise       (w_add_noise), // 0 - sóng thuần túy, 1 - sóng + nhiễu
    .i_sel_wave        (w_sel_wave), // chọn loại sóng xuất
    .i_wave_phase_step (w_wave_phase_step), // chỉnh bước nhảy của NCO của sóng - chỉnh tẩn số
    .i_sel_duty_cycle  (w_sel_duty_cycle), // chọn duty cycle cho sóng vuông
    .i_gain_wave       (w_gain_wave), // lựa chọn độ lợi áp khôi phục của sóng
    .i_lfsr_sin        (w_lfsr_sin), // 0 - lfsr, 1 - hài bậc cao sóng sine
    .i_wave_noise_step (w_wave_noise_step), // chỉnh bước nhảy của NCO của nhiểu sin cao - chỉnh tẩn số
    .i_gain_noise      (w_gain_noise), // lựa chọn độ lợi áp khôi phục của nhiễu
    .o_wave_out        (w_wave_out) 
);

endmodule
