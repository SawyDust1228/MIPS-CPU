`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:53:21 12/02/2020 
// Design Name: 
// Module Name:    adventure_control 
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
module adventure_control(
	 input [4:0] rsd,
	 input [4:0] rtd,
	 input [4:0] rdd,
	 input [4:0] rse,
	 input [4:0] rte,
	 input [4:0] dste,
	 input [4:0] dstm,
	 input [4:0] dstw,
	 input brd,
	 input zero,
	 input dmwre,
    input rfwre,
    input dmwrm,
    input rfwrm,
    input rfwrw,
	 input jalm,
	 input jrd,
	 input [1:0] m2sele,
	 input [1:0] m2selm,
	 input readdme,
	 input rtuse,//new 用于让lw，ori不暂停
	 input [4:0] rtm,//
	 
	 input buzy,
	 input start,
	 input [3:0] chengfaqiopd,
	 
    output pcend,
    output endd,
    output flushd,
    output [1:0] forwardrsd,
    output [1:0] forwardrtd,
    output flushe,
    output [1:0] forwardrse,
	 output [1:0] forwardrad,
	 output forwarddmwd,
    output [1:0] forwardrte
    );
	 
	 
	 wire C_R_EM_Rs,C_R_EW_Rs,C_R_EM_Rt,C_R_EW_Rt,
	 C_L_DE_Rs,C_L_DE_Rt,C_B_DM_Rs,C_B_DM_Rt,C_B_D,
	 C_BJAL_DM_Rs,C_BJAL_DM_Rt,C_RJAL_EM_Rs,C_RJAL_EM_Rt
	 ,C_BJR_DM_Rs,C_JR_D,C_SWLW_MW,C_MD_stall,C_BJR_JAL_Rs;
	 
	 
	 
	 
	 
	 //检测数据转发冲突，R-R
	 assign C_R_EM_Rs=(rse!=0) & (rse==dstm) & rfwrm &(!jalm);
	 assign C_R_EW_Rs=(rse!=0) & (rse==dstw) & rfwrw;
	 assign C_R_EM_Rt=(rte!=0) & (rte==dstm) & rfwrm &(!jalm);
	 assign C_R_EW_Rt=(rte!=0) & (rte==dstw) & rfwrw;
	 assign C_RJAL_EM_Rs=(rse!=0) & (rse==dstm) & rfwrm & jalm;
	 assign C_RJAL_EM_Rt=(rte!=0) & (rte==dstm) & rfwrm & jalm;
	 
	 // lw,sw转发
	 assign C_SWLW_MW=(rtm!=0) & (rtm==dstw) & rfwrw & dmwrm;
	 //处理数据转发冲突，R-R
	 assign forwardrse = C_R_EM_Rs? 2'b10:
								C_RJAL_EM_Rs? 2'd3:
							   C_R_EW_Rs? 2'b01:
											        2'b00;
	
	 assign forwardrte = C_R_EM_Rt? 2'b10:
								C_RJAL_EM_Rt? 2'd3:
							   C_R_EW_Rt? 2'b01:
											        2'b00;	
	 assign forwarddmwd =  C_SWLW_MW ? 1:
														0;
	
	//检测数据暂停，lw，addi												  
    assign C_L_DE_Rs=(rsd!=0) &(rsd==dste) & rfwre & readdme;// sw de rs zai eji yong
	 assign C_L_DE_Rt=(rtd!=0) &(rtd==dste) & rfwre & readdme & rtuse;// sw 的rt在w级用，但不用转发

	 
	 
	 //检测控制冒险
	 assign C_B_DM_Rs=(rsd!=0) &(rsd==dstm) & rfwrm & (!jalm);
	 assign C_B_DM_Rt=(rtd!=0) &(rtd==dstm) & rfwrm & (!jalm);
	 assign C_B_D=brd & rfwre & ( ((rsd==dste)&&(rsd!=0)) | ((rtd==dste)&&(rtd!=0)) )|
					  brd & (m2sele==2'd1) & ( ((rsd==dste)&&(rsd!=0)) | ((rtd==dste)&&(rtd!=0)) ) & rfwre|
					  brd & (m2selm==2'd1) & ( ((rsd==dstm)&&(rsd!=0)) | ((rtd==dstm)&&(rtd!=0)) ) & rfwrm;
	 assign C_BJAL_DM_Rs= (rsd!=0) &(rsd==dstm) & rfwrm & jalm & brd;
	 assign C_BJAL_DM_Rt= (rtd!=0) &(rtd==dstm) & rfwrm & jalm  & brd;
	 
	 assign C_BJR_DM_Rs = jrd & (rsd==dstm)& rfwrm &(rsd!=0) & (!jalm);
	 assign C_BJR_JAL_Rs = jrd & (rsd==dstm)& rfwrm &(rsd!=0) & jalm;
	 
	 assign C_JR_D = jrd & rfwre & (rsd==dste) & (rsd!=0) |
					     jrd & (m2sele==2'd1) & ( rsd==dste) &(rsd!=0) & rfwre|
					     jrd & (m2selm==2'd1) & ( rsd==dstm) &(rsd!=0) & rfwrm;
	 
	 //处理控制冒险和数据暂停
	 
	 assign forwardrsd=C_B_DM_Rs? 2'd1:
							 C_BJAL_DM_Rs? 2'd2:
														2'd0;
	 assign forwardrtd=C_B_DM_Rt? 2'd1:
							 C_BJAL_DM_Rt? 2'd2:
													2'd0;
													
	 assign forwardrad= C_BJR_DM_Rs? 2'd1:
							  C_BJR_JAL_Rs? 2'd2:
														0;
	 
	 
	 //判断乘法除法指令的暂停
	 assign C_MD_stall= (buzy|start) & (chengfaqiopd!=0);
	 
	 
	 assign pcend= C_L_DE_Rs | C_L_DE_Rt | C_B_D | C_JR_D | C_MD_stall;
	 assign endd= C_L_DE_Rs | C_L_DE_Rt | C_B_D | C_JR_D | C_MD_stall;
	 assign flushe= C_L_DE_Rs | C_L_DE_Rt | C_B_D| C_JR_D | C_MD_stall ;
	 assign flushd=0;
	 //assign flushd= (brd & zero);//jrd的时候flushd不冲刷
	 
	 
endmodule
