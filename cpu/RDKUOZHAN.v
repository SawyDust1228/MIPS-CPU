`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:33:12 12/11/2020 
// Design Name: 
// Module Name:    RDKUOZHAN 
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
//////////////////////////////////////////////////////////////////////////////////
`define no_signed 3'd0
`define un_signed_byte 3'd1
`define signed_byte 3'd2
`define un_signed_halfword 3'd3
`define signed_halfword 3'd4

module RDKUOZHAN(
	input [1:0] A,
	input [31:0] Din,
	input [2:0] op,
	output reg [31:0] Dout
    );
	
	always@(*) begin
		case(op)
			`no_signed:begin
				Dout=Din;
			end
			`un_signed_byte:begin
				if(A==2'd0) begin
					Dout={24'h000000,Din[7:0]};
				end
				else if(A==2'd1) begin
					Dout={24'h000000,Din[15:8]};
				end
				else if(A==2'd2) begin
					Dout={24'h000000,Din[23:16]};
				end
				else begin
					Dout={24'h000000,Din[31:24]};
				end
			end
			`signed_byte:begin
				
				if(A==2'd0) begin
					Dout={{24{Din[7]}},Din[7:0]};
				end
				else if(A==2'd1) begin
					Dout={{24{Din[15]}},Din[15:8]};
				end
				else if(A==2'd2) begin
					Dout={{24{Din[23]}},Din[23:16]};
				end
				else begin
					Dout={{24{Din[31]}},Din[31:24]};
				end
				
			end
			`un_signed_halfword:begin
				if(A[1]==0) begin
					Dout={16'h0000,Din[15:0]};
				end
				else begin
					Dout={16'h0000,Din[31:16]};
				end
				
			end
			`signed_halfword:begin
			
				if(A[1]==0) begin
					Dout={{16{Din[15]}},Din[15:0]};
				end
				else begin
					Dout={{16{Din[31]}},Din[31:16]};
				end
			
			end
			default:begin
				Dout=Din;
			end
		endcase
	end

endmodule
