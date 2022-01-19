`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:03:14 12/02/2020 
// Design Name: 
// Module Name:    MUX 
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
module MUX1(
		input [1:0] m1sel,
		input [4:0] RtE,
		input [4:0] RdE,
		output reg [4:0] DstE
		
    );
	  wire [4:0] addr;
	  assign addr=5'd31;
	 
		always@(*) begin
			case(m1sel) 
				2'b00:begin
					DstE=RtE;
				end
				2'b01:begin
					DstE=RdE;
				end
				2'b10:begin
					DstE=addr;
				end
			default:begin
				DstE=RtE;
			end
			endcase
		
		end

endmodule


module MUX2(
		input [1:0] m2sel,
		input [31:0] alu_result_w,
		input [31:0] dm_rd_w,
		input [31:0] pc8_w,
		output reg [31:0] grf_data_w
		
    );
	 
		always@(*) begin
			case(m2sel) 
				2'b00:begin
					grf_data_w=alu_result_w;
				end
				2'b01:begin
					grf_data_w=dm_rd_w;
				end
				2'b10:begin
					grf_data_w=pc8_w;
				end
			default:begin
				grf_data_w=alu_result_w;
			end
			endcase
		
		end

endmodule


module MUX3(
		input m3sel,
		input [31:0] dm_wd_e,
		input [31:0] extout_e,
		output reg [31:0] alu2
		
    );
	 
		always@(*) begin
			case(m3sel) 
				1'b0:begin
					alu2=dm_wd_e;
				end
				1'b1:begin
					alu2=extout_e;
				end
			default:begin
				alu2=dm_wd_e;
			end
			endcase
		end

endmodule

module MUX4(
		input [1:0] forwardrsd,
		input [31:0] grf_rd1_d,
		input [31:0] alu_result_mem,
		input [31:0] pc8m,
		output reg [31:0] cmp_1
		
    );
	 
		always@(*) begin
			case(forwardrsd) 
				2'd0:begin
					cmp_1=grf_rd1_d;
				end
				2'd1:begin
					cmp_1=alu_result_mem;
				end
				2'd2:begin
					cmp_1=pc8m;
				end
			default:begin
				cmp_1=grf_rd1_d;
			end
			endcase
		end

endmodule


module MUX5(
		input  [1:0] forwardrtd,
		input [31:0] grf_rd2_d,
		input [31:0] alu_result_mem,
		input [31:0] pc8m,
		output reg [31:0] cmp_2
		
    );
	 
		always@(*) begin
			case(forwardrtd) 
				2'd0:begin
					cmp_2=grf_rd2_d;
				end
				2'd1:begin
					cmp_2=alu_result_mem;
				end
				2'd2:begin
					cmp_2=pc8m;
				end
			default:begin
				cmp_2=grf_rd2_d;
			end
			endcase
		end

endmodule


module MUX6(
		input [1:0] forwardrse,
		input [31:0] grf_rd1_e,
		input [31:0] grf_data_w,
		input [31:0] alu_result_mem,
		input [31:0] pc8m,
		output reg [31:0] alu_1
		
    );
	 
		always@(*) begin
			case(forwardrse) 
				2'b00:begin
					alu_1=grf_rd1_e;
				end
				2'b01:begin
					alu_1=grf_data_w;
				end
				2'b10:begin
					alu_1=alu_result_mem;
				end
				2'b11:begin
					alu_1=pc8m;
				end
			default:begin
				alu_1=grf_rd1_e;
			end
			endcase
		
		end

endmodule


module MUX7(
		input [1:0] forwardrte,
		input [31:0] grf_rd2_e,
		input [31:0] grf_data_w,
		input [31:0] alu_result_mem,
		input [31:0] pc8m,
		output reg [31:0] dm_wd_e
		
    );
	 
		always@(*) begin
			case(forwardrte) 
				2'b00:begin
					dm_wd_e=grf_rd2_e;
				end
				2'b01:begin
					dm_wd_e= grf_data_w;
				end
				2'b10:begin
					dm_wd_e=alu_result_mem;
				end
				2'b11:begin
					dm_wd_e=pc8m;
				end
			default:begin
				dm_wd_e=grf_rd2_e;
				end
			endcase
		
		end

endmodule

module MUX8(
		input [1:0] forwardrad,
		input [31:0] grf_rd1_d,
		input [31:0] alu_result_mem,
		input [31:0] pc8m,
		output reg [31:0] ra
		
    );
	 
		always@(*) begin
			case(forwardrad) 
				2'd0:begin
					ra=grf_rd1_d;
				end
			   2'd1:begin
					ra=alu_result_mem;
				end
				2'd2:begin
					ra=pc8m;
				end
			default:begin
					ra=grf_rd1_d;
				end
			endcase
		end

endmodule


module MUX9(
		input forwarddmwd,
		input [31:0] dm_wd_m,
		input [31:0] grf_data_w,
		output reg [31:0] WD
		
    );
	 
		always@(*) begin
			case(forwarddmwd) 
				1'b0:begin
					WD=dm_wd_m;
				end
			   1'b1:begin
					WD=grf_data_w;
				end
			default:begin
					WD=dm_wd_m;
				end
			endcase
		end

endmodule


module MUX10(
		input hiloop,
		input [31:0] HI,
		input [31:0] LO,
		output reg [31:0] chengfaqishuchu
		
    );
	 
		always@(*) begin
			case(hiloop) 
				1'b0:begin
					chengfaqishuchu=LO;
				end
			   1'b1:begin
					chengfaqishuchu=HI;
				end
			default:begin
					chengfaqishuchu=LO;
				end
			endcase
		end

endmodule

