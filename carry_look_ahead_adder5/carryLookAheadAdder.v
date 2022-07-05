`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:04:49 03/02/2022 
// Design Name: 
// Module Name:    carryLookAheadAdder 
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
module carryLookAheadAdder(
    input [4:0] a,
    input [4:0] b,
    input cin,
    output [4:0] sum,
    output cout
    );
wire [4:0] G;
wire [4:0] P;
wire [5:0] carries;

assign P = a ^ b;
assign G = a & b;


carryLookAhead ins (G, P, cin, carries);

assign sum = P^carries[4:0];
assign cout = carries[5];



endmodule

