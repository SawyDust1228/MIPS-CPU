/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/jizu/p6/cpup6/chengchuqi.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static int ng8[] = {5, 0};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {4U, 0U};
static int ng11[] = {10, 0};
static unsigned int ng12[] = {7U, 0U};
static unsigned int ng13[] = {8U, 0U};



static void Initial_51_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(51, ng0);

LAB2:    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(54, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 4, 0LL);
    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 4, 0LL);
    xsi_set_current_line(58, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(59, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(60, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_63_1(char *t0)
{
    char t6[8];
    char t24[8];
    char t40[8];
    char t70[8];
    char t86[8];
    char t116[8];
    char t132[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 5920);
    *((int *)t2) = 1;
    t3 = (t0 + 4888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t0 + 1368U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng3)));
    memset(t24, 0, 8);
    t25 = (t23 + 4);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t23);
    t28 = *((unsigned int *)t22);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB13;

LAB10:    if (t36 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t24) = 1;

LAB13:    t41 = *((unsigned int *)t6);
    t42 = *((unsigned int *)t24);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = (t6 + 4);
    t45 = (t24 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB14;

LAB15:
LAB16:    t68 = (t0 + 1368U);
    t69 = *((char **)t68);
    t68 = ((char*)((ng4)));
    memset(t70, 0, 8);
    t71 = (t69 + 4);
    t72 = (t68 + 4);
    t73 = *((unsigned int *)t69);
    t74 = *((unsigned int *)t68);
    t75 = (t73 ^ t74);
    t76 = *((unsigned int *)t71);
    t77 = *((unsigned int *)t72);
    t78 = (t76 ^ t77);
    t79 = (t75 | t78);
    t80 = *((unsigned int *)t71);
    t81 = *((unsigned int *)t72);
    t82 = (t80 | t81);
    t83 = (~(t82));
    t84 = (t79 & t83);
    if (t84 != 0)
        goto LAB20;

LAB17:    if (t82 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t70) = 1;

LAB20:    t87 = *((unsigned int *)t40);
    t88 = *((unsigned int *)t70);
    t89 = (t87 | t88);
    *((unsigned int *)t86) = t89;
    t90 = (t40 + 4);
    t91 = (t70 + 4);
    t92 = (t86 + 4);
    t93 = *((unsigned int *)t90);
    t94 = *((unsigned int *)t91);
    t95 = (t93 | t94);
    *((unsigned int *)t92) = t95;
    t96 = *((unsigned int *)t92);
    t97 = (t96 != 0);
    if (t97 == 1)
        goto LAB21;

LAB22:
LAB23:    t114 = (t0 + 1368U);
    t115 = *((char **)t114);
    t114 = ((char*)((ng5)));
    memset(t116, 0, 8);
    t117 = (t115 + 4);
    t118 = (t114 + 4);
    t119 = *((unsigned int *)t115);
    t120 = *((unsigned int *)t114);
    t121 = (t119 ^ t120);
    t122 = *((unsigned int *)t117);
    t123 = *((unsigned int *)t118);
    t124 = (t122 ^ t123);
    t125 = (t121 | t124);
    t126 = *((unsigned int *)t117);
    t127 = *((unsigned int *)t118);
    t128 = (t126 | t127);
    t129 = (~(t128));
    t130 = (t125 & t129);
    if (t130 != 0)
        goto LAB27;

LAB24:    if (t128 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t116) = 1;

LAB27:    t133 = *((unsigned int *)t86);
    t134 = *((unsigned int *)t116);
    t135 = (t133 | t134);
    *((unsigned int *)t132) = t135;
    t136 = (t86 + 4);
    t137 = (t116 + 4);
    t138 = (t132 + 4);
    t139 = *((unsigned int *)t136);
    t140 = *((unsigned int *)t137);
    t141 = (t139 | t140);
    *((unsigned int *)t138) = t141;
    t142 = *((unsigned int *)t138);
    t143 = (t142 != 0);
    if (t143 == 1)
        goto LAB28;

LAB29:
LAB30:    t160 = (t0 + 2408);
    xsi_vlogvar_assign_value(t160, t132, 0, 0, 1);
    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB12:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB13;

LAB14:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t6 + 4);
    t55 = (t24 + 4);
    t56 = *((unsigned int *)t54);
    t57 = (~(t56));
    t58 = *((unsigned int *)t6);
    t59 = (t58 & t57);
    t60 = *((unsigned int *)t55);
    t61 = (~(t60));
    t62 = *((unsigned int *)t24);
    t63 = (t62 & t61);
    t64 = (~(t59));
    t65 = (~(t63));
    t66 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t66 & t64);
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    goto LAB16;

