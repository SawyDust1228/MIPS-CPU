`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:15:22 12/02/2020 
// Design Name: 
// Module Name:    im 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module im(
    input clk,
    input reset,
    input [31:0] pc,
    output[31:0] instr
    );
	 
	 wire [31:0] addr;
	 reg [31:0] im [0:4095];
	 integer i;
	 
	 assign addr=pc-32'h0000_3000;
	 assign 	instr=im[addr[13:2]];
	 
	 initial begin
		$readmemh("code.txt",im);
	 end
	  
 
endmodule
