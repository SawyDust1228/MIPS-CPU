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
static const char *ng0 = "D:/jizu/p6/cpup6/ALU.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {10U, 0U};
static unsigned int ng14[] = {11U, 0U};
static unsigned int ng15[] = {12U, 0U};
static unsigned int ng16[] = {13U, 0U};
static unsigned int ng17[] = {14U, 0U};
static int ng18[] = {32, 0};
static int ng19[] = {31, 0};
static unsigned int ng20[] = {15U, 0U};
static unsigned int ng21[] = {32U, 0U};
static unsigned int ng22[] = {16U, 0U};
static unsigned int ng23[] = {17U, 0U};



static void Initial_55_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(55, ng0);

LAB2:    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_62_1(char *t0)
{
    char t10[8];
    char t40[8];
    char t47[8];
    char t48[8];
    char t49[8];
    char t77[8];
    char t82[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 4216);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);

LAB5:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB41;

LAB42:
LAB44:
LAB43:    xsi_set_current_line(141, ng0);

LAB159:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t3, 32, t4, 32);
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 32);

LAB45:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB163;

LAB160:    if (t20 != 0)
        goto LAB162;

LAB161:    *((unsigned int *)t10) = 1;

LAB163:    t9 = (t10 + 4);
    t25 = *((unsigned int *)t9);
    t27 = (~(t25));
    t28 = *((unsigned int *)t10);
    t29 = (t28 & t27);
    t31 = (t29 != 0);
    if (t31 > 0)
        goto LAB164;

LAB165:    xsi_set_current_line(150, ng0);

LAB168:    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB166:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB170;

LAB169:    if (t20 != 0)
        goto LAB171;

LAB172:    t9 = (t10 + 4);
    t25 = *((unsigned int *)t9);
    t27 = (~(t25));
    t28 = *((unsigned int *)t10);
    t29 = (t28 & t27);
    t31 = (t29 != 0);
    if (t31 > 0)
        goto LAB173;

LAB174:    xsi_set_current_line(158, ng0);

LAB177:    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB175:    goto LAB2;

LAB7:    xsi_set_current_line(64, ng0);

LAB46:    xsi_set_current_line(65, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB45;

LAB9:    xsi_set_current_line(67, ng0);

LAB47:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB45;

LAB11:    xsi_set_current_line(70, ng0);

LAB48:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB49;

LAB50:
LAB51:    t35 = (t0 + 1928);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 32);
    goto LAB45;

LAB13:    xsi_set_current_line(73, ng0);

LAB52:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB53;

LAB54:
LAB55:    t35 = (t0 + 1928);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 32);
    goto LAB45;

LAB15:    xsi_set_current_line(76, ng0);

LAB56:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB57;

LAB58:
LAB59:    t21 = (t0 + 1928);
    xsi_vlogvar_assign_value(t21, t10, 0, 0, 32);
    goto LAB45;

LAB17:    xsi_set_current_line(79, ng0);

LAB60:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t40) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t40 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB61;

LAB62:
LAB63:    memset(t10, 0, 8);
    t35 = (t10 + 4);
    t41 = (t40 + 4);
    t36 = *((unsigned int *)t40);
    t37 = (~(t36));
    *((unsigned int *)t10) = t37;
    *((unsigned int *)t35) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB65;

LAB64:    t44 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t44 & 4294967295U);
    t45 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t45 & 4294967295U);
    t46 = (t0 + 1928);
    xsi_vlogvar_assign_value(t46, t10, 0, 0, 32);
    goto LAB45;

LAB19:    xsi_set_current_line(82, ng0);

LAB66:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1528U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t4, 32, t7, 5);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB45;

LAB21:    xsi_set_current_line(85, ng0);

LAB67:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_lshift(t40, 32, t4, 32, t10, 5);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t40, 0, 0, 32);
    goto LAB45;

LAB23:    xsi_set_current_line(88, ng0);

LAB68:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t49, 0, 8);
    xsi_vlog_signed_less(t49, 32, t4, 32, t7, 32);
    memset(t40, 0, 8);
    t3 = (t49 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t49);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t3) != 0)
        goto LAB71;

LAB72:    t9 = (t40 + 4);
    t16 = *((unsigned int *)t40);
    t17 = *((unsigned int *)t9);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB73;

LAB74:    t19 = *((unsigned int *)t40);
    t20 = (~(t19));
    t23 = *((unsigned int *)t9);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t9) > 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t40) > 0)
        goto LAB79;

LAB80:    memcpy(t10, t22, 8);

LAB81:    t35 = (t0 + 1928);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 32);
    goto LAB45;

