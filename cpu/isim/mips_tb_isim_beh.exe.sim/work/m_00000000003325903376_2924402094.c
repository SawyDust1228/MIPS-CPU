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
static const char *ng0 = "D:/jizu/p6/cpup6/DM.v";
static int ng1[] = {0, 0};
static int ng2[] = {4096, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {15U, 0U};
static unsigned int ng6[] = {3U, 0U};
static int ng7[] = {15, 0};
static unsigned int ng8[] = {12U, 0U};
static int ng9[] = {31, 0};
static int ng10[] = {16, 0};
static unsigned int ng11[] = {1U, 0U};
static int ng12[] = {7, 0};
static unsigned int ng13[] = {2U, 0U};
static int ng14[] = {8, 0};
static unsigned int ng15[] = {4U, 0U};
static int ng16[] = {23, 0};
static unsigned int ng17[] = {8U, 0U};
static int ng18[] = {24, 0};
static const char *ng19 = "%d@%h: *%h <= %h";



static void Initial_36_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB6:    xsi_set_current_line(38, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 2728);
    t16 = (t0 + 2728);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2728);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2888);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB8;

}

static void Always_43_1(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t55[8];
    char t56[8];
    char t57[8];
    char t58[8];
    char t82[16];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    int t67;
    int t68;
    char *t69;
    unsigned int t70;
    int t71;
    int t72;
    unsigned int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    int t81;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4624);
    *((int *)t2) = 1;
    t3 = (t0 + 4088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(49, ng0);

LAB16:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(44, ng0);

LAB9:    xsi_set_current_line(45, ng0);
    xsi_set_current_line(45, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(45, ng0);

LAB13:    xsi_set_current_line(46, ng0);
    t12 = ((char*)((ng3)));
    t14 = (t0 + 2728);
    t17 = (t0 + 2728);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2728);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 2888);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2888);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB15;

LAB17:    xsi_set_current_line(50, ng0);

LAB20:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t27 = *((unsigned int *)t5);
    t30 = *((unsigned int *)t4);
    t33 = (t27 ^ t30);
    t34 = *((unsigned int *)t11);
    t37 = *((unsigned int *)t12);
    t38 = (t34 ^ t37);
    t39 = (t33 | t38);
    t40 = *((unsigned int *)t11);
    t41 = *((unsigned int *)t12);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB24;

LAB21:    if (t42 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t13) = 1;

LAB24:    t17 = (t13 + 4);
    t45 = *((unsigned int *)t17);
    t46 = (~(t45));
    t47 = *((unsigned int *)t13);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t27 = (t9 ^ t10);
    t30 = (t8 | t27);
    t33 = *((unsigned int *)t4);
    t34 = *((unsigned int *)t5);
    t37 = (t33 | t34);
    t38 = (~(t37));
    t39 = (t30 & t38);
    if (t39 != 0)
        goto LAB34;

LAB31:    if (t37 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t13) = 1;

LAB34:    t12 = (t13 + 4);
    t40 = *((unsigned int *)t12);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t27 = (t9 ^ t10);
    t30 = (t8 | t27);
    t33 = *((unsigned int *)t4);
    t34 = *((unsigned int *)t5);
    t37 = (t33 | t34);
    t38 = (~(t37));
    t39 = (t30 & t38);
    if (t39 != 0)
        goto LAB44;

LAB41:    if (t37 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t13) = 1;

LAB44:    t12 = (t13 + 4);
    t40 = *((unsigned int *)t12);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t27 = (t9 ^ t10);
    t30 = (t8 | t27);
    t33 = *((unsigned int *)t4);
    t34 = *((unsigned int *)t5);
    t37 = (t33 | t34);
    t38 = (~(t37));
    t39 = (t30 & t38);
    if (t39 != 0)
        goto LAB54;

LAB51:    if (t37 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t13) = 1;

LAB54:    t12 = (t13 + 4);
    t40 = *((unsigned int *)t12);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1528U);
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
    t27 = (t9 ^ t10);
    t30 = (t8 | t27);
    t33 = *((unsigned int *)t4);
    t34 = *((unsigned int *)t5);
    t37 = (t33 | t34);
    t38 = (~(t37));
    t39 = (t30 & t38);
    if (t39 != 0)
        goto LAB64;

