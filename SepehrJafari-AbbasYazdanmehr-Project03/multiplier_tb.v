module multiplier_tb;
reg CLK, START;
reg [5:0] A, B;

wire [11:0] OUT;

multiplier UTT(.clk(CLK), .start(START), .a(A), .b(B),.out(OUT) );

initial begin
  CLK = 1;
      forever #5 CLK = ~CLK;  
  end

  initial begin
      START = 1;
      A = 6'b000010;
      B = 6'b000010;

      #80
      START = 1;
      A = 6'b000101;
      B = 6'b000011;

    
      #80
      START = 1;
      A = 6'b000001;
      B = 6'b000111;

      #80
      START = 0;
      A = 6'b001011;
      B = 6'b000110;

      #10
      START = 1;
      A = 6'b110011;
      B = 6'b001011;

    end
    
endmodule
