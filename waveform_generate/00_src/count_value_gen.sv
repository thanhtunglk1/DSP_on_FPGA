module count_value_gen #(
    parameter DEPTH = 1024
)(
    input  logic                       i_clk  ,
    input  logic                       i_rst_n,
    input  logic [                3:0] i_button,
    input  logic [                8:0] i_sw, 
    output logic [$clog2(DEPTH) - 1:0] o_phase_count_step,
    output logic [                3:0] o_wave_gain       ,
    output logic [$clog2(DEPTH) - 1:0] o_noise_count_step,
    output logic [                1:0] o_noise_gain
);

    logic [$clog2(DEPTH) - 1:0] step_abjust_f_wave;
    logic [3:0] fall_detect_signal;
    logic [$clog2(DEPTH) - 1:0] new_phase_fall, new_phase_rise, phase_update;
    logic [$clog2(DEPTH) - 1:0]
    
    assign phase_update = i_sw[8] ? o_phase_count : (fall_detect_signal[3] ? new_phase_rise : (fall_detect_signal[2] ? new_phase_fall : o_phase_count));

    always_ff @(posedge i_clk, negedge i_rst_n) begin
        if(~i_rst_n) begin
            o_phase_count <= '0;
        end

        else begin
            o_phase_count <= phase_update;
        end
    end

    always_comb begin
        case(i_sw[1:0])
            2'd0: step_abjust_f_wave = 10'd01;
            2'd1: step_abjust_f_wave = 10'd04;
            2'd2: step_abjust_f_wave = 10'd16;
            2'd3: step_abjust_f_wave = 10'd64;
        endcase
    end

    fall_edge_detect #(
        .WIDTH(4)
    ) fall_edge (
        .i_clk       (i_clk),
        .i_rst_n     (i_rst_n),
        .i_detect_in (i_button), 
        .o_detect_out(fall_detect_signal) 
    );

    adder_flex_no_carry #(
        .WIDTH($clog2(DEPTH))
    ) f_risning (
        .i_a   (o_phase_count),
        .i_b   (step_abjust_f_wave),
        .i_cin (1'b0),
        .o_s   (new_phase_rise)
    );

    adder_flex_no_carry #(
        .WIDTH($clog2(DEPTH))
    ) f_falling (
        .i_a   (o_phase_count),
        .i_b   (~step_abjust_f_wave),
        .i_cin (1'b1),
        .o_s   (new_phase_fall)
    );

endmodule