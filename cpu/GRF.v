`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:04:49 12/02/2020 
// Design Name: 
// Module Name:    GRF 
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
module GRF(
    input clk,
    input reset,
    input wr,
    input [31:0] wd,
    input [4:0] a1,
    input [4:0] a2,
    input [4:0] a3,
	 input [31:0] pc,
    output reg [31:0]rd1,
    output reg [31:0]rd2
    );
	 
	 reg [31:0] rf [0:31];
	 
	 integer i;
	 
	 initial begin
		for(i=0;i<32;i=i+1) begin
			rf[i]<=0;
		end
		rd1<=0;
		rd2<=0;
	 end
	 
	 always@(posedge clk) begin
		if(reset) begin
			for(i=0;i<32;i=i+1) begin
				rf[i]<=0;
			end
		end
		else begin
			if(wr && a3!=5'd0) begin
				rf[a3]<=wd;
				//$display("@%h: $%d <= %h", pc, a3, wd);
				$display("%d@%h: $%d <= %h", $time, pc, a3, wd);
			end
			else if(wr && a3==5'd0) begin
				rf[a3]<=0; 
			end
		end 
	 end
	 
	 always@(*) begin
	 
		if(a1==a3 && a1!=0 && wr==1) begin
			rd1=wd;
		end
		else begin
			if(a1==0) begin
				rd1=0;
			end
			else begin
				rd1=rf[a1];
			end
		end
		
		if(a2==a3 && a2!=0 && wr==1) begin
			rd2=wd;
		end
		else begin
			if(a2==0) begin
				rd2=0;
			end
			else begin
				rd2=rf[a2];
			end
		end
	 
	 
	 end


endmodule