LAB19:    t85 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB20;

LAB21:    t98 = *((unsigned int *)t86);
    t99 = *((unsigned int *)t92);
    *((unsigned int *)t86) = (t98 | t99);
    t100 = (t40 + 4);
    t101 = (t70 + 4);
    t102 = *((unsigned int *)t100);
    t103 = (~(t102));
    t104 = *((unsigned int *)t40);
    t105 = (t104 & t103);
    t106 = *((unsigned int *)t101);
    t107 = (~(t106));
    t108 = *((unsigned int *)t70);
    t109 = (t108 & t107);
    t110 = (~(t105));
    t111 = (~(t109));
    t112 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t112 & t110);
    t113 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t113 & t111);
    goto LAB23;

LAB26:    t131 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB27;

LAB28:    t144 = *((unsigned int *)t132);
    t145 = *((unsigned int *)t138);
    *((unsigned int *)t132) = (t144 | t145);
    t146 = (t86 + 4);
    t147 = (t116 + 4);
    t148 = *((unsigned int *)t146);
    t149 = (~(t148));
    t150 = *((unsigned int *)t86);
    t151 = (t150 & t149);
    t152 = *((unsigned int *)t147);
    t153 = (~(t152));
    t154 = *((unsigned int *)t116);
    t155 = (t154 & t153);
    t156 = (~(t151));
    t157 = (~(t155));
    t158 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t158 & t156);
    t159 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t159 & t157);
    goto LAB30;

}

static void Cont_67_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6048);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5936);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_68_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6112);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5952);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_71_4(char *t0)
{
    char t13[8];
    char t39[8];
    char t86[8];
    char t87[8];
    char t88[8];
    char t112[8];
    char t136[16];
    char t137[16];
    char t138[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;

LAB0:    t1 = (t0 + 5600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 5968);
    *((int *)t2) = 1;
    t3 = (t0 + 5632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);

LAB5:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(83, ng0);

LAB10:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t12);
    t8 = (t6 | t7);
    *((unsigned int *)t13) = t8;
    t14 = (t4 + 4);
    t15 = (t12 + 4);
    t16 = (t13 + 4);
    t9 = *((unsigned int *)t14);
    t10 = *((unsigned int *)t15);
    t17 = (t9 | t10);
    *((unsigned int *)t16) = t17;
    t18 = *((unsigned int *)t16);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB11;

LAB12:
LAB13:    t36 = (t0 + 3688);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t40 = *((unsigned int *)t13);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = (t13 + 4);
    t44 = (t38 + 4);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB14;

LAB15:
LAB16:    t67 = (t39 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t39);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(140, ng0);

LAB121:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t24 = (~(t21));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB125;

LAB122:    if (t21 != 0)
        goto LAB124;

LAB123:    *((unsigned int *)t13) = 1;

LAB125:    t12 = (t13 + 4);
    t26 = *((unsigned int *)t12);
    t28 = (~(t26));
    t29 = *((unsigned int *)t13);
    t30 = (t29 & t28);
    t32 = (t30 != 0);
    if (t32 > 0)
        goto LAB126;

LAB127:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t24 = (~(t21));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB133;

LAB130:    if (t21 != 0)
        goto LAB132;

LAB131:    *((unsigned int *)t13) = 1;

LAB133:    t12 = (t13 + 4);
    t26 = *((unsigned int *)t12);
    t28 = (~(t26));
    t29 = *((unsigned int *)t13);
    t30 = (t29 & t28);
    t32 = (t30 != 0);
    if (t32 > 0)
        goto LAB134;

LAB135:
LAB136:
LAB128:
LAB19:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(72, ng0);

LAB9:    xsi_set_current_line(73, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t16);
    *((unsigned int *)t13) = (t20 | t21);
    t22 = (t4 + 4);
    t23 = (t12 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = *((unsigned int *)t23);
    t29 = (~(t28));
    t30 = *((unsigned int *)t12);
    t31 = (t30 & t29);
    t32 = (~(t27));
    t33 = (~(t31));
    t34 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t34 & t32);
    t35 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t35 & t33);
    goto LAB13;