LAB25:    xsi_set_current_line(91, ng0);

LAB82:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t47, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB84;

LAB83:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB84;

LAB87:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB85;

LAB86:    memset(t40, 0, 8);
    t21 = (t47 + 4);
    t11 = *((unsigned int *)t21);
    t12 = (~(t11));
    t13 = *((unsigned int *)t47);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t21) != 0)
        goto LAB90;

LAB91:    t35 = (t40 + 4);
    t16 = *((unsigned int *)t40);
    t17 = *((unsigned int *)t35);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB92;

LAB93:    t19 = *((unsigned int *)t40);
    t20 = (~(t19));
    t23 = *((unsigned int *)t35);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t35) > 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t40) > 0)
        goto LAB98;

LAB99:    memcpy(t10, t46, 8);

LAB100:    t50 = (t0 + 1928);
    xsi_vlogvar_assign_value(t50, t10, 0, 0, 32);
    goto LAB45;

LAB27:    xsi_set_current_line(94, ng0);

LAB101:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1528U);
    t7 = *((char **)t3);
    memset(t40, 0, 8);
    xsi_vlog_signed_arith_rshift(t40, 32, t4, 32, t7, 5);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t40, 0, 0, 32);
    goto LAB45;

LAB29:    xsi_set_current_line(97, ng0);

LAB102:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t40, 0, 8);
    t3 = (t40 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t40) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t47, 0, 8);
    xsi_vlog_signed_arith_rshift(t47, 32, t4, 32, t40, 5);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t47, 0, 0, 32);
    goto LAB45;

LAB31:    xsi_set_current_line(100, ng0);

LAB103:    xsi_set_current_line(101, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1528U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 32, t4, 32, t7, 5);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB45;

LAB33:    xsi_set_current_line(103, ng0);

LAB104:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_rshift(t40, 32, t4, 32, t10, 5);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t40, 0, 0, 32);
    goto LAB45;

LAB35:    xsi_set_current_line(107, ng0);

LAB105:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB106:    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    xsi_vlog_signed_greatereq(t10, 32, t4, 32, t7, 32);
    t8 = (t10 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB107;

LAB108:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB45;

LAB37:    xsi_set_current_line(121, ng0);

LAB126:    xsi_set_current_line(122, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB127:    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    xsi_vlog_signed_greatereq(t10, 32, t4, 32, t7, 32);
    t8 = (t10 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB128;

LAB129:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB45;

LAB39:    xsi_set_current_line(133, ng0);

LAB157:    xsi_set_current_line(134, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB45;

LAB41:    xsi_set_current_line(137, ng0);

LAB158:    xsi_set_current_line(138, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB45;

LAB49:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = (~(t26));
    t32 = (~(t30));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t31);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t32);
    goto LAB51;

LAB53:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t27 = (~(t25));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t31 = *((unsigned int *)t22);
    t32 = (~(t31));
    t26 = (t24 & t27);
    t30 = (t29 & t32);
    t33 = (~(t26));
    t34 = (~(t30));
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t33);
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t34);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t33);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t34);
    goto LAB55;

LAB57:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    goto LAB59;

LAB61:    t19 = *((unsigned int *)t40);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t40) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = (~(t26));
    t32 = (~(t30));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t31);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t32);
    goto LAB63;

LAB65:    t38 = *((unsigned int *)t10);
    t39 = *((unsigned int *)t41);
    *((unsigned int *)t10) = (t38 | t39);
    t42 = *((unsigned int *)t35);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t42 | t43);
    goto LAB64;

LAB69:    *((unsigned int *)t40) = 1;
    goto LAB72;

LAB71:    t8 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB72;

LAB73:    t21 = ((char*)((ng4)));
    goto LAB74;

LAB75:    t22 = ((char*)((ng3)));
    goto LAB76;

LAB77:    xsi_vlog_unsigned_bit_combine(t10, 32, t21, 32, t22, 32);
    goto LAB81;

LAB79:    memcpy(t10, t21, 8);
    goto LAB81;

LAB84:    t9 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB86;

LAB85:    *((unsigned int *)t47) = 1;
    goto LAB86;

LAB88:    *((unsigned int *)t40) = 1;
    goto LAB91;

LAB90:    t22 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB91;

LAB92:    t41 = ((char*)((ng4)));
    goto LAB93;

LAB94:    t46 = ((char*)((ng3)));
    goto LAB95;

LAB96:    xsi_vlog_unsigned_bit_combine(t10, 32, t41, 32, t46, 32);
    goto LAB100;

LAB98:    memcpy(t10, t41, 8);
    goto LAB100;

