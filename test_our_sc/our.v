import "DPI-C" function int add (input int a, input int b);

module our (clk);
     input clk;  // Clock is required to get initial activation
     always @(posedge clk)
        begin $display("Hello World"); $finish; end
		initial begin
			$display("%x + %x = %x", 1, 2, add(1,2));
		end
  endmodule
