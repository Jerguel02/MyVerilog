`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:02:26 12/22/2023
// Design Name:   ALU
// Module Name:   D:/Verilog/MyVerilog/ALU/ALU_Testbench.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_Testbench;

	// Inputs
	reg [7:0] A;
	reg [7:0] B;
	reg [4:0] ALU_Sel;

	// Outputs
	wire [7:0] ALU_Out;
	wire ALU_Carry;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.A(A), 
		.B(B), 
		.ALU_Sel(ALU_Sel), 
		.ALU_Out(ALU_Out), 
		.ALU_Carry(ALU_Carry)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		ALU_Sel = 0;

		// Wait 100 ns for global reset to finish
		#100
		ALU_Sel = 0;
      B = 8'b11101100;
		A = 8'b11001001;
		#100;
		
		// Add stimulus here

	end
   always
		begin
			if (ALU_Sel == 18)
				begin
					ALU_Sel <= 0;
					#100;
				end
			else
				begin
					ALU_Sel <= ALU_Sel + 1;
					#100;
				end
			$display("Selected = %d A = %d B = %d Result = %d Carry = %d",ALU_Sel, A, B, ALU_Out, ALU_Carry); 
		end
endmodule

