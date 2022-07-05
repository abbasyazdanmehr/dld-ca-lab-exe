`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:42:33 02/28/2022 
// Design Name: 
// Module Name:    ripple_adder_5_bit 
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
module ripple_adder_5_bit(
    input [4:0] a,
    input [4:0] b,
    input cin,
    output [4:0] sum,
    output cout
    );
	 
	 wire c1, c2, c3, c4;
	 
	 full_adder FA1 (a[0], b[0], cin, sum[0], c1);
	 full_adder FA2 (a[1], b[1], c1, sum[1], c2);
	 full_adder FA3 (a[2], b[2], c2, sum[2], c3);
	 full_adder FA4 (a[3], b[3], c3, sum[3], c4);
	 full_adder FA5 (a[4], b[4], c4, sum[4], cout);


endmodule