LAB14:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t51 | t52);
    t53 = (t13 + 4);
    t54 = (t38 + 4);
    t55 = *((unsigned int *)t53);
    t56 = (~(t55));
    t57 = *((unsigned int *)t13);
    t58 = (t57 & t56);
    t59 = *((unsigned int *)t54);
    t60 = (~(t59));
    t61 = *((unsigned int *)t38);
    t62 = (t61 & t60);
    t63 = (~(t58));
    t64 = (~(t62));
    t65 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t65 & t63);
    t66 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t66 & t64);
    goto LAB16;

LAB17:    xsi_set_current_line(84, ng0);

LAB20:    xsi_set_current_line(85, ng0);
    t73 = (t0 + 2408);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    t76 = (t75 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB29;

LAB30:
LAB31:
LAB27:
LAB23:    goto LAB19;

LAB21:    xsi_set_current_line(85, ng0);

LAB24:    xsi_set_current_line(86, ng0);
    t82 = (t0 + 2408);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    t85 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t85, t84, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB23;

LAB25:    xsi_set_current_line(92, ng0);

LAB28:    xsi_set_current_line(93, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB27;

LAB29:    xsi_set_current_line(97, ng0);

LAB32:    xsi_set_current_line(98, ng0);
    t11 = (t0 + 2888);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t16 = (t14 + 4);
    t22 = (t15 + 4);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t15);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t22);
    t24 = (t20 ^ t21);
    t25 = (t19 | t24);
    t26 = *((unsigned int *)t16);
    t28 = *((unsigned int *)t22);
    t29 = (t26 | t28);
    t30 = (~(t29));
    t32 = (t25 & t30);
    if (t32 != 0)
        goto LAB36;

LAB33:    if (t29 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t13) = 1;

LAB36:    memset(t39, 0, 8);
    t36 = (t13 + 4);
    t33 = *((unsigned int *)t36);
    t34 = (~(t33));
    t35 = *((unsigned int *)t13);
    t40 = (t35 & t34);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t36) != 0)
        goto LAB39;

LAB40:    t38 = (t39 + 4);
    t42 = *((unsigned int *)t39);
    t46 = (!(t42));
    t47 = *((unsigned int *)t38);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB41;

LAB42:    memcpy(t88, t39, 8);

LAB43:    t102 = (t88 + 4);
    t103 = *((unsigned int *)t102);
    t104 = (~(t103));
    t105 = *((unsigned int *)t88);
    t106 = (t105 & t104);
    t107 = (t106 != 0);
    if (t107 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t24 = (~(t21));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB80;

LAB77:    if (t21 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t13) = 1;

LAB80:    memset(t39, 0, 8);
    t15 = (t13 + 4);
    t26 = *((unsigned int *)t15);
    t28 = (~(t26));
    t29 = *((unsigned int *)t13);
    t30 = (t29 & t28);
    t32 = (t30 & 1U);
    if (t32 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t15) != 0)
        goto LAB83;

LAB84:    t22 = (t39 + 4);
    t33 = *((unsigned int *)t39);
    t34 = (!(t33));
    t35 = *((unsigned int *)t22);
    t40 = (t34 || t35);
    if (t40 > 0)
        goto LAB85;

LAB86:    memcpy(t88, t39, 8);

