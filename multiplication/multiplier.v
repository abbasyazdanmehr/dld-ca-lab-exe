module multiplier #(parameter N = 8)(
	input clk,
	input start,
	input [7:0] a,
	input [7:0] b,
	output reg [15:0] out
);

reg [7:0] multiplier;
reg [15:0] multiplicand, result;
reg [7:0] counter;
reg initialValue;

always @(posedge clk) begin

	if(start) begin

		if(initialValue) begin
			if(N > counter)	begin
				if(multiplier[0] == 1) begin
					result = result + multiplicand;
				end
				multiplicand = multiplicand << 1;
				multiplier = multiplier >> 1;
				counter = counter + 1;
			end	else begin
				initialValue = 0;
				out = result;
			end
		end else begin
			initialValue = 1;
			counter = 0;
			multiplier = b;
			multiplicand = a;
			result = 0;
		end

	end else begin

		initialValue = 0;
		result = 0;
		out = 0;

	end

end


endmodule
