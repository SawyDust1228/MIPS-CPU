`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:54:01 12/02/2020 
// Design Name: 
// Module Name:    control 
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


//alu
`define add_alu 5'd0
`define sub_alu 5'd1
`define or_alu 5'd2
`define and_alu 5'd3
`define xor_alu 5'd4
`define nor_alu 5'd5
`define zuoyi_shamt 5'd6
`define zuoyi_rs 5'd7
`define signed_xiaoyu 5'd8
`define unsigned_xiaoyu 5'd9
`define suanshuyouyi_shamt 5'd10
`define suanshuyouyi_rs 5'd11
`define luojiyouyi_shamt 5'd12
`define luojiyouyi_rs 5'd13
`define clo_alu 5'd14
`define clz_alu 5'd15
`define movz_alu 5'd16
`define movn_alu 5'd17

//chengchuqi

`define kongxian_chengchuqi 4'd0
`define mult_chengchuqi 4'd1
`define multu_chengchuqi 4'd2
`define div_chengchuqi 4'd3
`define divu_chengchuqi 4'd4
`define mfhi_chengchuqi 4'd5
`define mflo_chengchuqi 4'd6
`define mthi_chengchuqi 4'd7
`define mtlo_chengchuqi 4'd8
`define madd_chengchuqi 4'd9
`define maddu_chengchuqi 4'd10
`define msub_chengchuqi 4'd11
`define msubu_chengchuqi 4'd12

//
`define zero_extend 2'd0
`define sign_extend 2'd1
`define diweibuling 2'd2

`define m1_rt 2'd0
`define m1_rd 2'd1
`define m1_31 2'd2

