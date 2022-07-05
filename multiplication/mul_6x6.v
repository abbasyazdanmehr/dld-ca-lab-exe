`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:19:16 04/04/2022 
// Design Name: 
// Module Name:    mul_6x6 
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
module mul_6x6(
	input[5:0] a,				// a is multiplier
	input[5:0] b,				// b is multiplicand
	output[11:0] result
);


wire [5:0] m0;
wire [6:0] m1;
wire [7:0] m2;
wire [8:0] m3;
wire [9:0] m4;
wire [10:0] m5;


assign m0 = {6{a[0]}} & b[5:0];
assign m1 = {6{a[1]}} & b[5:0];
assign m2 = {6{a[2]}} & b[5:0];
assign m3 = {6{a[3]}} & b[5:0];
assign m4 = {6{a[4]}} & b[5:0];
assign m5 = {6{a[5]}} & b[5:0];











endmodule
