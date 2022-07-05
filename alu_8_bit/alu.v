module alu (
    input [7:0] a,
    input [7:0] b,
    input [2:0] opcode,
    output reg [7:0] result,
    output reg ov,
    output sign,
    output reg cout
);

wire [7:0] sum;
wire [7:0] sumby1;
wire coutsum;
wire coutby1;
wire lastABit;
assign lastABit = a[7];
assign sign = result[7];

// set cout
always @(*)
begin
	case (opcode)
		3'b000: cout = coutsum;
		3'b001: cout = coutby1;
		3'b111: cout = lastABit;
		default: cout = 0;
	endcase
end

// set overflow
always @(*)
begin
	if ((opcode == 3'b000 | opcode == 3'b001) & a[7] == b[7]) begin
		if (a[7] != result[7]) begin
			ov = 1;
		end else begin
			ov = 0;
		end
	end else if (opcode == 3'b111 && a[7]!=a[6]) begin
		ov = 1;
	end else begin
		ov = 0;
	end
end

// set output(result)
always @(*)
begin
    case (opcode)
		3'b000: result = sum;
		3'b001: result = sumby1;
		3'b010: result = a & b;
		3'b011: result = a | b;
		3'b100: result = a ^ b;
		3'b101: result = ~a;
		3'b110: result = a >> 1;
		3'b111: result = a << 1;
    endcase
end

ripple_adder_8 ra8 (a, b, 0, sum, coutsum);
ripple_adder_8 ra8_2 (a, 1, 0, sumby1, coutby1);
    
endmodule