`define m2_alu_result 2'd0
`define m2_dmrd 2'd1
`define m2_pc8 2'd2

`define m3_grf_rd2 0
`define m3_extout 1

`define npc_pc4 2'd0
`define npc_beq 2'd1
`define npc_jal 2'd2
`define npc_jr 2'd3

module control(
    input [5:0] opcode,
    input [5:0] func,
	 input [4:0] rt,//bgez和bltz
	 
    input zero,
	 input xiaoyu_zero,//
	 input xiaoyudengyu_zero,//
	 input dayu_zero,//
	 input dayudengyu_zero,//
	 input budengyu,//
	 
	 output br_bgez,
	 output br_bgtz,
	 output br_blez,
	 output br_bltz,
	 output br_bne,
	 //条件link
	 output br_bgezal,//
	 output bgezal,//
	 output br_bltzal,//
	 output bltzal,//
	 output bgezalr,
	 output br_bgezalr,
	 output bltzalr,
	 output br_bltzalr,
	 
	 
	 
	 output hiloopd,//
	 output [3:0] chengfaqiopd,//
	 output hiloopd_shiyong,//
	 
    output jald,
    output jrd,
    output brd,
    output rfwrd,
    output [1:0] m2seld, 
    output dmwrd,
    output [1:0] m1seld,
    output [4:0] aluopd,//扩展ALU
    output m3seld,
    output [1:0] extopd,
	 output br_beq,
	 output swd,//new
	 output sbd,//new
	 output shd,//new
	 output [2:0] dmrdopd,//new
	 output rtuse,//
	 output readdmd
    );
	 
	 
	/* MIPS-C3={ LB、LBU、LH、LHU、LW、SB、SH、SW、ADD、ADDU、
				SUB、SUBU、MULT、MULTU、DIV、DIVU、SLL、SRL、SRA、SLLV、
				SRLV、SRAV、AND、OR、XOR、NOR、ADDI、ADDIU、ANDI、ORI、
				XORI、LUI、SLT、SLTI、SLTIU、SLTU、BEQ、BNE、BLEZ、BGTZ、
				BLTZ、BGEZ、J、JAL、JALR、JR、MFHI、MFLO、MTHI、MTLO } */
	 
	 wire addu,subu,ori,lw,sw,beq,lui,j,jr,jal,addi,jalr,
	 lb,lbu,lh,lhu,sb,sh,_and,_nor,_xor,_or,add,sub,addiu,andi,xori,
	 sll,sllv,slt,slti,sltiu,sltu,sra,srav,srl,srlv,bgez,bgtz,blez,bltz,bne;
	 
	 //mult|multu|div|divu|mfhi|mflo|mthi|mtlo 
	 wire mult,multu,div,divu,mfhi,mflo,mthi,mtlo;
	 
	 
	 wire clo,clz; //clo|clz
	 assign clo=(opcode==6'b011100)&&(func==6'b100001);
	 assign clz=(opcode==6'b011100)&&(func==6'b100000);
	 
	 wire movz,movn;
	 assign movz=(opcode==6'b000000)&&(func==6'b001010);
	 assign movn=(opcode==6'b000000)&&(func==6'b001011);
	 
	 wire madd,maddu,msub,msubu;
	 assign madd=(opcode==6'b011100)&&(func==6'b000000);
	 assign maddu=(opcode==6'b011100)&&(func==6'b000001);
	 assign msub=(opcode==6'b011100)&&(func==6'b000100);
	 assign msubu=(opcode==6'b011100)&&(func==6'b000101);
	 
	 //wire 条件跳转;
	 assign bgezal=(opcode==6'b000001)&&(rt==5'b10001);
	 assign bltzal=(opcode==6'b000001)&&(rt==5'b10000);                                                                                                                                                                                                                      
	 assign bgezalr=(opcode==6'b000000)&&(func==6'b111001);
	 assign bltzalr=(opcode==6'b000000)&&(func==6'b111000);
	 
	 
	 
	 
	 //乘除法指令
	 assign mult=(opcode==6'b000000)&&(func==6'b011000);
	 assign multu=(opcode==6'b000000)&&(func==6'b011001);
	 assign div=(opcode==6'b000000)&&(func==6'b011010);
	 assign divu=(opcode==6'b000000)&&(func==6'b011011);
	 assign mfhi=(opcode==6'b000000)&&(func==6'b010000);
	 assign mflo=(opcode==6'b000000)&&(func==6'b010010);
	 assign mthi=(opcode==6'b000000)&(func==6'b010001);
	 assign mtlo=(opcode==6'b000000)&(func==6'b010011);
	 
	 
	 
	 assign addu=(opcode==6'b000000) && (func==6'b100001);
	 assign subu=(opcode==6'b000000) && (func==6'b100011);
	 assign ori=(opcode==6'b001101);
	 assign lw=(opcode==6'b100011);
	 assign sw=(opcode==6'b101011);
	 assign beq=(opcode==6'b000100);
	 assign lui=(opcode==6'b001111);
	 assign j=(opcode==6'b000010);
	 assign jal=(opcode==6'b000011);
	 assign jr=(opcode==6'b000000)&&(func==6'b001000);
	 assign addi=(opcode==6'b001000);
	 assign jalr=(opcode==6'b000000)&&(func==6'b001001);
	 //p6
	 assign lb=(opcode==6'b100000);
	 assign lbu=(opcode==6'b100100);
	 assign lh=(opcode==6'b100001);
	 assign lhu=(opcode==6'b100101);
	 
	 assign sb=(opcode==6'b101000);
	 assign sh=(opcode==6'b101001);
	 
	 assign add=(opcode==6'b000000)&&(func==6'b100000);
	 assign sub=(opcode==6'b000000)&&(func==6'b100010);
	 assign _and=(opcode==6'b000000)&&(func==6'b100100);
	 assign _or=(opcode==6'b000000)&&(func==6'b100101);
	 assign _xor=(opcode==6'b000000)&&(func==6'b100110);
	 assign _nor=(opcode==6'b000000)&&(func==6'b100111);
	 assign addiu=(opcode==6'b001001);
	 assign andi=(opcode==6'b001100);
	 assign xori=(opcode==6'b001110);
	 assign sll=(opcode==6'b000000)&&(func==6'b000000);
	 assign sllv=(opcode==6'b000000)&&(func==6'b000100);
	 assign slt=(opcode==6'b000000)&&(func==6'b101010);
	 assign slti=(opcode==6'b001010);
	 assign sltiu=(opcode==6'b001011);
	 assign sltu=(opcode==6'b000000)&&(func==6'b101011);
	 assign sra=(opcode==6'b000000)&&(func==6'b000011);
	 assign srav=(opcode==6'b000000)&&(func==6'b000111);
	 assign srl=(opcode==6'b000000)&&(func==6'b000010);
	 assign srlv=(opcode==6'b000000)&&(func==6'b000110);
	 //控制信号
	 assign bgez=(opcode==6'b000001)&&(rt==5'b00001);
	 assign bgtz=(opcode==6'b000111);
	 assign blez=(opcode==6'b000110);
	 assign bltz=(opcode==6'b000001)&&(rt==5'b00000);
	 assign bne=(opcode==6'b000101);
	 
	 // |bgtz|blez|bltz|bne 
	 
	 assign aluopd=(addu|lw|sw|sh|sb|jal|jr|lui|j|addi|jalr|add|addiu|lb|lbu|lh|lhu)? `add_alu:
						(subu|beq|sub|bgez|bgtz|blez|bltz|bne|bgezal|bltzal|bgezalr|bltzalr)? `sub_alu:
						(ori|_or)? `or_alu :
						(_and|andi)? `and_alu:
						(_xor|xori)? `xor_alu:
						(_nor)? `nor_alu:
						(sll)?`zuoyi_shamt:
						(sllv)?`zuoyi_rs:
						(slt|slti)? `signed_xiaoyu:
						(sltiu|sltu)? `unsigned_xiaoyu:
						(sra)? `suanshuyouyi_shamt:
						(srav)? `suanshuyouyi_rs:
						(srl)? `luojiyouyi_shamt:
						(srlv)? `luojiyouyi_rs:
						(clo)? `clo_alu:
						(clz)? `clz_alu:
						(movz)? `movz_alu:
						(movn)? `movn_alu:
											  `add_alu;
	 assign extopd=(addu|subu|ori|beq|jal|jr|j|jalr|add|sub|_and|_or|_xor|_nor|sll|sllv|slt|sltu|sra|srav|srl|srlv|bgez||bgtz|blez|bltz|bne|andi|xori|clo|clz|bgezal|bltzal|bltzalr)? `zero_extend:
						(lw|sw|sb|addi|addiu|slti|sltiu|lb|lbu|lh|lhu|sh)? `sign_extend:
						(lui)? `diweibuling :
													`zero_extend;
	 assign rfwrd=(addu|subu|ori|lw|lbu|lhu|jal|lui|addi|jalr|add|sub|addiu|_and|_or|_xor|_nor|andi|xori|sll|sllv|slt|sltu|slti|sltiu|sra|srav|srl|srlv|lb|lh|mfhi|mflo|clo|clz|movz|movn|bgezal|bltzal|bgezalr|bltzalr) ? 1:
					  (sw|sb|beq|jr|j|sh| bgez|bgtz|blez|bltz|bne )? 0:
											0;
											
	 assign dmwrd=(sw|sb|sh)?1:
					  (addu|subu|ori|lh|lhu|lbu|lb|lw|beq|jal|jr|lui|j|addi|jalr|add|sub|addiu|_and|_or|_xor|_nor|andi|xori|sll|sllv|slt|sltu|slti|sltiu|sra|srav|srl|srlv|bgez|bgtz|blez|bltz|bne )? 0:
																	  0;
	 assign m1seld=(ori|lw|sw|sb|beq|jr|lui|j|addi|addiu|andi|xori|slti|sltiu|lb|lbu|lh|lhu|sh| bgez|bgtz|blez|bltz|bne)? `m1_rt:
						(addu|subu|jalr|sub|_and|_or|_xor|_nor|sll|sllv|slt|sltu|sra|srav|srl|srlv|mfhi|mflo|add|clo|clz|movz|movn|bgezalr|bltzalr) ? `m1_rd:
						(jal|bgezal|bltzal)? `m1_31:
											`m1_rt;
	 assign m2seld=(addu|subu|ori|sw|sh|sb|beq| bgez|jr|lui|j|addi|add|sub|addiu|_and|_or|_xor|_nor|andi|xori|sll|sllv|slt|sltu|slti|sltiu|sra|srav|srl|srlv|bgtz|blez|bltz|bne|clo|clz|movz|movn ) ? `m2_alu_result:
						(lw|lb|lbu|lh|lhu)? `m2_dmrd :
						(jal|jalr|bgezal|bltzal|bgezalr|bltzalr)? `m2_pc8:
						              `m2_alu_result;
	assign m3seld=(addu|subu|beq|jal|jr|j|jalr|add|sub|_and|_or|_xor|_nor|sll|sllv|slt|sltu|sra|srav|srl|srlv|bgez|bgtz|blez|bltz|bne|clo|clz )? `m3_grf_rd2:
					  (ori|lw|sw|sb|sh|lui|addi|addiu|andi|xori|slti|sltiu|lb|lbu|lh|lhu)? `m3_extout:
													`m3_grf_rd2;
													
	assign readdmd=(lw|lb|lbu|lh|lhu)? 1:
						(bgez|addu|subu|beq|sw|sb|sh|jal|jr|j|ori|lw|lui|addi|jalr|add|sub|addiu|_and|_or|_xor|_nor|andi|xori|sll|sllv|slt|sltu|sltiu|sra|srav|srl|srlv|bgtz|blez|bltz|bne )? 0:
	
																		0;
																		
																		
	assign rtuse=(add|addu|_and|_nor|_or|sll|sllv|slt|sltu|sra|srav|srl|srlv|sub|subu|_xor|mult|multu|div|divu|movz|movn|madd|maddu|msub|msubu)? 1 : 0 ;
	
	assign swd=(sw)?1:0;
	assign sbd=(sb)?1:0;				
	assign shd=(sh)?1:0;	
		
	assign dmrdopd=(lw)? 3'd0:
						(lb)? 3'd2:
						(lbu)? 3'd1:
						(lh) ? 3'd4:
						(lhu) ? 3'd3:
						             3'd0;
										 
	assign hiloopd = (mfhi)? 1 : 0;	
	assign hiloopd_shiyong=(mfhi|mflo)? 1:0;
	
	
	
	assign chengfaqiopd	= (mult)? `mult_chengchuqi :
								  (multu)? `multu_chengchuqi :
								  (div)? `div_chengchuqi :
								  (divu)? `divu_chengchuqi :
								  (mfhi)? `mfhi_chengchuqi :
								  (mflo)? `mflo_chengchuqi :
								  (mthi)? `mthi_chengchuqi :
								  (mtlo)? `mtlo_chengchuqi : 
								  (madd)? `madd_chengchuqi :
								  (maddu)? `maddu_chengchuqi :
								  (msub)? `msub_chengchuqi :
								  (msubu)? `msubu_chengchuqi :
																	 `kongxian_chengchuqi;
	 
	assign brd=(beq|bgez|bgtz|blez|bltz|bne|bgezal|bltzal|bgezalr|bltzalr)?1:0;//主要责任是控制冒险！！
	assign jald=(jal|j|jalr|bgezal|bgezalr|bltzalr|bltzal)?1:0;
	assign jrd=(jr|jalr|bgezalr|bltzalr)?1:0;
	
	assign br_beq=beq&zero;//是否跳转的决定信号
	assign br_bgez=bgez&dayudengyu_zero;
	assign br_bgtz=bgtz&dayu_zero;
	assign br_blez=blez&xiaoyudengyu_zero;
	assign br_bltz=bltz&xiaoyu_zero;
	assign br_bne=bne&budengyu;
	assign br_bgezal=bgezal&dayudengyu_zero;
	assign br_bltzal=bltzal&xiaoyu_zero;
	assign br_bgezalr=bgezalr&dayudengyu_zero;
	assign br_bltzalr=bltzalr&xiaoyu_zero;
endmodule
