`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:20:34 03/06/2022 
// Design Name: 
// Module Name:    alu8 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module alu8 (
    input [7:0] a, b,
    input cin,
    input [1:0] operation,
    output [7:0] result,
    output cout
  );
  wire [6:0] c_temp;
  alu first (a[0], b[0], cin, operation, result[0], c_temp[0]);
  alu last (a[7], b[7], c_temp[6], operation, result[7], cout);
  genvar i;
  generate
    for (i = 1; i <= 6; i = i + 1)
    begin
        alu ins (a[i], b[i], c_temp[i-1], operation, result[i], c_temp[i]);
    end
  endgenerate
endmodule