LAB87:    t82 = (t88 + 4);
    t97 = *((unsigned int *)t82);
    t98 = (~(t97));
    t99 = *((unsigned int *)t88);
    t100 = (t99 & t98);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB99;

LAB100:
LAB101:
LAB57:    goto LAB31;

LAB35:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t39) = 1;
    goto LAB40;

LAB39:    t37 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB40;

LAB41:    t43 = (t0 + 2888);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t53 = ((char*)((ng7)));
    memset(t86, 0, 8);
    t54 = (t45 + 4);
    t67 = (t53 + 4);
    t49 = *((unsigned int *)t45);
    t50 = *((unsigned int *)t53);
    t51 = (t49 ^ t50);
    t52 = *((unsigned int *)t54);
    t55 = *((unsigned int *)t67);
    t56 = (t52 ^ t55);
    t57 = (t51 | t56);
    t59 = *((unsigned int *)t54);
    t60 = *((unsigned int *)t67);
    t61 = (t59 | t60);
    t63 = (~(t61));
    t64 = (t57 & t63);
    if (t64 != 0)
        goto LAB47;

LAB44:    if (t61 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t86) = 1;

LAB47:    memset(t87, 0, 8);
    t74 = (t86 + 4);
    t65 = *((unsigned int *)t74);
    t66 = (~(t65));
    t68 = *((unsigned int *)t86);
    t69 = (t68 & t66);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t74) != 0)
        goto LAB50;

LAB51:    t71 = *((unsigned int *)t39);
    t72 = *((unsigned int *)t87);
    t77 = (t71 | t72);
    *((unsigned int *)t88) = t77;
    t76 = (t39 + 4);
    t82 = (t87 + 4);
    t83 = (t88 + 4);
    t78 = *((unsigned int *)t76);
    t79 = *((unsigned int *)t82);
    t80 = (t78 | t79);
    *((unsigned int *)t83) = t80;
    t81 = *((unsigned int *)t83);
    t89 = (t81 != 0);
    if (t89 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB43;

LAB46:    t73 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t87) = 1;
    goto LAB51;

LAB50:    t75 = (t87 + 4);
    *((unsigned int *)t87) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB51;

LAB52:    t90 = *((unsigned int *)t88);
    t91 = *((unsigned int *)t83);
    *((unsigned int *)t88) = (t90 | t91);
    t84 = (t39 + 4);
    t85 = (t87 + 4);
    t92 = *((unsigned int *)t84);
    t93 = (~(t92));
    t94 = *((unsigned int *)t39);
    t27 = (t94 & t93);
    t95 = *((unsigned int *)t85);
    t96 = (~(t95));
    t97 = *((unsigned int *)t87);
    t31 = (t97 & t96);
    t98 = (~(t27));
    t99 = (~(t31));
    t100 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t100 & t98);
    t101 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t101 & t99);
    goto LAB54;

LAB55:    xsi_set_current_line(98, ng0);

LAB58:    xsi_set_current_line(99, ng0);
    t108 = (t0 + 2728);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    t111 = ((char*)((ng8)));
    memset(t112, 0, 8);
    t113 = (t110 + 4);
    t114 = (t111 + 4);
    t115 = *((unsigned int *)t110);
    t116 = *((unsigned int *)t111);
    t117 = (t115 ^ t116);
    t118 = *((unsigned int *)t113);
    t119 = *((unsigned int *)t114);
    t120 = (t118 ^ t119);
    t121 = (t117 | t120);
    t122 = *((unsigned int *)t113);
    t123 = *((unsigned int *)t114);
    t124 = (t122 | t123);
    t125 = (~(t124));
    t126 = (t121 & t125);
    if (t126 != 0)
        goto LAB62;

LAB59:    if (t124 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t112) = 1;

LAB62:    t128 = (t112 + 4);
    t129 = *((unsigned int *)t128);
    t130 = (~(t129));
    t131 = *((unsigned int *)t112);
    t132 = (t131 & t130);
    t133 = (t132 != 0);
    if (t133 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(113, ng0);

LAB76:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 4, t5, 32);
    t11 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);

