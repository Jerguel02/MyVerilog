`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:17:29 12/21/2023
// Design Name:   MuxM
// Module Name:   D:/Verilog/MyVerilog/MuxM/MuxM_Testbench.v
// Project Name:  MuxM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MuxM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MuxM_Testbench;

	// Inputs
	reg [4:0] A;
	reg [4:0] B;
	reg S;

	// Outputs
	wire [4:0] Y;

	// Instantiate the Unit Under Test (UUT)
	MuxM uut (
		.A(A), 
		.B(B), 
		.S(S), 
		.Y(Y)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		S = 0;

		// Wait 100 ns for global reset to finish
		#100;
		A = 5'b10110;
		B = 5'b11001;
		// Add stimulus here

	end
	always
		begin
			S = ~S;
			#100;
		end
endmodule

