`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:40:26 02/28/2022 
// Design Name: 
// Module Name:    full_adder_5_bit_tb 
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
module full_adder_5_bit_tb(
    );

	reg [4:0] a;
	reg [4:0] b;
	reg cin;
	wire [4:0] sum;
	wire cout;
	
	ripple_adder_5_bit FA5 (a, b, cin, sum, cout);
	
	initial
		begin
			a = 5'b01100;
			b = 5'b10011;
			cin = 0;
			
			#100;
			
			if (sum == 5'b11111)
				$display("sum is true");
			else 
				$display("sum is false");
			
			cin = 1;
			
			#100;
			
			if (sum == 5'b00000)
				$display("sum is true");
			else 
				$display("sum is false");
			
			a = 5'b01001;
			b = 5'b11011;
			
			#100;
			
			if (sum == 5'b00101)
				$display("sum is true");
			else 
				$display("sum is false");
			
		end

endmodule