LAB61:    if (t37 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t13) = 1;

LAB64:    t12 = (t13 + 4);
    t40 = *((unsigned int *)t12);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng15)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t27 = (t9 ^ t10);
    t30 = (t8 | t27);
    t33 = *((unsigned int *)t4);
    t34 = *((unsigned int *)t5);
    t37 = (t33 | t34);
    t38 = (~(t37));
    t39 = (t30 & t38);
    if (t39 != 0)
        goto LAB74;

LAB71:    if (t37 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t13) = 1;

LAB74:    t12 = (t13 + 4);
    t40 = *((unsigned int *)t12);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng17)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t27 = (t9 ^ t10);
    t30 = (t8 | t27);
    t33 = *((unsigned int *)t4);
    t34 = *((unsigned int *)t5);
    t37 = (t33 | t34);
    t38 = (~(t37));
    t39 = (t30 & t38);
    if (t39 != 0)
        goto LAB84;

LAB81:    if (t37 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t13) = 1;

LAB84:    t12 = (t13 + 4);
    t40 = *((unsigned int *)t12);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB85;

LAB86:
LAB87:
LAB77:
LAB67:
LAB57:
LAB47:
LAB37:
LAB27:    xsi_set_current_line(73, ng0);
    t2 = xsi_vlog_time(t82, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2168U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1688U);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 2);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 2);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 1073741823U);
    t27 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t27 & 1073741823U);
    xsi_vlogtype_concat(t13, 32, 32, 2U, t15, 30, t3, 2);
    t14 = (t0 + 2728);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 2728);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 2728);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 1848U);
    t26 = *((char **)t25);
    xsi_vlog_generic_get_array_select_value(t16, 32, t18, t21, t24, 2, 1, t26, 12, 2);
    xsi_vlogfile_write(1, 0, 0, ng19, 5, t0, (char)118, t82, 64, (char)118, t4, 32, (char)118, t13, 32, (char)118, t16, 32);
    goto LAB19;

LAB23:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(52, ng0);

LAB28:    xsi_set_current_line(53, ng0);
    t18 = (t0 + 2008U);
    t19 = *((char **)t18);
    t18 = (t0 + 2728);
    t20 = (t0 + 2728);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2728);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1848U);
    t29 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t15, t16, t22, t25, 2, 1, t29, 12, 2);
    t26 = (t15 + 4);
    t50 = *((unsigned int *)t26);
    t28 = (!(t50));
    t51 = (t16 + 4);
    t52 = *((unsigned int *)t51);
    t31 = (!(t52));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB29;

LAB30:    goto LAB27;

LAB29:    t53 = *((unsigned int *)t15);
    t54 = *((unsigned int *)t16);
    t35 = (t53 - t54);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t18, t19, 0, *((unsigned int *)t16), t36);
    goto LAB30;

LAB33:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(55, ng0);

