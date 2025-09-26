module tb_Top_gen_wave();

//////////////////////////////////////////////////////////
// Parameter
//////////////////////////////////////////////////////////
    parameter SIZE_BTN    = 4    ;
    parameter SIZE_SW     = 10   ;
    parameter SIZE_LEDR   = 10   ;
    parameter SIZE_LEDG   = 4    ;
    parameter SIZE_WIDTH  = 24   ;
    parameter SIZE_DEPTH  = 1024 ;
    parameter SIZE_SEG    = 7    ;
    parameter NUM_MODE_WAVE = 3  ;
    parameter NUM_DUTY_CYCLE = 3 ;
    parameter SIZE_GAIN_WAVE = 3 ;

//////////////////////////////////////////////////////////
// Signals
//////////////////////////////////////////////////////////
logic                             i_clk;
logic [SIZE_BTN-1:0]              i_btn;
logic [SIZE_SW-1:0]               i_sw;
logic                             o_add_noise; // outputs from DUT
logic [NUM_MODE_WAVE-1:0]         o_sel_wave; 
logic [NUM_DUTY_CYCLE-1:0]        o_sel_duty_cycle; 
logic signed [SIZE_GAIN_WAVE-1:0] o_gain_wave;         // changed to -1:0
logic [$clog2(SIZE_DEPTH)-1:0]    o_phase_step_wave; 
logic                             o_lfsr_sin; 
logic [$clog2(SIZE_DEPTH)-1:0]    o_phase_step_noise; 
logic signed [SIZE_GAIN_WAVE-1:0] o_gain_noise;        // changed to -1:0
logic [SIZE_LEDR-1:0]             o_ledr;
logic [SIZE_LEDG-1:0]             o_ledg;
logic [SIZE_SEG-1:0]              o_hex_0; 
logic [SIZE_SEG-1:0]              o_hex_1; 
logic [SIZE_SEG-1:0]              o_hex_2; 
logic [SIZE_SEG-1:0]              o_hex_3; 
logic [SIZE_SEG-1:0]              o_hex_4; 
logic [SIZE_SEG-1:0]              o_hex_5; 

Top_gen_wave #(
    .SIZE_BTN       (SIZE_BTN),
    .SIZE_SW        (SIZE_SW),
    .SIZE_LEDR      (SIZE_LEDR),
    .SIZE_LEDG      (SIZE_LEDG),
    .SIZE_WIDTH     (SIZE_WIDTH),
    .SIZE_DEPTH     (SIZE_DEPTH),
    .SIZE_SEG       (SIZE_SEG),
    .NUM_MODE_WAVE  (NUM_MODE_WAVE),
    .NUM_DUTY_CYCLE (NUM_DUTY_CYCLE),
    .SIZE_GAIN_WAVE (SIZE_GAIN_WAVE)
) DUT (
    .i_clk(i_clk),
    .i_btn(i_btn),
    .i_sw(i_sw),
    .o_add_noise(o_add_noise),
    .o_sel_wave(o_sel_wave),
    .o_sel_duty_cycle(o_sel_duty_cycle),
    .o_gain_wave(o_gain_wave),
    .o_phase_step_wave(o_phase_step_wave),
    .o_lfsr_sin(o_lfsr_sin),
    .o_phase_step_noise(o_phase_step_noise),
    .o_gain_noise(o_gain_noise),
    .o_ledr(o_ledr),
    .o_ledg(o_ledg),
    .o_hex_0(o_hex_0),
    .o_hex_1(o_hex_1),
    .o_hex_2(o_hex_2),
    .o_hex_3(o_hex_3),
    .o_hex_4(o_hex_4),
    .o_hex_5(o_hex_5)
);

initial begin
    i_clk = 0;
    forever begin
        #5 i_clk = ~i_clk; 
    end
end

initial begin
    $dumpfile("tb_Top_gen_wave.vcd");
    $dumpvars(0, tb_Top_gen_wave);
