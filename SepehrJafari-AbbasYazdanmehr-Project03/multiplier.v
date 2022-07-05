module multiplier #(parameter N = 6)(
	input clk,
	input start,
	input [5:0] a,
	input [5:0] b,
	output reg [11:0] out
);

reg [5:0] multiplier;
reg [11:0] multiplicand, result;
reg [5:0] counter;
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
