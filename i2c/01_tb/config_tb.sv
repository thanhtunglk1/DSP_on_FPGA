module config_tb();

    logic i_clk;
    logic i_rst_n;
    logic done;
    
    logic scl;
    tri   sda;

    config_codec #(
        .DEPTH(11)
    ) config_i2c (
        .i_clk  (i_clk),
        .i_rst_n(i_rst_n),
        .o_done (done),
        .o_scl  (scl),
        .io_sda (sda)
    );

    always #5 i_clk = ~i_clk;

    initial begin 
        $shm_open("waves.shm")  ;
        $shm_probe("ASM")       ;
    end

    initial begin
        i_clk   = '0;
        i_rst_n = '0;
        #20
        i_rst_n = '1;

        fork
            begin
                wait(done);
                #10000
                $display("[TESTBENCH DONE]");
            end

            begin
                #500000
                $display("[TIMEOUT OF TESTBENCH] Something stuck!!");
            end
        join_any

        $finish;
    end

endmodule