end

// Press a button by index: generate one-clock low pulse then release
task automatic press_button(input int idx);
begin
    @(posedge i_clk);
    i_btn[idx] = 1'b0; // assert (active low in your original code - adjust if active high)
    @(posedge i_clk);
    i_btn[idx] = 1'b1; // release
    #100;
end
endtask

initial begin
    // initialize vectors to known defaults
    i_btn = {SIZE_BTN{1'b1}}; // default released (1). Adjust if your BTN is active-high.
    i_sw  = {SIZE_SW{1'b0}};  // default zero

    // initial reset and default switch settings
    i_sw[9] = 0; // i_rst_n = 0
    // if you want specific per-bit defaults, set them here:
    // i_btn[0] = 1; i_btn[1] = 1; ...
    #20
    i_sw[9] = 1; // i_rst_n = 1
    #20

    #100;
    $display("----- Test 1: Mode waveform, mode wave -----");
    i_sw[8:7] = 2'b00;
    i_sw[6:4] = 3'b000; // sine wave
    i_sw[3:1] = 3'b000; // duty cycle 10%

    // Use the new task that toggles the actual i_btn bits
    press_button(0); // press select_resize_step : step = 1
    press_button(0); // press select_resize_step : step = -1
    press_button(0); // press select_resize_step : step = 1
    press_button(1); // press start_resize

    #100;
    press_button(2); // adjust amplitude cycles
    press_button(2);
    press_button(2);
    press_button(2);
    press_button(2);
    press_button(2);
    press_button(2);
    press_button(3); // adjust frequency cycles
    press_button(3);
    press_button(3);
    press_button(3);
    press_button(3);
    press_button(3);
    press_button(3);
    
    #100;
    $display("----- Test 2: Mode noise, mode wave -----");
    i_sw[8:7] = 2'b01;
    i_sw[6:4] = 3'b000; // sine wave
    i_sw[3:1] = 3'b000; // duty cycle 10%

    // Use the new task that toggles the actual i_btn bits
    press_button(0); // press select_resize_step : step = 1
    press_button(0); // press select_resize_step : step = -1
    press_button(0); // press select_resize_step : step = 1
    press_button(1); // press start_resize

    #100;
    press_button(2); // adjust amplitude cycles
    press_button(2);
    press_button(2);
    press_button(2);

    press_button(0); // press select_resize_step : step = 1
    press_button(1); // press start_resize
    
    press_button(2);
    press_button(2);
    press_button(2);
    press_button(3); // adjust frequency cycles
    press_button(3);
    press_button(3);
    press_button(3);
    press_button(3);
    press_button(3);
    press_button(3);

    #100;
    $display("----- Test 3: Mode waveform with noise, mode wave -----");
    i_sw[8:7] = 2'b10;
    i_sw[6:4] = 3'b000; // sine wave
    i_sw[3:1] = 3'b000; // duty cycle 10%

    // Use the new task that toggles the actual i_btn bits
    press_button(0); // press select_resize_step : step = 1
    press_button(0); // press select_resize_step : step = -1
    press_button(0); // press select_resize_step : step = 1
    press_button(1); // press start_resize
    press_button(1); // press start_resize
    press_button(1); // press start_resize
    #100;
    press_button(2); // adjust amplitude cycles
    press_button(2);
    press_button(2);
    press_button(2);
    press_button(2);
    press_button(2);
    press_button(2);
    press_button(3); // adjust frequency cycles
    press_button(3);
    press_button(3);
    press_button(3);
    press_button(3);
    press_button(3);
    press_button(3);

    #100;
    $display("----- Test 4: Mode Noise, mode wave -----");
    i_sw[8:7] = 2'b10;
    i_sw[6:4] = 3'b000; // sine wave
    i_sw[3:1] = 3'b000; // duty cycle 10%

    
    

    #1000;
    $display("End of Test");
    $finish;
end

endmodule
