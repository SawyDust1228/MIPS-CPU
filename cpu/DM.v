`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:39:31 11/18/2020 
// Design Name: 
// Module Name:    DM 
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
module DM(
    input clk,
    input reset,
    input wr,
	 input [3:0] BE,//p6_newport
	 input [31:0] result,
    input [13:2] A,
    input [31:0] WD,
	 input [31:0] pc,
    output reg [31:0] RD
    );
	 
	 reg [31:0] dm [0:4095];
	 integer i;
	 
	 initial begin
		for(i=0;i<4096;i=i+1) begin
			dm[i]<=32'd0;
		end
	 end
	 
	  
	 always@(posedge clk) begin
		if(reset) begin
			for(i=0;i<4096;i=i+1) begin
				dm[i]<=32'd0;
			end
		end
		else begin
			if(wr) begin
				//dm[A]<=WD;
				if(BE==4'b1111)begin
					dm[A]=WD;
				end
				else if(BE==4'b0011)begin
					dm[A][15:0]=WD[15:0];
				end
				else if(BE==4'b1100) begin
					dm[A][31:16]= WD[15:0];
				end
				else if(BE==4'b0001) begin
					dm[A][7:0]=WD[7:0];
				end
				else if(BE==4'b0010) begin
					dm[A][15:8]=WD[7:0];
				end
				else if(BE==4'b0100) begin
					dm[A][23:16]=WD[7:0];
				end
				else if(BE==4'b1000) begin
					dm[A][31:24]=WD[7:0];
				end
				$display("%d@%h: *%h <= %h", $time, pc , {result[31:2],2'b00} , dm[A]);
			end
		end
	 end
	//zuhe
	always@(*) begin
		RD=dm[A];
	end

endmodule
