module waveform_gen_top #(
    parameter WIDTH = 24  ,
    parameter DEPTH = 1024
)(
    input  logic i_clk,
    input  logic i_rst_n,
    input  logic       i_wave_noise_sel,
    input  logic [2:0] i_wave_sel   ,
    input  logic       i_wave_gain  ,
    input  logic [2:0] i_square_duty,
    input  logic       i_noise_sel  ,
    input  logic [1:0] i_noise_gain
);


    wave_gen #(
        .WIDTH(WIDTH),
        .DEPTH(DEPTH)
    )(
    input  logic                       .i_clk            (i_clk) ,
    input  logic                       .i_rst_n          (i_rst_n) ,
    input  logic [$clog2(DEPTH) - 1:0] .i_wave_phase_step() ,
    input  logic                       .i_sel_duty_cycle () ,
    input  logic [$clog2(DEPTH) - 1:0] .i_gain           () ,
    output logic                       .o_wave_out       ()     
    );

    

endmodule