`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:20:21 12/02/2020 
// Design Name: 
// Module Name:    zhilingfenjie 
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
module zhilingfenjie(
    input [31:0] instr,
    output [5:0] opcode,
    output [5:0] func,
    output [4:0] rs,
    output [4:0] rt,
    output [4:0] rd,
    output [25:0] imme26,
	 output [4:0] shamt,
    output [15:0] imme16
    ); 
	 
	 assign opcode=instr[31:26];
	 assign func=instr[5:0];
	 assign rs=instr[25:21];
	 assign rt=instr[20:16];
	 assign rd=instr[15:11];
	 assign shamt=instr[10:6];
	 assign imme26=instr[25:0];
	 assign imme16=instr[15:0];


endmodule
