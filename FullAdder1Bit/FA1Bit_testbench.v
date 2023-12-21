`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:11:53 11/24/2023
// Design Name:   FullAdder1Bit
// Module Name:   D:/Verilog/FullAdder1Bit/FA1Bit_testbench.v
// Project Name:  FullAdder1Bit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FullAdder1Bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FA1Bit_testbench;

	// Inputs
	reg a;
	reg b;
	reg cin;

	// Outputs
	wire sum;
	wire co;

	// Instantiate the Unit Under Test (UUT)
	FullAdder1Bit uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.sum(sum), 
		.co(co)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		cin = 0;

		// Wait 100 ns for global reset to finish

		// Add stimulus here
				#100;
      a = 0;
		b = 1;


		// Wait 100 ns for global reset to finish
		#100;
		a = 1;
		b = 0;


		// Wait 100 ns for global reset to finish
		#100;
		a = 1;
		b = 1;


		// Wait 100 ns for global reset to finish
		#100;
		a = 0;
		b = 0;
		cin = 1;

		// Wait 100 ns for global reset to finish
		#100;
      a = 0;
		b = 1;


		// Wait 100 ns for global reset to finish
		#100;
		a = 1;
		b = 0;


		// Wait 100 ns for global reset to finish
		#100;
		a = 1;
		b = 1;


		// Wait 100 ns for global reset to finish
		#100;
	end
      
endmodule

