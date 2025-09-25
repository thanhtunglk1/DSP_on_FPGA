module i2c_tb;
    // Clock and reset
    reg clk, rst;
    reg wr;
    reg [6:0] addr;
    reg [7:0] din;
    wire [7:0] datard;
    wire done;

    // Parameters for clock generation
    parameter CLK_PERIOD = 20; // 50 MHz clock

    // Instantiate the design under test (DUT)
    i2c_top dut (
        .clk(clk),
        .rst(rst),
        .wr(wr),
        .addr(addr),
        .din(din),
        .datard(datard),
        .done(done)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #(CLK_PERIOD / 2) clk = ~clk;
    end

    // Testbench procedure
    initial begin
        // Initialize signals
        rst = 1;
        wr = 0;
        addr = 7'h00;
        din = 8'h00;

        // Release reset
        #CLK_PERIOD;
        rst = 0;

        // Test case 1: Write operation
        $display("Starting Write Operation...");
        addr = 7'h12;  // Write address
        din = 8'hA5;   // Data to write
        wr = 1;        // Enable write
        #CLK_PERIOD;
        @(posedge done); // Wait for operation to complete
        wr = 0;
        #CLK_PERIOD;
        $display("Write Operation Completed. Data written: %h at address: %h", din, addr);

        // Test case 2: Read operation
        $display("Starting Read Operation...");
        addr = 7'h12;  // Read from same address
        wr = 0;        // Enable read
        #CLK_PERIOD;
        @(posedge done); // Wait for operation to complete
        #CLK_PERIOD;
        $display("Read Operation Completed. Data read: %h from address: %h", datard, addr);

        // Test case 3: Write another value
        $display("Starting Write Operation with new value...");
        addr = 7'h34;
        din = 8'h5A;
        wr = 1;        // Enable write
        #CLK_PERIOD;
        @(posedge done); // Wait for operation to complete
        wr = 0;
        #CLK_PERIOD;
        $display("Write Operation Completed. Data written: %h at address: %h", din, addr);

        // Test case 4: Read the new value
        //$display("Starting Read Operation for the new value...");
        //addr = 7'h34;  // Read from new address
        //wr = 0;        // Enable read
        //#CLK_PERIOD;
        //@(posedge done); // Wait for operation to complete
        //#CLK_PERIOD;
        //$display("Read Operation Completed. Data read: %h from address: %h", datard, addr);

        // Test case 5: Edge case with maximum address
        $display("Testing edge case with maximum address...");
        addr = 7'h7F;  // Maximum address
        din = 8'hFF;   // Data to write
        wr = 1;        // Enable write
        #CLK_PERIOD;
        @(posedge done); // Wait for operation to complete
        wr = 0;
        #CLK_PERIOD;
        //addr = 7'h7F;  // Read from maximum address
        //wr = 0;        // Enable read
        //#CLK_PERIOD;
        //@(posedge done); // Wait for operation to complete
        //#CLK_PERIOD;
        $display("Edge Case Completed. Data write: %h from address: %h", datard, addr);

        // End simulation
        $display("All test cases completed!");
		#200;
        $finish;
    end
endmodule

