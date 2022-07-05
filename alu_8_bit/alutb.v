`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:16:25 03/06/2022 
// Design Name: 
// Module Name:    alutb 
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
module alutb(
    );

reg [7:0] a;
reg [7:0] b;
reg [2:0] op;
wire [7:0] z;
wire ov;
wire cout;
wire sign;


alu al (a, b, op, z, ov, sign, cout);

initial begin

	// ---- check opcode ---- //

	a = 8'b010;
	b = 8'b111;
	op = 3'b000; // "sum" opcode
	
	#100;
	
	if (z == 8'b1001) begin
		$display("Pass!");
	end else begin
		$display("Fail!");
	end
	
	op = 3'b001; // "a+1" opcode
	
	#100;
	
	if (z == 8'b011) begin
		$display("Pass!");
	end else begin
		$display("Fail!");
	end
	
	op = 3'b010; // "and" opcode
	
	#100;
	
	if (z == 8'b010) begin
		$display("Pass!");
	end else begin
		$display("Fail!");
	end
	
	op = 3'b011; // "or" opcode
	
	#100;
	
	if (z == 8'b111) begin
		$display("Pass!");
	end else begin
		$display("Fail!");
	end
	
	op = 3'b100; // "xor" opcode
	
	#100;
	
	if (z == 8'b101) begin
		$display("Pass!");
	end else begin
		$display("Fail!");
	end
	
	op = 3'b101; // "not a" opcode
	
	#100;
	
	if (z == 8'b11111101) begin
		$display("Pass!");
	end else begin
		$display("Fail!");
	end
	
	op = 3'b110; // "shift right" opcode
	
	#100;
	
	if (z == 8'b001) begin
		$display("Pass!");
	end else begin
		$display("Fail!");
	end
	
	op = 3'b111; // "shift left" opcode
	
	#100;
	
	if (z == 8'b100) begin
		$display("Pass!");
	end else begin
		$display("Fail!");
	end
	
	// ----- check 2's complement ----- //
	op = 3'b000; // sum opcode
	
	a = 8'b10100110; // -90
	b = 8'b01101111; // +111
						  // +21
	
	#100;
	
	if (z == 8'b10101) begin
		$display("Pass!");
	end else begin
		$display("Fail!");
	end
	
	
	// ----- check overflow ----- //
	op = 3'b000; // sum opcode
	
	a = 8'b01000000; // +127
	b = 8'b01000000; // +127
						  // -128
	
	#100;
	
	if (z == 8'b10000000) begin
		$display("Pass!");
	end else begin
		$display("Fail!");
	end
	
	
	
end

endmodule
