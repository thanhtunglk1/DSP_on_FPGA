module gen_scl #(
    parameter SIZE_REG  = 16
)(
    input logic                 i_clk   ,
    input logic                 i_rst_n ,
    input logic                 i_SCL_start ,
    input logic                 i_SCL_en    ,
    input logic [SIZE_REG-1:0]  i_TWIBR ,
    output logic                o_SCL   
);

//==================================
// Variable
//==================================
logic [SIZE_REG-1:0] r_count;
logic [SIZE_REG-1:0] w_count_next;
logic [SIZE_REG-1:0] w_count_add;
logic w_count_stick;

//==================================
// Module 
//==================================
add_algo #(
    .SIZE_DATA  (SIZE_REG)
) add_algo_unit (
    .i_operate_a (r_count),
    .i_operate_b ({{(SIZE_REG-1){1'b0}}, 1'b1}),
    .o_add       (w_count_add)
);

//==================================
// Assign signal
//==================================
assign w_count_next = (i_SCL_en) ? w_count_add : r_count;
assign w_count_stick = (r_count == i_TWIBR);
always_ff @(posedge i_clk or negedge i_rst_n) begin
    if(~i_rst_n) begin
        r_count <= '0;
    end else begin
        r_count <= (w_count_stick) ? '0 : w_count_next;
    end 
end 

always_ff @(posedge i_clk or negedge i_rst_n) begin 
    if(~i_rst_n) begin  
        o_SCL <= 1'b1;
    end else begin
        if(i_SCL_start) begin
            o_SCL <= 1'b0;
        end else begin
            if(w_count_stick) begin
                o_SCL <= ~o_SCL;
            end else begin
                o_SCL <= o_SCL;
            end 
        end 
    end 
end 

endmodule

