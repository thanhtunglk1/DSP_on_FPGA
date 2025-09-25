`timescale 1ns/1ps

module tb_gen_scl;

    //==================================
    // Parameter
    //==================================
    parameter SIZE_REG = 16;

    //==================================
    // Signal
    //==================================
    logic                 clk;
    logic                 rst_n;
    logic                 i_SCL_start;
    logic                 i_SCL_en;
    logic [SIZE_REG-1:0]  i_TWIBR;
    logic                 o_SCL;

    //==================================
    // DUT
    //==================================
    gen_scl #(
        .SIZE_REG (SIZE_REG)
    ) dut (
        .i_clk       (clk),
        .i_rst_n     (rst_n),
        .i_SCL_start (i_SCL_start),
        .i_SCL_en    (i_SCL_en),
        .i_TWIBR     (i_TWIBR),
        .o_SCL       (o_SCL)
    );

    //==================================
    // Clock gen
    //==================================
    initial clk = 0;
    always #5 clk = ~clk;   // 100 MHz clock (10ns period)

    initial begin
        $dumpfile("tb_gen_scl.vcd");
        $dumpvars(0, tb_gen_scl);
    end 

    //==================================
    // Stimulus
    //==================================
    initial begin
        // Init
        rst_n       = 0;
        i_SCL_start = 0;
        i_SCL_en    = 0;
        i_TWIBR     = 16'd4;   // Divide factor

        // Release reset
        #50 rst_n = 1;

        // Enable SCL
        #20 i_SCL_en = 1;

        // Start condition
        #100 i_SCL_start = 1;
        #20  i_SCL_start = 0;

        // Run for some cycles
        #500;

        // Change divider
        i_TWIBR = 16'd2;
        #500;

        // Stop SCL
        i_SCL_en = 0;
        #200;

        $stop;
    end

endmodule