LAB107:    xsi_set_current_line(110, ng0);

LAB109:    xsi_set_current_line(111, ng0);
    t9 = (t0 + 2568);
    t21 = (t9 + 56U);
    t22 = *((char **)t21);
    t35 = ((char*)((ng2)));
    memset(t40, 0, 8);
    t41 = (t22 + 4);
    t46 = (t35 + 4);
    t16 = *((unsigned int *)t22);
    t17 = *((unsigned int *)t35);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t41);
    t20 = *((unsigned int *)t46);
    t23 = (t19 ^ t20);
    t24 = (t18 | t23);
    t25 = *((unsigned int *)t41);
    t27 = *((unsigned int *)t46);
    t28 = (t25 | t27);
    t29 = (~(t28));
    t31 = (t24 & t29);
    if (t31 != 0)
        goto LAB113;

LAB110:    if (t28 != 0)
        goto LAB112;

LAB111:    *((unsigned int *)t40) = 1;

LAB113:    t51 = (t40 + 4);
    t32 = *((unsigned int *)t51);
    t33 = (~(t32));
    t34 = *((unsigned int *)t40);
    t36 = (t34 & t33);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB114;

LAB115:
LAB116:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 2728);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB106;

LAB112:    t50 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB113;

LAB114:    xsi_set_current_line(111, ng0);

LAB117:    xsi_set_current_line(112, ng0);
    t52 = (t0 + 1048U);
    t53 = *((char **)t52);
    t52 = (t0 + 1008U);
    t54 = (t52 + 72U);
    t55 = *((char **)t54);
    t56 = (t0 + 2728);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    xsi_vlog_generic_get_index_select_value(t47, 32, t53, t55, 2, t58, 32, 1);
    t59 = ((char*)((ng1)));
    memset(t48, 0, 8);
    t60 = (t47 + 4);
    t61 = (t59 + 4);
    t38 = *((unsigned int *)t47);
    t39 = *((unsigned int *)t59);
    t42 = (t38 ^ t39);
    t43 = *((unsigned int *)t60);
    t44 = *((unsigned int *)t61);
    t45 = (t43 ^ t44);
    t62 = (t42 | t45);
    t63 = *((unsigned int *)t60);
    t64 = *((unsigned int *)t61);
    t65 = (t63 | t64);
    t66 = (~(t65));
    t67 = (t62 & t66);
    if (t67 != 0)
        goto LAB121;

LAB118:    if (t65 != 0)
        goto LAB120;

LAB119:    *((unsigned int *)t48) = 1;

LAB121:    t69 = (t48 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t48);
    t73 = (t72 & t71);
    t74 = (t73 != 0);
    if (t74 > 0)
        goto LAB122;

LAB123:
LAB124:    goto LAB116;

LAB120:    t68 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB121;

LAB122:    xsi_set_current_line(112, ng0);

LAB125:    xsi_set_current_line(113, ng0);
    t75 = ((char*)((ng1)));
    t76 = (t0 + 2568);
    xsi_vlogvar_assign_value(t76, t75, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t2, 32, t7, 32);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB124;

LAB128:    xsi_set_current_line(124, ng0);

LAB130:    xsi_set_current_line(125, ng0);
    t9 = (t0 + 1048U);
    t21 = *((char **)t9);
    t9 = (t0 + 1008U);
    t22 = (t9 + 72U);
    t35 = *((char **)t22);
    t41 = (t0 + 2728);
    t46 = (t41 + 56U);
    t50 = *((char **)t46);
    xsi_vlog_generic_get_index_select_value(t40, 32, t21, t35, 2, t50, 32, 1);
    t51 = ((char*)((ng2)));
    memset(t47, 0, 8);
    t52 = (t40 + 4);
    t53 = (t51 + 4);
    t16 = *((unsigned int *)t40);
    t17 = *((unsigned int *)t51);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t52);
    t20 = *((unsigned int *)t53);
    t23 = (t19 ^ t20);
    t24 = (t18 | t23);
    t25 = *((unsigned int *)t52);
    t27 = *((unsigned int *)t53);
    t28 = (t25 | t27);
    t29 = (~(t28));
    t31 = (t24 & t29);
    if (t31 != 0)
        goto LAB134;

LAB131:    if (t28 != 0)
        goto LAB133;

LAB132:    *((unsigned int *)t47) = 1;

LAB134:    memset(t48, 0, 8);
    t55 = (t47 + 4);
    t32 = *((unsigned int *)t55);
    t33 = (~(t32));
    t34 = *((unsigned int *)t47);
    t36 = (t34 & t33);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t55) != 0)
        goto LAB137;

