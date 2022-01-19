`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:24:49 12/02/2020 
// Design Name: 
// Module Name:    NPC 
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
module NPC(
    input [25:0] imme,
    input [31:0] pc,
	 input [31:0] ra,
	 input brd,
	 input jald,
	 input jrd,
	 input br_bgez,
	 input br_bgtz,
	 input br_blez,
	 input br_bltz,
	 input br_bne,
	 input br_bgezal,//new addition
	 input br_bltzal,//new addition
	 input br_bgezalr,//new addition
	 input br_bltzalr,//new addition
    output [31:0] pc8,
    output [31:0] npc
    );
	 
	 assign pc8=pc+8;
	 
	 //如果要修改跳转pc，则要考虑信号的顺序，如jalr指令，jrd和jald都是1，jrd必须在jald之前
	 assign npc=(brd)? pc+{{14{imme[15]}},imme[15:0],2'b00}:
					(br_bltzal)? pc+{{14{imme[15]}},imme[15:0],2'b00}:
					(br_bgezal)? pc+{{14{imme[15]}},imme[15:0],2'b00}:
					(br_bgezalr)? pc+{{14{imme[15]}},imme[15:0],2'b00}:
					(br_bltzalr)? pc+{{14{imme[15]}},imme[15:0],2'b00}:
					(br_bgez)? pc+{{14{imme[15]}},imme[15:0],2'b00}:
					(br_bgtz)? pc+{{14{imme[15]}},imme[15:0],2'b00}:
					(br_blez)? pc+{{14{imme[15]}},imme[15:0],2'b00}:
					(br_bltz)? pc+{{14{imme[15]}},imme[15:0],2'b00}:
					(br_bne)? pc+{{14{imme[15]}},imme[15:0],2'b00}:
					(jrd)? ra:
					(jald)? {pc[31:28],imme,{2{1'b0}}}:
																	pc+4;
 	 
endmodule
//j j target
//jr pc<-R[rs]
// jal pc<-pc31..28||instr_index||00
//		 R[31]<-pc+4
//jalr pc<-R[rs]
//     R[rd]<-pc+4