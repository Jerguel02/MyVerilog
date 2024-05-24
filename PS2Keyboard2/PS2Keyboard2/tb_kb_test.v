
////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:11:53 06/03/2021
// Design Name:   kb_test
// Module Name:   C:/Users/phamt/Documents/ps2keyboard/tb_kb_test.v
// Project Name:  ps2keyboard
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: kb_test
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_kb_test;

	// Inputs
	reg clk;
	reg reset;
	reg ps2d;
	reg ps2c;

	// Outputs
	wire tx;
	
	reg ce;

	// Instantiate the Unit Under Test (UUT)
	kb_test uut (
		.clk(clk), 
		.reset(reset), 
		.ps2d(ps2d), 
		.ps2c(ps2c), 
		.tx(tx)
	);

	always #10 clk = !clk;
	always #2500 ps2c = !ps2c | ce;


	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		#10 reset = 0;
		ps2d = 1;
		ps2c = 1;
		ce = 1;
		//Char 1 - 45h '0' => 30h 0011 0000
		#5000 ce =0;ps2d = 0;
		
		//Data
		#5000 ps2d = 1;
		#5000 ps2d = 0;
		#5000 ps2d = 1;
		#5000 ps2d = 0;
		
		#5000 ps2d = 0;
		#5000 ps2d = 0;
		#5000 ps2d = 1;
		#5000 ps2d = 0;
		//
		
		#5000 ps2d = 1;
		#5000 ps2d = 1;
		
		#5000 ce = 1;

		
		//F0
		//Data
		
		#5000 ce =0;ps2d = 0;
		
		#5000 ps2d = 0;
		#5000 ps2d = 0;
		#5000 ps2d = 0;
		#5000 ps2d = 0;
		
		#5000 ps2d = 1;
		#5000 ps2d = 1;
		#5000 ps2d = 1;
		#5000 ps2d = 1;
		//
		
		#5000 ps2d = 0;
		#5000 ps2d = 1;
		
		#5000 ce = 1;
		
		
		
		
		
		
		//Char 1 - 45h '0' => 30h 0011 0000
		#5000 ce =0;ps2d = 0;
		
		//Data
		#5000 ps2d = 1;
		#5000 ps2d = 0;
		#5000 ps2d = 1;
		#5000 ps2d = 0;
		
		#5000 ps2d = 0;
		#5000 ps2d = 0;
		#5000 ps2d = 1;
		#5000 ps2d = 0;
		//
		
		#5000 ps2d = 1;
		#5000 ps2d = 1;
		
		#5000 ce = 1;
		
		
	end
      
endmodule

