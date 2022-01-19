`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:28:58 11/18/2020 
// Design Name: 
// Module Name:    ALU 
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

`define s0 5'd0
`define s1 5'd1
`define s2 5'd2
`define s3 5'd3
`define s4 5'd4
`define s5 5'd5
`define s6 5'd6
`define s7 5'd7
`define s8 5'd8
`define s9 5'd9
`define s10 5'd10
`define s11 5'd11
`define s12 5'd12
`define s13 5'd13
`define s14 5'd14
`define s15 5'd15
`define s16 5'd16
`define s17 5'd17

module ALU(
    input [31:0] A,
    input [31:0] B,
    input [4:0] ALUop,
	 input [4:0] s,//new shamt
    output reg [31:0] result,
	 output reg movz_zero,//movz
	 output reg movn_zero//movn
    );
	 
	 reg [31:0] temp;
	 reg flag;
	 integer i;
	 
	 initial begin
		temp<=0;
		flag<=1;
		i=0;
	 end
	 
	 
	 always@(*) begin
		case(ALUop) 
			`s0:begin
				result=A+B;
			end 
			`s1:begin
				result=A-B;
			end
			`s2:begin
				result=A|B;
			end
			`s3:begin
				result=A&B;
			end
			`s4:begin
				result=A^B;
			end
			`s5:begin
				result=~(A|B);
			end
			`s6:begin
				result=B<<s;
			end
			`s7:begin
				result=B<<A[4:0];
			end
			`s8:begin
				result=($signed(A)<$signed(B))? {{31{1'b0}},1'b1} : {{31{1'b0}},1'b0};
			end
			`s9:begin
				result=(A<B)? {{31{1'b0}},1'b1} : {{31{1'b0}},1'b0};
			end
			`s10:begin
				result=($signed(B))>>>s;
			end
			`s11:begin
				result=($signed(B))>>>A[4:0];
			end
			`s12:begin
				result=B>>s;
			end
			`s13:begin
				result=B>>A[4:0];
			end
			
			`s14:begin
				temp=32;
				flag=1;
				for(i=31;i>=0;i=i-1) begin
					if(flag==1) begin
						if(A[i]==0) begin
							flag=0;
							temp=31-i;
						end
					end
				end
				result=temp;
			end
			
			`s15:begin
				temp=32'd32;
				flag=1;
				for(i=31;i>=0;i=i-1) begin
					if(A[i]==1&&flag==1) begin
						flag=0;
						temp=31-i;
					end
				end
				result=temp;
			end
			
			`s16:begin
				result<=A;
			end
			
			`s17:begin
				result<=A;
			end
			
			default:begin
				result=A+B;
			end
		
		endcase
		//movz
		if(B==0) begin
			movz_zero<=1;
		end
		else begin
			movz_zero<=0;
		end
		
		// movn
		if(B!=0) begin
			movn_zero<=1;
		end
		else begin
			movn_zero<=0;
		end
		
		
	 
	 end


endmodule
