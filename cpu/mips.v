`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:51:45 12/02/2020 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset
    );
	 
	 wire [31:0] npc,pc,pc8,ra,instr,pc8d,instr_out,grf_rd1_d,grf_rd2_d,alu_result_mem,cmp_1,cmp_2,extoutd,rd1e,rd2e,extoute,
	 pc8e,grf_data_w,dm_wd_e,alu1,alu2,alu_result_e,dm_wd_m,pc8m,dm_rd_mem,pcmem,alu_result_w,dm_rd_w,pc8w,pcd,pcw,dm_rd_w_sel,WD,
	 HI_oute,LO_oute,chengfaqishuchue;
	 
	 wire pcend,brd,jald,jrd,flushd,endd,zero,rfwrd,dmwrd,m3seld,flushe,rfwre,dmwre,m3sele,rtuse,
	 rfwrm,dmwrm,rfwrw,jalm,jale,br,readdme,readdmd,forwarddmwd,swd,sbd,shd,br_bgez,br_bgtz,
	 br_btez,br_bltz,br_bne,xiaoyudengyu_zero,xiaoyu_zero,dayudengyu_zero,dayu_zero,budengyu,starte,buzye,
	 hiloope,hiloopd,hiloopd_shiyong,hiloope_shiyong,movz_zeroe,movn_zeroe;
	 
	 wire [25:0] imme;
	 wire [5:0] opcode,func;
	 wire [4:0] rsd,rtd,rdd,rse,rte,rde,dste,dstm,dstw,shamtd,shamte,rtm,aluopd,aluope;
	 wire [15:0] extind;
	 wire [1:0] extopd,m1seld,m2seld,m2sele,m1sele,m2selm,m2selw,forwardrsd,forwardrtd,forwardrse,forwardrte,forwardrad;
	 
	 wire [2:0] dmrdopd,dmrdope,dmrdopm,dmrdopw;
	 wire [3:0] BE,chengfaqiope,chengfaqiopd;
	 
	 //调教跳转的线定义
	 wire bgezal,br_bgezal,bltzal,br_bltzal,bgezalr,br_bgezalr,bltzalr,br_bltzalr;
	 
	  
	 assign pcmem=pc8m-8;
	 assign pcd=pc8d-8; 
	 assign pcw=pc8w-8;
	 
	 pc u_pc(
    .clk(clk),  
    .reset(reset),
    .npc(npc),
	 .pcend(pcend),
    .pc(pc)
    );
	 
	 NPC u_npc(
    .imme(imme),
    .pc(pc),
	 .ra(ra),
	 .brd(br),
	 .jald(jald),
	 .jrd(jrd),
    .pc8(pc8),
	 .br_bgez(br_bgez),
	 .br_bgtz(br_bgtz),
	 .br_blez(br_blez),
	 .br_bltz(br_bltz),
	 .br_bne(br_bne),
	 .br_bgezal(br_bgezal),//
	 .br_bltzal(br_bltzal),//new addition
	 .br_bgezalr(br_bgezalr),//new addition
	 .br_bltzalr(br_bltzalr),//new addition
    .npc(npc)
    );
	 
	 im u_im(
    .clk(clk),
    .reset(reset),
    .pc(pc),
    .instr(instr)
    );
	 
	 
	 IF_Id u_if_id(
    .clk(clk),
    .reset(reset),
    .instr(instr),
    .pc8(pc8),
    .endd(endd),
    .flushd(flushd),
	 .pc8d(pc8d),
    .instr_out(instr_out)
    );
	 
	 
	 zhilingfenjie u_zhilingfenjie(
    .instr(instr_out),
    .opcode(opcode),
    .func(func),
    .rs(rsd),
    .rt(rtd),
    .rd(rdd),
	 .shamt(shamtd),//
    .imme26(imme),
    .imme16(extind)
    ); 
	 
	 control u_control(
    .opcode(opcode),
    .func(func),
    .zero(zero),
	 .xiaoyu_zero(xiaoyu_zero),//
	 .xiaoyudengyu_zero(xiaoyudengyu_zero),//
	 .dayu_zero(dayu_zero),//
	 .dayudengyu_zero(dayudengyu_zero),//
	 .budengyu(budengyu),//
	 .rt(rtd),
    .jald(jald),
    .jrd(jrd),
    .brd(brd),
    .rfwrd(rfwrd),
    .m2seld(m2seld),
    .dmwrd(dmwrd),
    .m1seld(m1seld),
    .aluopd(aluopd),
    .m3seld(m3seld),
	 .br_beq(br),
	 .swd(swd),//new
	 .sbd(sbd),//new
	 .shd(shd),//new
	 .br_bgez(br_bgez),
	 .br_bgtz(br_bgtz),
	 .br_blez(br_blez),
	 .br_bltz(br_bltz),
	 .br_bne(br_bne),
	 //条件跳转
	 .bgezal(bgezal),
	 .br_bgezal(br_bgezal),//
	 
	 .bltzal(bltzal),
	 .bgezalr(bgezalr),
	 .bltzalr(bltzalr),
	 
	 .br_bltzal(br_bltzal),//new addition
	 .br_bgezalr(br_bgezalr),//new addition
	 .br_bltzalr(br_bltzalr),//new addition
	 
	 .dmrdopd(dmrdopd),
	 .hiloopd(hiloopd),
	 .chengfaqiopd(chengfaqiopd),//
	 .hiloopd_shiyong(hiloopd_shiyong),//
	 .readdmd(readdmd),
	 .rtuse(rtuse),
    .extopd(extopd)
    );
	 
	 ext u_ext(
    .imm(extind),
    .EOp(extopd),
    .ext(extoutd)
    );
	 
	 GRF u_grf(
    .clk(clk),
    .reset(reset),
    .wr(rfwrw),
    .wd(grf_data_w),
    .a1(rsd),
    .a2(rtd),
    .a3(dstw),
	 .pc(pcw),
    .rd1(grf_rd1_d),
    .rd2(grf_rd2_d)
    );
	 
	 MUX8 u_mux8(
		.forwardrad(forwardrad),
		.grf_rd1_d(grf_rd1_d),
		.alu_result_mem(alu_result_mem),
		.pc8m(pc8m),
		.ra(ra)
    );
	 
	 MUX4 u_mux4(
		.forwardrsd(forwardrsd),
		.grf_rd1_d(grf_rd1_d),
		.alu_result_mem(alu_result_mem),
		.pc8m(pc8m),
		.cmp_1(cmp_1)
    );
	 
	 MUX5 u_mux5(
		.forwardrtd(forwardrtd),
		.grf_rd2_d(grf_rd2_d),
		.alu_result_mem(alu_result_mem),
		.pc8m(pc8m),
		.cmp_2(cmp_2)
    );
	 
	 cmp u_cmp(
    .a(cmp_1),
    .b(cmp_2),
	 .xiaoyu_zero(xiaoyu_zero),//
	 .xiaoyudengyu_zero(xiaoyudengyu_zero),//
	 .dayu_zero(dayu_zero),//
	 .dayudengyu_zero(dayudengyu_zero),//
	 .budengyu(budengyu),//
    .zero(zero)
    );
	 
	 
	 
	 id_ex u_idex(
    .clk(clk),
    .reset(reset),
    .flushe(flushe),
    .rd1d(grf_rd1_d),
    .rd2d(grf_rd2_d),
    .extoutd(extoutd),
    .pc8d(pc8d),
    .rsd(rsd),
    .rtd(rtd),
    .rdd(rdd),
    .rfwrd(rfwrd),
    .m2seld(m2seld),
    .dmwrd(dmwrd),
    .m1seld(m1seld),
    .aluopd(aluopd),
    .m3seld(m3seld),
	 .dmrdopd(dmrdopd),
	 .readdmd(readdmd),
	 .swd(swd),//new
	 .sbd(sbd),//new
	 .shd(shd),//new
    .rd1e(rd1e),
    .rd2e(rd2e),
	 
	 
	 //条件跳转
	 .bgezal(bgezal),
	 .br_bgezal(br_bgezal),//
	 .bltzal(bltzal),
	 .bgezalr(bgezalr),
	 .bltzalr(bltzalr),
	 
	 .br_bltzal(br_bltzal),//new addition
	 .br_bgezalr(br_bgezalr),//new addition
	 .br_bltzalr(br_bltzalr),//new addition
	 
	 .hiloopd(hiloopd),//
	 .chengfaqiopd(chengfaqiopd),//
	 .hiloopd_shiyong(hiloopd_shiyong),//
	 
	 .hiloope(hiloope),//
	 .chengfaqiope(chengfaqiope),//
	 .hiloope_shiyong(hiloope_shiyong),//
	 
    .extoute(extoute),
    .rse(rse),
    .rte(rte),
    .rde(rde),
    .pc8e(pc8e),
    .rfwre(rfwre),
    .m2sele(m2sele),
    .dmwre(dmwre),
    .m1sele(m1sele),
    .aluope(aluope),
    .m3sele(m3sele),
	 .jald(jald),
	 .swe(swe),//new
	 .sbe(sbe),//new
	 .she(she),//new
	 .readdme(readdme),
	 .shamtd(shamtd),//
	 .shamte(shamte),//
	 .dmrdope(dmrdope),
	 .jale(jale)
    );
	 
	 
	MUX6 u_mux6(
		.forwardrse(forwardrse),
		.grf_rd1_e(rd1e),
		.grf_data_w(grf_data_w),
		.alu_result_mem(alu_result_mem),
		.pc8m(pc8m),
		.alu_1(alu1)
    );
	 
	 MUX7 u_mux7(
		.forwardrte(forwardrte),
		.grf_rd2_e(rd2e),
		.grf_data_w(grf_data_w),
		.alu_result_mem(alu_result_mem),
		.pc8m(pc8m),
		.dm_wd_e(dm_wd_e)
    );
	 
	 MUX3 u_mux3(
		.m3sel(m3sele),
		.dm_wd_e(dm_wd_e),
		.extout_e(extoute),
		.alu2(alu2)
    );
	 
	 ALU u_alu(
    .A(alu1),
    .B(alu2),
	 .s(shamte),
    .ALUop(aluope),
	 .movz_zero(movz_zeroe),//movz
	 .movn_zero(movn_zeroe),//movn
    .result(alu_result_e)
    );
	 
	 
	 chengchuqi U_chengfaqi(
    .D1(alu1),
    .D2(alu2),
    .op(chengfaqiope),//从control发出
    .clk(clk),
    .reset(reset),
    .HI_out(HI_oute),//
    .LO_out(LO_oute),//
    .start(starte),//
    .buzy(buzye)//
    );
	 
	 MUX10 u_mux10(
		.hiloop(hiloope),//control发出
		.HI(HI_oute),
		.LO(LO_oute),
		.chengfaqishuchu(chengfaqishuchue)
		
    );
	 
	 
	 MUX1 u_mux1(
		.m1sel(m1sele),
		.RtE(rte),
		.RdE(rde),
		.DstE(dste)
    );
	 
	 ex_mem u_exmem(
    .clk(clk),
    .reset(reset),
    .alu_result_e(alu_result_e),
    .dm_wd_e(dm_wd_e),
    .pc8e(pc8e),
    .dste(dste),
    .rfwre(rfwre),
    .m2sele(m2sele),
    .dmwre(dmwre),
	 .rte(rte),
	 .swe(swe),//new
	 .sbe(sbe),//new
	 .she(she),//new
	 .dmrdope(dmrdope),
    .alu_result_m(alu_result_mem),
    .dm_wd_m(dm_wd_m),
    .pc8m(pc8m),
    .dstm(dstm),
    .rfwrm(rfwrm),
    .m2selm(m2selm),
    .dmwrm(dmwrm),
	 .hiloope_shiyong(hiloope_shiyong),//
	 .chengfaqishuchu(chengfaqishuchue),//
	 .swm(swm),//new
	 .sbm(sbm),//new
	 .shm(shm),//new
	 .jale(jale),
	 .rtm(rtm),
	 .dmrdopm(dmrdopm),
	 .ALUop(aluope),
	 .movz_zero(movz_zeroe),//movz
	 .movn_zero(movn_zeroe),//movn
	 .jalm(jalm)
    );
	 
	 BE u_BE(
    .A1_0(alu_result_mem[1:0]),
    .BE(BE),
	 .sw(swm),//p6新的control信号
	 .sh(shm),//p6新的control信号
	 .sb(sbm)//p6新的control信号
    );
	 
	 DM u_dm(
    .clk(clk),
    .reset(reset),
    .wr(dmwrm),
	 .BE(BE),//p6_newport
	 .result(alu_result_mem&16383),
    .A(alu_result_mem[13:2]),
    .WD(WD),//
	 .pc(pcmem),
    .RD(dm_rd_mem)
    );
	 
	 
	 MUX9 u_mux9(
		.forwarddmwd(forwarddmwd),
		.dm_wd_m(dm_wd_m),
		.grf_data_w(grf_data_w),
		.WD(WD)
		
    );
	 
	 mem_wb u_memwb(
    .clk(clk),
    .reset(reset),
    .alu_result_m(alu_result_mem),
    .dm_rd_m(dm_rd_mem),
    .pc8m(pc8m),
    .dstm(dstm),
	 .rfwrm(rfwrm),
	 .m2selm(m2selm),
	 .dmrdopm(dmrdopm),
	 .alu_result_w(alu_result_w),
	 .dm_rd_w(dm_rd_w),
    .pc8w(pc8w),
    .dstw(dstw),
	 .rfwrw(rfwrw),
	 .dmrdopw(dmrdopw),
	 .m2selw(m2selw)
    );
	 
	 RDKUOZHAN U_RDKUOZHAN(
	 .A(alu_result_w[1:0]),//将A[1:0]流水
	 .Din(dm_rd_w),
	 .op(dmrdopw),//p6新信号，记得从control流水
	 .Dout(dm_rd_w_sel)
    );
	 
	 MUX2 u_mux2(
		.m2sel(m2selw),
		.alu_result_w(alu_result_w),
		.dm_rd_w(dm_rd_w_sel),//
		.pc8_w(pc8w),
		.grf_data_w(grf_data_w)
    );
	 
	 adventure_control u_adventure_control(
	 .rsd(rsd),
	 .rtd(rtd),
	 .rdd(rdd),
	 .rse(rse),
	 .rte(rte),
	 .rtm(rtm),
	 .dste(dste),
	 .dstm(dstm),
	 .dstw(dstw),
	 .brd(brd),
	 .zero(zero),
	 .dmwre(dmwre),
    .rfwre(rfwre),
    .dmwrm(dmwrm),
    .rfwrm(rfwrm),
    .rfwrw(rfwrw),
	 .jalm(jalm),
	 .jrd(jrd),
	 .buzy(buzye),
	 .start(starte),
	 .chengfaqiopd(chengfaqiopd),
	 .readdme(readdme),
	 .m2sele(m2sele),
	 .m2selm(m2selm),
    .pcend(pcend),
    .endd(endd),
    .flushd(flushd),
	 .rtuse(rtuse),
    .forwardrsd(forwardrsd),
    .forwardrtd(forwardrtd),
    .flushe(flushe),
	 .forwardrad(forwardrad),
    .forwardrse(forwardrse),
	 .forwarddmwd(forwarddmwd),
    .forwardrte(forwardrte)
    );

endmodule