LAB65:    goto LAB57;

LAB61:    t127 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(99, ng0);

LAB66:    xsi_set_current_line(100, ng0);
    t134 = ((char*)((ng1)));
    t135 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t135, t134, 0, 0, 4, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t24 = (~(t21));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB70;

LAB67:    if (t21 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t13) = 1;

LAB70:    t15 = (t13 + 4);
    t26 = *((unsigned int *)t15);
    t28 = (~(t26));
    t29 = *((unsigned int *)t13);
    t30 = (t29 & t28);
    t32 = (t30 != 0);
    if (t32 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(109, ng0);

LAB75:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_unsigned_multiply(t136, 64, t4, 32, t12, 32);
    t14 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t14, t136, 0, 0, 32, 0LL);
    t15 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t15, t136, 32, 0, 32, 0LL);

LAB73:    goto LAB65;

LAB69:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB70;

LAB71:    xsi_set_current_line(106, ng0);

LAB74:    xsi_set_current_line(107, ng0);
    t16 = (t0 + 3048);
    t22 = (t16 + 56U);
    t23 = *((char **)t22);
    xsi_vlogtype_sign_extend(t136, 64, t23, 32);
    t36 = (t0 + 3208);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlogtype_sign_extend(t137, 64, t38, 32);
    xsi_vlog_signed_multiply(t138, 64, t136, 64, t137, 64);
    t43 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t43, t138, 0, 0, 32, 0LL);
    t44 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t44, t138, 32, 0, 32, 0LL);
    goto LAB73;

LAB79:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB80;

LAB81:    *((unsigned int *)t39) = 1;
    goto LAB84;

LAB83:    t16 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB84;

LAB85:    t23 = (t0 + 2888);
    t36 = (t23 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng10)));
    memset(t86, 0, 8);
    t43 = (t37 + 4);
    t44 = (t38 + 4);
    t41 = *((unsigned int *)t37);
    t42 = *((unsigned int *)t38);
    t46 = (t41 ^ t42);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t44);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t44);
    t55 = (t51 | t52);
    t56 = (~(t55));
    t57 = (t50 & t56);
    if (t57 != 0)
        goto LAB91;

LAB88:    if (t55 != 0)
        goto LAB90;

LAB89:    *((unsigned int *)t86) = 1;

LAB91:    memset(t87, 0, 8);
    t53 = (t86 + 4);
    t59 = *((unsigned int *)t53);
    t60 = (~(t59));
    t61 = *((unsigned int *)t86);
    t63 = (t61 & t60);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t53) != 0)
        goto LAB94;

LAB95:    t65 = *((unsigned int *)t39);
    t66 = *((unsigned int *)t87);
    t68 = (t65 | t66);
    *((unsigned int *)t88) = t68;
    t67 = (t39 + 4);
    t73 = (t87 + 4);
    t74 = (t88 + 4);
    t69 = *((unsigned int *)t67);
    t70 = *((unsigned int *)t73);
    t71 = (t69 | t70);
    *((unsigned int *)t74) = t71;
    t72 = *((unsigned int *)t74);
    t77 = (t72 != 0);
    if (t77 == 1)
        goto LAB96;

LAB97:
LAB98:    goto LAB87;

LAB90:    t45 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB91;

LAB92:    *((unsigned int *)t87) = 1;
    goto LAB95;

LAB94:    t54 = (t87 + 4);
    *((unsigned int *)t87) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB95;

LAB96:    t78 = *((unsigned int *)t88);
    t79 = *((unsigned int *)t74);
    *((unsigned int *)t88) = (t78 | t79);
    t75 = (t39 + 4);
    t76 = (t87 + 4);
    t80 = *((unsigned int *)t75);
    t81 = (~(t80));
    t89 = *((unsigned int *)t39);
    t27 = (t89 & t81);
    t90 = *((unsigned int *)t76);
    t91 = (~(t90));
    t92 = *((unsigned int *)t87);
    t31 = (t92 & t91);
    t93 = (~(t27));
    t94 = (~(t31));
    t95 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t95 & t93);
    t96 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t96 & t94);
    goto LAB98;

