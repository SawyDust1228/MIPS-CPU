`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:59:19 12/11/2020 
// Design Name: 
// Module Name:    BE 
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
module BE(
    input [1:0] A1_0,
    output reg [3:0] BE,
	 input sw,
	 input sh,
	 input sb
    );
	 
	 initial begin
		BE=4'd0;
	 end
	 
	 always@(*) begin
		if(sw) begin
			BE=4'b1111;
		end
		else if(sh) begin
			if(A1_0[1]==1) begin
				BE=4'b1100;
			end
			else begin
				BE=4'b0011;
			end
		end
		else if(sb) begin
			if(A1_0==2'd0) begin
				BE=4'b0001;
			end
			else if(A1_0==2'd1) begin
				BE=4'b0010;
			end
			else if(A1_0==2'd2) begin
				BE=4'b0100;
			end
			else if(A1_0==2'd3) begin
				BE=4'b1000;
			end
		end
	 end
	 
	 


endmodule