LAB38:    xsi_set_current_line(56, ng0);
    t14 = (t0 + 2008U);
    t17 = *((char **)t14);
    memset(t15, 0, 8);
    t14 = (t15 + 4);
    t18 = (t17 + 4);
    t45 = *((unsigned int *)t17);
    t46 = (t45 >> 0);
    *((unsigned int *)t15) = t46;
    t47 = *((unsigned int *)t18);
    t48 = (t47 >> 0);
    *((unsigned int *)t14) = t48;
    t49 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t49 & 65535U);
    t50 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t50 & 65535U);
    t19 = (t0 + 2728);
    t20 = (t0 + 2728);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2728);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1848U);
    t29 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t16, t55, t22, t25, 2, 1, t29, 12, 2);
    t26 = (t0 + 2728);
    t51 = (t26 + 72U);
    t59 = *((char **)t51);
    t60 = ((char*)((ng7)));
    t61 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t56, t57, t58, ((int*)(t59)), 2, t60, 32, 1, t61, 32, 1);
    t62 = (t16 + 4);
    t52 = *((unsigned int *)t62);
    t28 = (!(t52));
    t63 = (t55 + 4);
    t53 = *((unsigned int *)t63);
    t31 = (!(t53));
    t32 = (t28 && t31);
    t64 = (t56 + 4);
    t54 = *((unsigned int *)t64);
    t35 = (!(t54));
    t36 = (t32 && t35);
    t65 = (t57 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (!(t66));
    t68 = (t36 && t67);
    t69 = (t58 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (!(t70));
    t72 = (t68 && t71);
    if (t72 == 1)
        goto LAB39;

LAB40:    goto LAB37;

LAB39:    t73 = *((unsigned int *)t58);
    t74 = (t73 + 0);
    t75 = *((unsigned int *)t55);
    t76 = *((unsigned int *)t57);
    t77 = (t75 + t76);
    t78 = *((unsigned int *)t56);
    t79 = *((unsigned int *)t57);
    t80 = (t78 - t79);
    t81 = (t80 + 1);
    xsi_vlogvar_assign_value(t19, t15, t74, t77, t81);
    goto LAB40;

LAB43:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(58, ng0);

LAB48:    xsi_set_current_line(59, ng0);
    t14 = (t0 + 2008U);
    t17 = *((char **)t14);
    memset(t15, 0, 8);
    t14 = (t15 + 4);
    t18 = (t17 + 4);
    t45 = *((unsigned int *)t17);
    t46 = (t45 >> 0);
    *((unsigned int *)t15) = t46;
    t47 = *((unsigned int *)t18);
    t48 = (t47 >> 0);
    *((unsigned int *)t14) = t48;
    t49 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t49 & 65535U);
    t50 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t50 & 65535U);
    t19 = (t0 + 2728);
    t20 = (t0 + 2728);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2728);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1848U);
    t29 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t16, t55, t22, t25, 2, 1, t29, 12, 2);
    t26 = (t0 + 2728);
    t51 = (t26 + 72U);
    t59 = *((char **)t51);
    t60 = ((char*)((ng9)));
    t61 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t56, t57, t58, ((int*)(t59)), 2, t60, 32, 1, t61, 32, 1);
    t62 = (t16 + 4);
    t52 = *((unsigned int *)t62);
    t28 = (!(t52));
    t63 = (t55 + 4);
    t53 = *((unsigned int *)t63);
    t31 = (!(t53));
    t32 = (t28 && t31);
    t64 = (t56 + 4);
    t54 = *((unsigned int *)t64);
    t35 = (!(t54));
    t36 = (t32 && t35);
    t65 = (t57 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (!(t66));
    t68 = (t36 && t67);
    t69 = (t58 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (!(t70));
    t72 = (t68 && t71);
    if (t72 == 1)
        goto LAB49;

LAB50:    goto LAB47;

LAB49:    t73 = *((unsigned int *)t58);
    t74 = (t73 + 0);
    t75 = *((unsigned int *)t55);
    t76 = *((unsigned int *)t57);
    t77 = (t75 + t76);
    t78 = *((unsigned int *)t56);
    t79 = *((unsigned int *)t57);
    t80 = (t78 - t79);
    t81 = (t80 + 1);
    xsi_vlogvar_assign_value(t19, t15, t74, t77, t81);
    goto LAB50;

LAB53:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(61, ng0);

LAB58:    xsi_set_current_line(62, ng0);
    t14 = (t0 + 2008U);
    t17 = *((char **)t14);
    memset(t15, 0, 8);
    t14 = (t15 + 4);
    t18 = (t17 + 4);
    t45 = *((unsigned int *)t17);
    t46 = (t45 >> 0);
    *((unsigned int *)t15) = t46;
    t47 = *((unsigned int *)t18);
    t48 = (t47 >> 0);
    *((unsigned int *)t14) = t48;
    t49 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t49 & 255U);
    t50 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t50 & 255U);
    t19 = (t0 + 2728);
    t20 = (t0 + 2728);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2728);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1848U);
    t29 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t16, t55, t22, t25, 2, 1, t29, 12, 2);
    t26 = (t0 + 2728);
    t51 = (t26 + 72U);
    t59 = *((char **)t51);
    t60 = ((char*)((ng12)));
    t61 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t56, t57, t58, ((int*)(t59)), 2, t60, 32, 1, t61, 32, 1);
    t62 = (t16 + 4);
    t52 = *((unsigned int *)t62);
    t28 = (!(t52));
    t63 = (t55 + 4);
    t53 = *((unsigned int *)t63);
    t31 = (!(t53));
    t32 = (t28 && t31);
    t64 = (t56 + 4);
    t54 = *((unsigned int *)t64);
    t35 = (!(t54));
    t36 = (t32 && t35);
    t65 = (t57 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (!(t66));
    t68 = (t36 && t67);
    t69 = (t58 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (!(t70));
    t72 = (t68 && t71);
    if (t72 == 1)
        goto LAB59;

LAB60:    goto LAB57;

LAB59:    t73 = *((unsigned int *)t58);
    t74 = (t73 + 0);
    t75 = *((unsigned int *)t55);
    t76 = *((unsigned int *)t57);
    t77 = (t75 + t76);
    t78 = *((unsigned int *)t56);
    t79 = *((unsigned int *)t57);
    t80 = (t78 - t79);
    t81 = (t80 + 1);
    xsi_vlogvar_assign_value(t19, t15, t74, t77, t81);
    goto LAB60;

LAB63:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(64, ng0);

LAB68:    xsi_set_current_line(65, ng0);
    t14 = (t0 + 2008U);
    t17 = *((char **)t14);
    memset(t15, 0, 8);
    t14 = (t15 + 4);
    t18 = (t17 + 4);
    t45 = *((unsigned int *)t17);
    t46 = (t45 >> 0);
    *((unsigned int *)t15) = t46;
    t47 = *((unsigned int *)t18);
    t48 = (t47 >> 0);
    *((unsigned int *)t14) = t48;
    t49 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t49 & 255U);
    t50 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t50 & 255U);
    t19 = (t0 + 2728);
    t20 = (t0 + 2728);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2728);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1848U);
    t29 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t16, t55, t22, t25, 2, 1, t29, 12, 2);
    t26 = (t0 + 2728);
    t51 = (t26 + 72U);
    t59 = *((char **)t51);
    t60 = ((char*)((ng7)));
    t61 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t56, t57, t58, ((int*)(t59)), 2, t60, 32, 1, t61, 32, 1);
    t62 = (t16 + 4);
    t52 = *((unsigned int *)t62);
    t28 = (!(t52));
    t63 = (t55 + 4);
    t53 = *((unsigned int *)t63);
    t31 = (!(t53));
    t32 = (t28 && t31);
    t64 = (t56 + 4);
    t54 = *((unsigned int *)t64);
    t35 = (!(t54));
    t36 = (t32 && t35);
    t65 = (t57 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (!(t66));
    t68 = (t36 && t67);
    t69 = (t58 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (!(t70));
    t72 = (t68 && t71);
    if (t72 == 1)
        goto LAB69;

LAB70:    goto LAB67;

LAB69:    t73 = *((unsigned int *)t58);
    t74 = (t73 + 0);
    t75 = *((unsigned int *)t55);
    t76 = *((unsigned int *)t57);
    t77 = (t75 + t76);
    t78 = *((unsigned int *)t56);
    t79 = *((unsigned int *)t57);
    t80 = (t78 - t79);
    t81 = (t80 + 1);
    xsi_vlogvar_assign_value(t19, t15, t74, t77, t81);
    goto LAB70;

LAB73:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB74;

LAB75:    xsi_set_current_line(67, ng0);

LAB78:    xsi_set_current_line(68, ng0);
    t14 = (t0 + 2008U);
    t17 = *((char **)t14);
    memset(t15, 0, 8);
    t14 = (t15 + 4);
    t18 = (t17 + 4);
    t45 = *((unsigned int *)t17);
    t46 = (t45 >> 0);
    *((unsigned int *)t15) = t46;
    t47 = *((unsigned int *)t18);
    t48 = (t47 >> 0);
    *((unsigned int *)t14) = t48;
    t49 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t49 & 255U);
    t50 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t50 & 255U);
    t19 = (t0 + 2728);
    t20 = (t0 + 2728);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2728);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1848U);
    t29 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t16, t55, t22, t25, 2, 1, t29, 12, 2);
    t26 = (t0 + 2728);
    t51 = (t26 + 72U);
    t59 = *((char **)t51);
    t60 = ((char*)((ng16)));
    t61 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t56, t57, t58, ((int*)(t59)), 2, t60, 32, 1, t61, 32, 1);
    t62 = (t16 + 4);
    t52 = *((unsigned int *)t62);
    t28 = (!(t52));
    t63 = (t55 + 4);
    t53 = *((unsigned int *)t63);
    t31 = (!(t53));
    t32 = (t28 && t31);
    t64 = (t56 + 4);
    t54 = *((unsigned int *)t64);
    t35 = (!(t54));
    t36 = (t32 && t35);
    t65 = (t57 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (!(t66));
    t68 = (t36 && t67);
    t69 = (t58 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (!(t70));
    t72 = (t68 && t71);
    if (t72 == 1)
        goto LAB79;

LAB80:    goto LAB77;

LAB79:    t73 = *((unsigned int *)t58);
    t74 = (t73 + 0);
    t75 = *((unsigned int *)t55);
    t76 = *((unsigned int *)t57);
    t77 = (t75 + t76);
    t78 = *((unsigned int *)t56);
    t79 = *((unsigned int *)t57);
    t80 = (t78 - t79);
    t81 = (t80 + 1);
    xsi_vlogvar_assign_value(t19, t15, t74, t77, t81);
    goto LAB80;

LAB83:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(70, ng0);

LAB88:    xsi_set_current_line(71, ng0);
    t14 = (t0 + 2008U);
    t17 = *((char **)t14);
    memset(t15, 0, 8);
    t14 = (t15 + 4);
    t18 = (t17 + 4);
    t45 = *((unsigned int *)t17);
    t46 = (t45 >> 0);
    *((unsigned int *)t15) = t46;
    t47 = *((unsigned int *)t18);
    t48 = (t47 >> 0);
    *((unsigned int *)t14) = t48;
    t49 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t49 & 255U);
    t50 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t50 & 255U);
    t19 = (t0 + 2728);
    t20 = (t0 + 2728);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2728);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1848U);
    t29 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t16, t55, t22, t25, 2, 1, t29, 12, 2);
    t26 = (t0 + 2728);
    t51 = (t26 + 72U);
    t59 = *((char **)t51);
    t60 = ((char*)((ng9)));
    t61 = ((char*)((ng18)));
    xsi_vlog_convert_partindices(t56, t57, t58, ((int*)(t59)), 2, t60, 32, 1, t61, 32, 1);
    t62 = (t16 + 4);
    t52 = *((unsigned int *)t62);
    t28 = (!(t52));
    t63 = (t55 + 4);
    t53 = *((unsigned int *)t63);
    t31 = (!(t53));
    t32 = (t28 && t31);
    t64 = (t56 + 4);
    t54 = *((unsigned int *)t64);
    t35 = (!(t54));
    t36 = (t32 && t35);
    t65 = (t57 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (!(t66));
    t68 = (t36 && t67);
    t69 = (t58 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (!(t70));
    t72 = (t68 && t71);
    if (t72 == 1)
        goto LAB89;

LAB90:    goto LAB87;

LAB89:    t73 = *((unsigned int *)t58);
    t74 = (t73 + 0);
    t75 = *((unsigned int *)t55);
    t76 = *((unsigned int *)t57);
    t77 = (t75 + t76);
    t78 = *((unsigned int *)t56);
    t79 = *((unsigned int *)t57);
    t80 = (t78 - t79);
    t81 = (t80 + 1);
    xsi_vlogvar_assign_value(t19, t15, t74, t77, t81);
    goto LAB90;

}

static void Always_78_2(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 4640);
    *((int *)t2) = 1;
    t3 = (t0 + 4336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(78, ng0);

LAB5:    xsi_set_current_line(79, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2728);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2728);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1848U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t15, 12, 2);
    t14 = (t0 + 2568);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 32);
    goto LAB2;

}


extern void work_m_00000000003325903376_2924402094_init()
{
	static char *pe[] = {(void *)Initial_36_0,(void *)Always_43_1,(void *)Always_78_2};
	xsi_register_didat("work_m_00000000003325903376_2924402094", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000003325903376_2924402094.didat");
	xsi_register_executes(pe);
}
