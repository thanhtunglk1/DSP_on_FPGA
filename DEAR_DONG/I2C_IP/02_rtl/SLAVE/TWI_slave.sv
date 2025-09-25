module TWI_slave #(
    parameter ADDR_SLAVE    = 1 ,
    parameter SIZE_ADDR     = 7 ,
    parameter SIZE_DATA     = 8 ,
    parameter SIZE_REG      = 16
)(
    input logic                     i_clk   ,
    input logic                     i_rst_n ,

    input logic                     i_TWIEN ,
    input logic [SIZE_REG-1:0]      i_TWIWD ,
    output logic [SIZE_REG-1:0]     i_TWIRD ,

    input logic                     TWI_SCL ,
    inout tri                       TWI_SDA 
);

//==================================
// Parameter 
//==================================


//==================================
// Variable 
//==================================


//==================================
// Assign signal
//==================================
endmodule

