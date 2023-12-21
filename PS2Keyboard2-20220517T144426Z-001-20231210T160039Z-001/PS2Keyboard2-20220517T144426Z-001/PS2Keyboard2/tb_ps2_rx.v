////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:29:13 06/02/2021
// Design Name:   ps2_rx
// Module Name:   C:/Users/phamt/Documents/ps2keyboard/rx.v
// Project Name:  ps2keyboard
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ps2_rx
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_ps2_rx;

	// Inputs
	reg clk;
	reg reset;
	reg ps2d;
	reg ps2c;
	reg rx_en;

	// Outputs
	wire [7:0] dout;
	wire rx_done_tick;
	
	reg ce;

	// Instantiate the Unit Under Test (UUT)
	ps2_rx uut (
		.clk(clk), 
		.reset(reset), 
		.ps2d(ps2d), 
		.ps2c(ps2c), 
		.rx_en(rx_en),
		.dout(dout),
		.rx_done_tick(rx_done_tick)
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
		rx_en = 1;
		ce = 1;
		
		//45h 0100 0101
		#5000 ce =0;ps2d = 0;
		
		#5000 ps2d = 1;
		#5000 ps2d = 0;
		#5000 ps2d = 1;
		#5000 ps2d = 0;
		
		#5000 ps2d = 0;
		#5000 ps2d = 0;
		#5000 ps2d = 1;
		#5000 ps2d = 0;
		
		#5000 ps2d = 1;
		#5000 ps2d = 1;
		
		#5000 ce = 1;
		
	end
      
endmodule

