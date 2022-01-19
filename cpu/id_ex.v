`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:35:20 12/02/2020 
// Design Name: 
// Module Name:    id_ex 
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
module id_ex(
    input clk,
    input reset,
    input flushe,
    input [31:0] rd1d,
    input [31:0] rd2d,
    input [31:0] extoutd,
    input [31:0] pc8d,
    input [4:0] rsd,
    input [4:0] rtd,
    input [4:0] rdd,
    input rfwrd,
    input [1:0] m2seld,
    input dmwrd,
    input [1:0] m1seld,
    input [4:0] aluopd,
    input m3seld,
	 input readdmd,
	 input jald,
	 input [4:0] shamtd,
	 input [2:0] dmrdopd,
	 input swd,//new
	 input sbd,//new
	 input shd,//new
	 
	 input hiloopd,//
	 input [3:0] chengfaqiopd,//
	 input hiloopd_shiyong,//
	 
	 //tiaojiantiaozhuan
	 input br_bgezal,
	 input bgezal,
	 input br_bltzal,
	 input bltzal,
	 input bgezalr,
	 input br_bgezalr,
	 input bltzalr,
	 input br_bltzalr,
	 
	 
    output reg[31:0] rd1e,
    output reg[31:0] rd2e,
    output reg [31:0] extoute,
    output reg [4:0] rse,
    output reg [4:0] rte,
    output reg[4:0] rde,
    output reg [31:0] pc8e,
    output reg rfwre,
    output reg[1:0] m2sele,
    output reg dmwre,
    output reg [1:0] m1sele,
    output reg [4:0] aluope,
    output reg m3sele,
	 output reg readdme,
	 output reg jale,
	 output reg [2:0] dmrdope,
	 output reg [4:0] shamte,
	 output reg swe,//new
	 output reg sbe,//new
	 output reg she,//new
	 
	 output reg hiloope,//
	 output reg [3:0] chengfaqiope,//
	 output reg hiloope_shiyong//
    );
	 
	 
	 initial begin
		 rd1e<=0;
		 rd2e<=0;
		 extoute<=0;
		 rse<=0;
		 rte<=0;
		 rde<=0;
		 pc8e<=0;
		 rfwre<=0;
		 m2sele<=0;
		 dmwre<=0;
		 m1sele<=0;
		 aluope<=0;
		 m3sele<=0;
		 readdme<=0;
		 jale<=0;
		 shamte<=0;
		 dmrdope<=0;
		 swe<=0;
		 sbe<=0;
		 she<=0;
		 
		 hiloope<=0;//
	    chengfaqiope<=0;//
	    hiloope_shiyong<=0;//
		 
	 end
	
	always@(posedge clk) begin
		if(reset) begin
		 rd1e<=0;
		 rd2e<=0;
		 extoute<=0;
		 rse<=0;
		 rte<=0;
		 rde<=0;
		 pc8e<=0;
		 rfwre<=0;
		 m2sele<=0;
		 dmwre<=0;
		 m1sele<=0;
		 aluope<=0;
		 m3sele<=0;
		 jale<=0;
		  shamte<=0;
		 readdme<=0;
		 dmrdope<=0;
		 swe<=0;
		 sbe<=0;
		 she<=0;
		 hiloope<=0;//
	    chengfaqiope<=0;//
	    hiloope_shiyong<=0;//
		end
		else begin
			if(flushe)begin
				 rd1e<=0;
				 rd2e<=0;
				 extoute<=0;
				 rse<=0;
				 rte<=0;
				 rde<=0;
				 pc8e<=0;
				 rfwre<=0;
				 m2sele<=0;
				 dmwre<=0;
				 m1sele<=0;
				 aluope<=0;
				 m3sele<=0;
				 jale<=0;
				 shamte<=0;
				 readdme<=0;
				 dmrdope<=0;
				 swe<=0;
				 sbe<=0;
				 she<=0;
				 hiloope<=0;//
				chengfaqiope<=0;//
				hiloope_shiyong<=0;//
			end
			else begin
				 rd1e<=rd1d;
				 rd2e<=rd2d;
				 extoute<=extoutd;
				 rse<=rsd;
				 rte<=rtd;
				 rde<=rdd;
				 pc8e<=pc8d;
				 
				 rfwre<=rfwrd;
				 
				 if(bgezal) begin
					rfwre<=rfwrd & br_bgezal;
				 end
				 else if(bltzal) begin
					rfwre<=rfwrd & br_bltzal;
				 end
				 else if(bgezalr) begin
					rfwre<=rfwrd & br_bgezalr;
				 end
				 else if(bltzalr) begin
					rfwre<=rfwrd & br_bltzalr;
				 end
				 else begin
					rfwre<=rfwrd;
				 end
				 
				 m2sele<=m2seld;
				 dmwre<=dmwrd;
				 m1sele<=m1seld;
				 aluope<=aluopd;
				 m3sele<=m3seld;
				 jale<=jald;
				 readdme<=readdmd;
				 shamte<=shamtd;
				 dmrdope<=dmrdopd;
				 swe<=swd;
				 sbe<=sbd;
				 she<=shd;
				 hiloope<=hiloopd;//
				 chengfaqiope<=chengfaqiopd;//
				 hiloope_shiyong<=hiloopd_shiyong;//
			end
		
		end
	
	end

endmodule
