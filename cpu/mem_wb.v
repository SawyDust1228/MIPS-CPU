`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:33:12 12/02/2020 
// Design Name: 
// Module Name:    mem_wb 
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
module mem_wb(
    input clk,
    input reset,
    input [31:0] alu_result_m,
    input [31:0] dm_rd_m,
    input [31:0] pc8m,
    input [4:0] dstm,
	 input rfwrm,
	 input [1:0] m2selm,
	 input [2:0] dmrdopm,
	 output reg [31:0] alu_result_w,
	 output reg [31:0] dm_rd_w,
    output reg [31:0] pc8w,
    output reg [4:0] dstw,
	 output reg rfwrw,
	 output reg [2:0] dmrdopw,
	 output reg [1:0] m2selw
    );
	 
	 initial begin
		 alu_result_w<=0;
		 dm_rd_w<=0;
		 pc8w<=0;
		 dstw<=0;
		 rfwrw<=0;
		 m2selw<=0;
		 dmrdopw<=0;
	 end
	 
	 
	 
	 always@(posedge clk) begin
		if(reset) begin
			 alu_result_w<=0;
			 dm_rd_w<=0;
			 pc8w<=0;
			 dstw<=0;
			 rfwrw<=0;
			 m2selw<=0;
			 dmrdopw<=0;
		end
	   else begin
			 alu_result_w<=alu_result_m;
			 dm_rd_w<=dm_rd_m;
			 pc8w<=pc8m;
			 dstw<=dstm;
			 rfwrw<=rfwrm;
			 m2selw<=m2selm;
			 dmrdopw<=dmrdopm;
		end
	 end


endmodule
