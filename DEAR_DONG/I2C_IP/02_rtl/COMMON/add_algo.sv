module add_algo #(
    parameter SIZE_DATA = 16
)(
    input  logic [SIZE_DATA-1:0] i_operate_a ,
    input  logic [SIZE_DATA-1:0] i_operate_b ,
    output logic [SIZE_DATA-1:0] o_add       
);

// logic [SIZE_DATA-1:0] g, p;
// logic [SIZE_DATA:0]   c;
//
// assign g = i_operate_a & i_operate_b;
// assign p = i_operate_a ^ i_operate_b;
//
// assign c[0] = 1'b0;
//
// genvar i;
// generate
//     for (i = 0; i < SIZE_DATA; i++) begin : cla_gen
//         assign c[i+1] = g[i] | (p[i] & c[i]);
//         assign o_add[i] = p[i] ^ c[i];
//     end
// endgenerate

assign o_add = i_operate_a + i_operate_b;

endmodule