LAB99:    xsi_set_current_line(117, ng0);

LAB102:    xsi_set_current_line(118, ng0);
    t83 = (t0 + 2728);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t102 = ((char*)((ng11)));
    memset(t112, 0, 8);
    t108 = (t85 + 4);
    t109 = (t102 + 4);
    t103 = *((unsigned int *)t85);
    t104 = *((unsigned int *)t102);
    t105 = (t103 ^ t104);
    t106 = *((unsigned int *)t108);
    t107 = *((unsigned int *)t109);
    t115 = (t106 ^ t107);
    t116 = (t105 | t115);
    t117 = *((unsigned int *)t108);
    t118 = *((unsigned int *)t109);
    t119 = (t117 | t118);
    t120 = (~(t119));
    t121 = (t116 & t120);
    if (t121 != 0)
        goto LAB106;

LAB103:    if (t119 != 0)
        goto LAB105;

LAB104:    *((unsigned int *)t112) = 1;

LAB106:    t111 = (t112 + 4);
    t122 = *((unsigned int *)t111);
    t123 = (~(t122));
    t124 = *((unsigned int *)t112);
    t125 = (t124 & t123);
    t126 = (t125 != 0);
    if (t126 > 0)
        goto LAB107;

LAB108:    xsi_set_current_line(134, ng0);

LAB120:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 4, t5, 32);
    t11 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);

LAB109:    goto LAB101;

LAB105:    t110 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB106;

LAB107:    xsi_set_current_line(118, ng0);

LAB110:    xsi_set_current_line(119, ng0);
    t113 = ((char*)((ng1)));
    t114 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t114, t113, 0, 0, 4, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t24 = (~(t21));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB114;

LAB111:    if (t21 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t13) = 1;

LAB114:    t15 = (t13 + 4);
    t26 = *((unsigned int *)t15);
    t28 = (~(t26));
    t29 = *((unsigned int *)t13);
    t30 = (t29 & t28);
    t32 = (t30 != 0);
    if (t32 > 0)
        goto LAB115;

LAB116:    xsi_set_current_line(129, ng0);

LAB119:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_mod(t13, 32, t4, 32, t12, 32);
    t14 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t4, 32, t12, 32);
    t14 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 32, 0LL);

LAB117:    goto LAB109;

LAB113:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB114;

LAB115:    xsi_set_current_line(125, ng0);

LAB118:    xsi_set_current_line(126, ng0);
    t16 = (t0 + 3048);
    t22 = (t16 + 56U);
    t23 = *((char **)t22);
    t36 = (t0 + 3208);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t87, 0, 8);
    xsi_vlog_signed_mod(t87, 32, t23, 32, t38, 32);
    t43 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t43, t87, 0, 0, 32, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t86, 0, 8);
    xsi_vlog_signed_divide(t86, 32, t4, 32, t12, 32);
    t14 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t14, t86, 0, 0, 32, 0LL);
    goto LAB117;

LAB124:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB125;

LAB126:    xsi_set_current_line(141, ng0);

LAB129:    xsi_set_current_line(142, ng0);
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    t14 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, 0, 32, 0LL);
    goto LAB128;

LAB132:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB133;

LAB134:    xsi_set_current_line(144, ng0);

LAB137:    xsi_set_current_line(145, ng0);
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    t14 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, 0, 32, 0LL);
    goto LAB136;

}


extern void work_m_00000000002980459165_3964289794_init()
{
	static char *pe[] = {(void *)Initial_51_0,(void *)Always_63_1,(void *)Cont_67_2,(void *)Cont_68_3,(void *)Always_71_4};
	xsi_register_didat("work_m_00000000002980459165_3964289794", "isim/chengchuqi_tb_isim_beh.exe.sim/work/m_00000000002980459165_3964289794.didat");
	xsi_register_executes(pe);
}
