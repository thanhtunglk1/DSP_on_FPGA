module fir_sym_trans #( //FIR symmetric - transposed form
    parameter FIR_LENGTH = 51,
    parameter DATA_WIDTH = 24,
    parameter COEF_WIDTH = 16,
    //parameter COEFF_LINK = "../04_fir_cof/lowpass_250.txt"
    parameter COEFF_LINK  = "E:/virtual_machine/Mount/DSP_on_FPGA/fir_low_design/04_fir_cof/lowpass_250.txt"
)(
    input  logic i_clk                              ,
    input  logic i_rst_n                            ,
    input  logic i_clk_fir                          ,

    input  logic signed [DATA_WIDTH - 1:0] i_data   ,
    output logic signed [DATA_WIDTH - 1:0] o_data
);
    localparam ORDER      = FIR_LENGTH - 1         ;
    localparam REG_WIDTH  = DATA_WIDTH + COEF_WIDTH;
    localparam HALF_ORDER = ORDER / 2              ;

    logic signed [COEF_WIDTH - 1:0] coeffs       [0:ORDER]      ;
    logic signed [DATA_WIDTH - 1:0] i_data_delay [0:HALF_ORDER] ;
    initial $readmemh(COEFF_LINK,coeffs);

    logic signed [HALF_ORDER - 0:0][REG_WIDTH  - 1:0] multi_result  ;
    logic signed [HALF_ORDER - 0:0][REG_WIDTH  - 1:0] multi_delay   ;
    logic signed [ORDER      - 1:0][REG_WIDTH  - 1:0] sum_result    ;
    logic signed [ORDER      - 1:0][REG_WIDTH  - 1:0] sum_delay     ;

    // PIPELINE: input buffer with D-flipflop array
    always_ff @(posedge i_clk, negedge i_rst_n) begin
        if(~i_rst_n) for(int i = 0; i <= HALF_ORDER; i++) i_data_delay[i] <= '0;

        else if(i_clk_fir) for(int i = 0; i <= HALF_ORDER; i++) i_data_delay[i] <= i_data;
    end


    // The first half of the coefficients are multiplied with the input data
    always_comb begin
        for(int i = 0; i <= HALF_ORDER; i++) multi_result[i] = i_data_delay[i] * coeffs[i];
    end

    // PIPELINE MULTIPLY AND ADD
    always_ff @(posedge i_clk, negedge i_rst_n) begin
        if(~i_rst_n) multi_delay <= '0;

        else if(i_clk_fir) multi_delay <= multi_result;
    end

    //DELAY FOR ADD
    always_ff @(posedge i_clk, negedge i_rst_n) begin
        if(~i_rst_n) begin
            for(int i = 0; i < ORDER; i++) sum_delay[i] <= '0;
        end
        
        else if(i_clk_fir) begin
            sum_delay[0] <= multi_delay[0];

            for(int i = 1; i <= ORDER - 1; i++) begin
                sum_delay[i] <= sum_result[i - 1];
            end
        end
    end

    // Symmetric form base on similar of [0 -> (N/2 - 1)] and [(N/2 + 1) -> N] (N is ORDER of FIR FILTER)
    // h[i] = h[N-1 - i] and h[N/2];
    always_comb begin                                                         
        for(int i = 0; i < HALF_ORDER; i++) begin //25
            sum_result[i]               = multi_delay[i + 1]              + sum_delay[i]             ; // 0 - 24 (25)
            sum_result[i + HALF_ORDER]  = multi_delay[HALF_ORDER - 1 - i] + sum_delay[i + HALF_ORDER]; //25 - 49 (25)
        end
    end

    assign o_data = sum_result[ORDER - 1][REG_WIDTH - 1:COEF_WIDTH];

endmodule