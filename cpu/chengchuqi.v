`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:19:37 12/12/2020 
// Design Name: 
// Module Name:    chengchuqi 
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

//mult、multu、div、divu、mfhi、mflo、mthi 式 mtlo 

`define kongxian 4'd0
`define mult 4'd1
`define multu 4'd2
`define div 4'd3
`define divu 4'd4
`define mfhi 4'd5
`define mfho 4'd6
`define mthi 4'd7
`define mtlo 4'd8
`define madd 4'd9
`define maddu 4'd10
`define msub 4'd11
`define msubu 4'd12

module chengchuqi(
    input [31:0] D1,
    input [31:0] D2,
    input [3:0] op,
    input clk,
    input reset,
    output [31:0] HI_out,
    output [31:0] LO_out,
    output reg  start,
    output reg buzy
    );
	 
	 reg [3:0] count;
	 reg [3:0] state;
	 reg [31:0] D1_reg,D2_reg;
	 reg [31:0] HI,LO;
	 reg [63:0] temp;
		
	 
	 initial begin
		HI<=0;
		LO<=0;
		start<=0;
		buzy<=0;
		count<=0;
		state<=0;
		D1_reg<=0;
		D2_reg<=0;
		temp<=64'd0;
	 end
	 
	 always@(*) begin
		start  = (op==1)|(op==2)|(op==3)|(op==4)|(op==9)|(op==10)|(op==11)|(op==12) ;
	 end
	 
	 assign HI_out=HI;
	 assign LO_out=LO;
	 
	 
	 always@(posedge clk) begin
		if(reset) begin
			HI<=0;
			LO<=0;
			start<=0;
			buzy<=0;
			count<=0;
			state<=0;
			D1_reg<=0;
			D2_reg<=0;
			temp<=64'd0;
		end
		else begin
			if(start|buzy) begin
				if(start) begin
					
					state<=op;
					D1_reg<=D1;
					D2_reg<=D2;
					buzy<=1;
					count<=1;
					start<=0;
				end
				/*
				else if(start2) begin
					buzy<=1;
					count<=1;
					start2<=0;
				end*/
				else if(buzy) begin
					if(state==`mult || state==`multu ||state==`madd ||state==`maddu ||state==`msub ||state==`msubu) begin
						if(count==5) begin
							state<=0;
							buzy<=0;
							count<=0;
							D1_reg<=0;
							D2_reg<=0;
							
							if(state==`mult) begin
								{HI,LO}<=$signed(D1_reg)*$signed(D2_reg);
							end
							
							else if(state==`madd) begin
								
								{HI,LO}<=$signed({HI,LO})+$signed(D1_reg)*$signed(D2_reg);
								
							end
							
							/*
							else if(state==`madd) begin
								temp<=64'd0;
								temp<=$signed({HI,LO})+$signed(D1_reg)*$signed(D2_reg);
								{HI,LO}<=temp;
							end*/
							
							
							else if(state==`maddu) begin
								
								{HI,LO}<={HI,LO}+D1_reg*D2_reg;
								
							end
							else if(state==`msub) begin
								
								{HI,LO}<=$signed({HI,LO})-$signed(D1_reg)*$signed(D2_reg);
								
							end
							else if(state==`msubu) begin
								
								{HI,LO}<={HI,LO}-D1_reg*D2_reg;
								
							end
							else begin
								{HI,LO}<=D1_reg*D2_reg;
							end
						end
						else begin
							count<=count+1;
						end
					end
					else if(state==`div || state==`divu) begin
						if(count==10) begin
							state<=0;
							buzy<=0;
							count<=0;
							D1_reg<=0;
							D2_reg<=0;
							
							if(state==`div) begin
								HI<=$signed(D1_reg)%$signed(D2_reg);
								LO<=$signed(D1_reg)/$signed(D2_reg);
							end
							else begin
								HI<=D1_reg%D2_reg;
								LO<=D1_reg/D2_reg;
							end
						end
						else begin
							count<=count+1;
						end
					end
				end
			end
			else begin
				if(op==`mthi) begin
					HI<=D1;
				end
				else if(op==`mtlo) begin
					LO<=D1;
				end
			end
		end	
	 
	 end


endmodule
