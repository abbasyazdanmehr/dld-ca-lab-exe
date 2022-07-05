`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:05:48 03/02/2022 
// Design Name: 
// Module Name:    adder_tb 
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
module adder_tb;

reg [4:0] A, B;
reg CIN;
wire [4:0] SUM;
wire COUT;

carryLookAheadAdder DUT (.a(A), .b(B), .cin(CIN), .sum(SUM), .cout(COUT));

initial begin
    begin
        A=5'b01100;
        B=5'b10011;
        CIN=0;
    end
    #100;
    $display("Cin=0");
    $display("%b+%b=%b",A,B,SUM);
    begin
        CIN=1;
    end
    #100;
    $display("Cin=1");
    $display("%b+%b=%b",A,B,SUM);
    begin
        A=5'b01001;
        B=5'b11011;
        CIN=1;
    end
    #100;
    $display("Cin=1");
    $display("%b+%b=%b",A,B,SUM);
end
    
endmodule
