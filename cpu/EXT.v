`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:33:56 11/18/2020 
// Design Name: 
// Module Name:    EXT 
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


`define s0 2'd0
`define s1 2'd1
`define s2 2'd2
`define s3 2'd3


module ext(
    input [15:0] imm,
    input [1:0] EOp,
    output reg [31:0] ext
    );
	 
	 integer i;
	 
	 always@(*)begin
		case(EOp)
			`s0:begin
				for(i=16;i<=31;i=i+1) begin
					ext[i]=0;				
				end
				ext[15:0]=imm;
			end
			`s1:begin
				if(imm[15]==1) begin
					for(i=16;i<=31;i=i+1) begin
						ext[i]=1;
					end
					ext[15:0]=imm;
				end
				else begin
					for(i=16;i<=31;i=i+1) begin
						ext[i]=0;
					end
					ext[15:0]=imm;
				end
			end
			`s2:begin
				for(i=0;i<=15;i=i+1) begin
					ext[i]=0;
				end
				ext[31:16]=imm;
			end
			`s3:begin
				if(imm[15]==1) begin
					for(i=16;i<=31;i=i+1) begin
						ext[i]=1;
					end
					ext[15:0]=imm;
				end
				else begin
					for(i=16;i<=31;i=i+1) begin
						ext[i]=0;
					end
					ext[15:0]=imm;
				end
				ext=$signed(ext)<<2;
			end
	 
		endcase
	 
	 end


endmodule