LAB138:    t57 = (t48 + 4);
    t38 = *((unsigned int *)t48);
    t39 = *((unsigned int *)t57);
    t42 = (t38 || t39);
    if (t42 > 0)
        goto LAB139;

LAB140:    memcpy(t82, t48, 8);

LAB141:    t112 = (t82 + 4);
    t113 = *((unsigned int *)t112);
    t114 = (~(t113));
    t115 = *((unsigned int *)t82);
    t116 = (t115 & t114);
    t117 = (t116 != 0);
    if (t117 > 0)
        goto LAB153;

LAB154:
LAB155:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 2728);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB127;

LAB133:    t54 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB134;

LAB135:    *((unsigned int *)t48) = 1;
    goto LAB138;

LAB137:    t56 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB138;

LAB139:    t58 = (t0 + 2568);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    t61 = ((char*)((ng2)));
    memset(t49, 0, 8);
    t68 = (t60 + 4);
    t69 = (t61 + 4);
    t43 = *((unsigned int *)t60);
    t44 = *((unsigned int *)t61);
    t45 = (t43 ^ t44);
    t62 = *((unsigned int *)t68);
    t63 = *((unsigned int *)t69);
    t64 = (t62 ^ t63);
    t65 = (t45 | t64);
    t66 = *((unsigned int *)t68);
    t67 = *((unsigned int *)t69);
    t70 = (t66 | t67);
    t71 = (~(t70));
    t72 = (t65 & t71);
    if (t72 != 0)
        goto LAB145;

LAB142:    if (t70 != 0)
        goto LAB144;

LAB143:    *((unsigned int *)t49) = 1;

LAB145:    memset(t77, 0, 8);
    t76 = (t49 + 4);
    t73 = *((unsigned int *)t76);
    t74 = (~(t73));
    t78 = *((unsigned int *)t49);
    t79 = (t78 & t74);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB146;

LAB147:    if (*((unsigned int *)t76) != 0)
        goto LAB148;

LAB149:    t83 = *((unsigned int *)t48);
    t84 = *((unsigned int *)t77);
    t85 = (t83 & t84);
    *((unsigned int *)t82) = t85;
    t86 = (t48 + 4);
    t87 = (t77 + 4);
    t88 = (t82 + 4);
    t89 = *((unsigned int *)t86);
    t90 = *((unsigned int *)t87);
    t91 = (t89 | t90);
    *((unsigned int *)t88) = t91;
    t92 = *((unsigned int *)t88);
    t93 = (t92 != 0);
    if (t93 == 1)
        goto LAB150;

LAB151:
LAB152:    goto LAB141;

LAB144:    t75 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB145;

LAB146:    *((unsigned int *)t77) = 1;
    goto LAB149;

LAB148:    t81 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB149;

LAB150:    t94 = *((unsigned int *)t82);
    t95 = *((unsigned int *)t88);
    *((unsigned int *)t82) = (t94 | t95);
    t96 = (t48 + 4);
    t97 = (t77 + 4);
    t98 = *((unsigned int *)t48);
    t99 = (~(t98));
    t100 = *((unsigned int *)t96);
    t101 = (~(t100));
    t102 = *((unsigned int *)t77);
    t103 = (~(t102));
    t104 = *((unsigned int *)t97);
    t105 = (~(t104));
    t6 = (t99 & t101);
    t26 = (t103 & t105);
    t106 = (~(t6));
    t107 = (~(t26));
    t108 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t108 & t106);
    t109 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t109 & t107);
    t110 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t110 & t106);
    t111 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t111 & t107);
    goto LAB152;

LAB153:    xsi_set_current_line(125, ng0);

LAB156:    xsi_set_current_line(126, ng0);
    t118 = ((char*)((ng1)));
    t119 = (t0 + 2568);
    xsi_vlogvar_assign_value(t119, t118, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t2, 32, t7, 32);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB155;

LAB162:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB163;

LAB164:    xsi_set_current_line(147, ng0);

LAB167:    xsi_set_current_line(148, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 1, 0LL);
    goto LAB166;

LAB170:    *((unsigned int *)t10) = 1;
    goto LAB172;

LAB171:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB172;

LAB173:    xsi_set_current_line(155, ng0);

LAB176:    xsi_set_current_line(156, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 1, 0LL);
    goto LAB175;

}


extern void work_m_00000000002475688512_0886308060_init()
{
	static char *pe[] = {(void *)Initial_55_0,(void *)Always_62_1};
	xsi_register_didat("work_m_00000000002475688512_0886308060", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000002475688512_0886308060.didat");
	xsi_register_executes(pe);
}
