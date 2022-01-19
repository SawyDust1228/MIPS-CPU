`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:11:08 12/02/2020 
// Design Name: 
// Module Name:    pc 
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
module pc(
    input clk,
    input reset,
    input [31:0] npc,
	 input pcend,
    output reg [31:0] pc
    );
	 
	 initial begin
		pc<=32'h0000_3000;
	 end
	 
	 always@(posedge clk) begin
		if(reset) begin
			pc<=32'h0000_3000;
		end
		else begin
			if(pcend) begin
				pc<=pc;
			end
			else begin
				pc<=npc;
			end
		end
	
	 end


endmodule
