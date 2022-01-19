`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:12:31 12/15/2020
// Design Name:   chengchuqi
// Module Name:   D:/jizu/p6/cpup6/chengchuqi_tb.v
// Project Name:  cpup6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: chengchuqi
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module chengchuqi_tb;

	// Inputs
	reg [31:0] D1;
	reg [31:0] D2;
	reg [3:0] op;
	reg clk;
	reg reset;

	// Outputs
	wire [31:0] HI_out;
	wire [31:0] LO_out;
	wire start;
	wire buzy;

	// Instantiate the Unit Under Test (UUT)
	chengchuqi uut (
		.D1(D1), 
		.D2(D2), 
		.op(op), 
		.clk(clk), 
		.reset(reset), 
		.HI_out(HI_out), 
		.LO_out(LO_out), 
		.start(start), 
		.buzy(buzy)
	);

	initial begin
		// Initialize Inputs
		D1 = 0;
		D2 = 0;
		op = 0;
		clk = 1;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		D1 = 20;
		D2 = 5;
		op = 3;
		#10;
		
		D1 = 0;
		D2 = 0;
		op = 0;
		// Add stimulus here

	end
      always #5 clk = ~clk;
endmodule

