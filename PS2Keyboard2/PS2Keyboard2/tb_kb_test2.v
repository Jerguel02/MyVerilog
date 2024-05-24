

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:42:26 06/20/2021
// Design Name:   kb_test
// Module Name:   C:/Xilinx/PS2Keyboard2/tb_kb_test2.v
// Project Name:  PS2Keyboard2
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

module tb_kb_test2;

	// Inputs
	reg clk;
	reg reset;
	reg ps2d;
	reg ps2c;

	// Outputs
	wire tx;

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
		
		#5000 ps2d = 0;
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
		
		#5000 ps2d = 0;
		#5000 ps2d = 1;
		
		#5000 ce = 1;
		
		
	end
      
endmodule

