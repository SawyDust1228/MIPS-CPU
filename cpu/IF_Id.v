`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:17:20 12/02/2020 
// Design Name: 
// Module Name:    IF_Id 
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
module IF_Id(
    input clk,
    input reset,
    input [31:0] instr,
    input [31:0] pc8,
    input endd,
    input flushd,
	 output reg [31:0] pc8d,
    output reg [31:0] instr_out
    );
	 
	 initial begin
		pc8d<=0;
		instr_out<=0;
	 end
	 
	 always@(posedge clk) begin
		if(reset) begin
			instr_out<=0;
			pc8d<=0;
		end
		else begin
			if(endd) begin
				instr_out<=instr_out;
				pc8d<=pc8d;
			end
			else if(flushd) begin
				instr_out<=0;
				pc8d<=pc8d;
			end
			else begin
				instr_out<=instr;
				pc8d<=pc8;
			end
		
		end
	 end


endmodule
