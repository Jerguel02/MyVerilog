`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:37:25 11/24/2023
// Design Name:   FullAdder4Bits
// Module Name:   D:/Verilog/FullAdder1Bit/FA4Bits_testbench.v
// Project Name:  FullAdder1Bit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FullAdder4Bits
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FA4Bits_testbench;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg [3:0] Cin;

	// Outputs
	wire [4:0] SUM;
	wire [3:0] Co;

	// Instantiate the Unit Under Test (UUT)
	FullAdder4Bits uut (
		.A(A), 
		.B(B), 
		.Cin(Cin), 
		.SUM(SUM), 
		.Co(Co)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		Cin = 0;

		// Wait 100 ns for global reset to finish
		#100;
       
		// Add stimulus here

	end
 always
 begin
	A = A+1;
	B = B+1;
	#100;
 end
endmodule

