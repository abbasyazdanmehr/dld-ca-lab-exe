`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:06:17 03/02/2022 
// Design Name: 
// Module Name:    carryLookAhead 
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
module carryLookAhead(
    input [4:0] G,
    input [4:0] P,
    input c0,
    output [5:0] carries
    );
	 assign carries[0]=c0;

assign carries[1]=G[0]|(P[0]&carries[0]);

assign carries[2]=G[1]|(P[1]&G[0])|(P[1]&P[0]&carries[0]);

assign carries[3]=G[2]|(P[2]&G[1])|(P[2]&P[1]&G[0])|(P[2]&P[1]&P[0]&carries[0]);

assign carries[4]=G[3]|(P[3]&G[2])|(P[3]&P[2]&G[1])|(P[3]&P[2]&P[1]&G[0])|(P[3]&P[2]&P[1]&P[0]&carries[0]);

assign carries[5]=G[4]|(P[4]&G[3])|(P[4]&P[3]&G[1])|(P[4]&P[3]&P[2]&P[1]&G[0])|(P[4]&P[3]&P[2]&P[1]&P[0]&carries[0]);


endmodule
