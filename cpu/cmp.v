`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:42:50 12/02/2020 
// Design Name: 
// Module Name:    cmp 
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
module cmp(
    input [31:0] a,
    input [31:0] b,
    output zero,
	 output xiaoyu_zero,//
	 output xiaoyudengyu_zero,//
	 output dayu_zero,//
	 output dayudengyu_zero,//
	 output budengyu//
    );
	 
	 assign zero=(a==b) ? 1 : 0;
	 assign dayudengyu_zero=($signed(a)>=$signed(0))? 1 : 0;
	 assign dayu_zero=($signed(a)>$signed(0))?1:0;
	 assign xiaoyudengyu_zero=($signed(a)<=$signed(0))? 1 : 0;
	 assign xiaoyu_zero=($signed(a)<$signed(0))?1:0;
	 assign budengyu = ~zero;
endmodule 
