`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:47:47 12/02/2020 
// Design Name: 
// Module Name:    ex_mem 
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
module ex_mem(
    input clk,
    input reset,
    input [31:0] alu_result_e,
    input [31:0] dm_wd_e,
    input [31:0] pc8e,
    input [4:0] dste,
    input rfwre,
    input [1:0] m2sele,
    input dmwre,
	 input jale,
	 input [4:0] rte,//
	 input [2:0] dmrdope,
	 input swe,//new
	 input sbe,//new
	 input she,//new
	 
	 input [4:0] ALUop,//
	 
	 input movz_zero,//movz
	 input movn_zero,//movn
	 
	 input hiloope_shiyong,//
	 input [31:0] chengfaqishuchu,//
	 
	 
	 
    output reg [31:0] alu_result_m,
    output reg [31:0] dm_wd_m,
    output reg [31:0] pc8m,
    output reg [4:0] dstm,
    output reg rfwrm,
    output reg [1:0] m2selm,
    output reg dmwrm,
	 output reg [4:0] rtm,
	 output reg [2:0] dmrdopm,
	 output reg swm,//new
	 output reg sbm,//new
	 output reg shm,//new
	 output reg jalm
    );
	 
	 
	 initial begin
		 alu_result_m<=0;
		 dm_wd_m<=0;
		 pc8m<=0;
		 dstm<=0;
		 rfwrm<=0;
		 m2selm<=0;
		 dmwrm<=0;
		 jalm<=0;
		 rtm<=0;
		 dmrdopm<=0;
		 swm<=0;
		 sbm<=0;
		 shm<=0;
	 end
	 
	 always@(posedge clk) begin
		if(reset) begin
			 alu_result_m<=0;
			 dm_wd_m<=0;
			 pc8m<=0;
			 dstm<=0;
			 rfwrm<=0;
			 m2selm<=0;
			 dmwrm<=0;
			 jalm<=0;
			 rtm<=0;
			 dmrdopm<=0;
			 swm<=0;
			 sbm<=0;
			 shm<=0;
		end
		else begin
			if(hiloope_shiyong) begin
				alu_result_m<=chengfaqishuchu;
			end
			else begin
				alu_result_m<=alu_result_e;
			end
			 dm_wd_m<=dm_wd_e;
			 pc8m<=pc8e;
			 dstm<=dste;
			 
			// rfwrm<=rfwre;
			 
			 if(ALUop==5'd16) begin
				rfwrm<=rfwre & movz_zero;
			 end
			 else if(ALUop==5'd17) begin
				rfwrm<=rfwre & movn_zero;
			 end
			 else begin
				rfwrm<=rfwre;
			 end
			 
			 
			 
			 m2selm<=m2sele;
			 dmwrm<=dmwre;
			 jalm<=jale;
			 rtm<=rte;
			 dmrdopm<=dmrdope;
			 swm<=swe;
			 sbm<=sbe;
			 shm<=she;			
		end
	 
	 end


endmodule
