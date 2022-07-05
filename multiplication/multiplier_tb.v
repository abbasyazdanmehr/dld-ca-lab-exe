module multiplier_tb;
reg CLK, START;
reg [7:0] A, B;

wire [15:0] OUT;

multiplier UTT(.clk(CLK), .start(START), .a(A), .b(B),.out(OUT) );

initial begin
  CLK = 1;
      forever #5 CLK = ~CLK;  
  end

  initial begin
      START = 1;
      A = 6'b000010;
      B = 6'b000010;

      #100
      START = 1;
      A = 6'b000101;
      B = 6'b000011;

    
      #100
      START = 1;
      A = 6'b000001;
      B = 6'b000111;

      #100
      START = 0;
      A = 6'b001011;
      B = 6'b000110;

      #10
      START = 1;
      A = 6'b110011;
      B = 6'b001011;
		
		#100
		START = 1;
		A = 8'b11110111;
		B = 8'b10110011;
		
		

    end
    
endmodule
