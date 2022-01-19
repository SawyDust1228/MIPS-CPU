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
static const char *ng0 = "D:/jizu/p6/cpup6/RDKUOZHAN.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {24, 0};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {0, 0};
static unsigned int ng8[] = {4U, 0U};
static int ng9[] = {16, 0};



static void Always_33_0(char *t0)
{
    char t9[8];
    char t29[8];
    char t30[8];
    char t42[8];
    char t44[8];
    char t55[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
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
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t43;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t56;
    char *t57;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(87, ng0);

LAB93:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);

LAB20:    xsi_set_current_line(36, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB19;

LAB9:    xsi_set_current_line(38, ng0);

LAB21:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB25;

LAB22:    if (t19 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t9) = 1;

LAB25:    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB33;

LAB30:    if (t19 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t9) = 1;

LAB33:    t22 = (t9 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB41;

LAB38:    if (t19 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t9) = 1;

LAB41:    t22 = (t9 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(48, ng0);

LAB46:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t29, 0, 8);
    t2 = (t29 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 24);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 24);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t7 = ((char*)((ng1)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t7, 24, t29, 8);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB44:
LAB36:
LAB28:    goto LAB19;

LAB11:    xsi_set_current_line(52, ng0);

LAB47:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB51;

LAB48:    if (t19 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t9) = 1;

LAB51:    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB59;

LAB56:    if (t19 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t9) = 1;

LAB59:    t22 = (t9 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB67;

LAB64:    if (t19 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t9) = 1;

LAB67:    t22 = (t9 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(63, ng0);

LAB72:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t29, 0, 8);
    t2 = (t29 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 24);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 24);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t7 = ((char*)((ng4)));
    t8 = (t0 + 1208U);
    t22 = *((char **)t8);
    memset(t42, 0, 8);
    t8 = (t42 + 4);
    t23 = (t22 + 4);
    t16 = *((unsigned int *)t22);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t42) = t18;
    t19 = *((unsigned int *)t23);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t8) = t21;
    xsi_vlog_mul_concat(t30, 24, 1, t7, 1U, t42, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t30, 24, t29, 8);
    t31 = (t0 + 1768);
    xsi_vlogvar_assign_value(t31, t9, 0, 0, 32);

LAB70:
LAB62:
LAB54:    goto LAB19;

LAB13:    xsi_set_current_line(68, ng0);

LAB73:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1008U);
    t7 = (t3 + 72U);
    t8 = *((char **)t7);
    t22 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t9, 32, t4, t8, 2, t22, 32, 1);
    t23 = ((char*)((ng7)));
    memset(t29, 0, 8);
    t31 = (t9 + 4);
    t32 = (t23 + 4);
    t10 = *((unsigned int *)t9);
    t11 = *((unsigned int *)t23);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t31);
    t14 = *((unsigned int *)t32);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t32);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB77;

LAB74:    if (t19 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t29) = 1;

LAB77:    t40 = (t29 + 4);
    t24 = *((unsigned int *)t40);
    t25 = (~(t24));
    t26 = *((unsigned int *)t29);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(72, ng0);

LAB82:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t29, 0, 8);
    t2 = (t29 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 16);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 16);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 65535U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t7 = ((char*)((ng1)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t7, 16, t29, 16);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB80:    goto LAB19;

LAB15:    xsi_set_current_line(77, ng0);

LAB83:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1008U);
    t7 = (t3 + 72U);
    t8 = *((char **)t7);
    t22 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t9, 32, t4, t8, 2, t22, 32, 1);
    t23 = ((char*)((ng7)));
    memset(t29, 0, 8);
    t31 = (t9 + 4);
    t32 = (t23 + 4);
    t10 = *((unsigned int *)t9);
    t11 = *((unsigned int *)t23);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t31);
    t14 = *((unsigned int *)t32);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t32);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB87;

LAB84:    if (t19 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t29) = 1;

LAB87:    t40 = (t29 + 4);
    t24 = *((unsigned int *)t40);
    t25 = (~(t24));
    t26 = *((unsigned int *)t29);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(82, ng0);

LAB92:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t29, 0, 8);
    t2 = (t29 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 16);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 16);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 65535U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t7 = ((char*)((ng9)));
    t8 = (t0 + 1208U);
    t22 = *((char **)t8);
    memset(t42, 0, 8);
    t8 = (t42 + 4);
    t23 = (t22 + 4);
    t16 = *((unsigned int *)t22);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t42) = t18;
    t19 = *((unsigned int *)t23);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t8) = t21;
    xsi_vlog_mul_concat(t30, 16, 1, t7, 1U, t42, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t30, 16, t29, 16);
    t31 = (t0 + 1768);
    xsi_vlogvar_assign_value(t31, t9, 0, 0, 32);

LAB90:    goto LAB19;

LAB24:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(39, ng0);

LAB29:    xsi_set_current_line(40, ng0);
    t31 = (t0 + 1208U);
    t32 = *((char **)t31);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t33 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (t34 >> 0);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 255U);
    t40 = ((char*)((ng1)));
    xsi_vlogtype_concat(t29, 32, 32, 2U, t40, 24, t30, 8);
    t41 = (t0 + 1768);
    xsi_vlogvar_assign_value(t41, t29, 0, 0, 32);
    goto LAB28;

LAB32:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(42, ng0);

LAB37:    xsi_set_current_line(43, ng0);
    t23 = (t0 + 1208U);
    t31 = *((char **)t23);
    memset(t30, 0, 8);
    t23 = (t30 + 4);
    t32 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 8);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 8);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 255U);
    t33 = ((char*)((ng1)));
    xsi_vlogtype_concat(t29, 32, 32, 2U, t33, 24, t30, 8);
    t40 = (t0 + 1768);
    xsi_vlogvar_assign_value(t40, t29, 0, 0, 32);
    goto LAB36;

LAB40:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(45, ng0);

LAB45:    xsi_set_current_line(46, ng0);
    t23 = (t0 + 1208U);
    t31 = *((char **)t23);
    memset(t30, 0, 8);
    t23 = (t30 + 4);
    t32 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 16);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 16);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 255U);
    t33 = ((char*)((ng1)));
    xsi_vlogtype_concat(t29, 32, 32, 2U, t33, 24, t30, 8);
    t40 = (t0 + 1768);
    xsi_vlogvar_assign_value(t40, t29, 0, 0, 32);
    goto LAB44;

LAB50:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(54, ng0);

LAB55:    xsi_set_current_line(55, ng0);
    t31 = (t0 + 1208U);
    t32 = *((char **)t31);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t33 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (t34 >> 0);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 255U);
    t40 = ((char*)((ng4)));
    t41 = (t0 + 1208U);
    t43 = *((char **)t41);
    memset(t44, 0, 8);
    t41 = (t44 + 4);
    t45 = (t43 + 4);
    t46 = *((unsigned int *)t43);
    t47 = (t46 >> 7);
    t48 = (t47 & 1);
    *((unsigned int *)t44) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 >> 7);
    t51 = (t50 & 1);
    *((unsigned int *)t41) = t51;
    xsi_vlog_mul_concat(t42, 24, 1, t40, 1U, t44, 1);
    xsi_vlogtype_concat(t29, 32, 32, 2U, t42, 24, t30, 8);
    t52 = (t0 + 1768);
    xsi_vlogvar_assign_value(t52, t29, 0, 0, 32);
    goto LAB54;

LAB58:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(57, ng0);

LAB63:    xsi_set_current_line(58, ng0);
    t23 = (t0 + 1208U);
    t31 = *((char **)t23);
    memset(t30, 0, 8);
    t23 = (t30 + 4);
    t32 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 8);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 8);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 255U);
    t33 = ((char*)((ng4)));
    t40 = (t0 + 1208U);
    t41 = *((char **)t40);
    memset(t44, 0, 8);
    t40 = (t44 + 4);
    t43 = (t41 + 4);
    t46 = *((unsigned int *)t41);
    t47 = (t46 >> 15);
    t48 = (t47 & 1);
    *((unsigned int *)t44) = t48;
    t49 = *((unsigned int *)t43);
    t50 = (t49 >> 15);
    t51 = (t50 & 1);
    *((unsigned int *)t40) = t51;
    xsi_vlog_mul_concat(t42, 24, 1, t33, 1U, t44, 1);
    xsi_vlogtype_concat(t29, 32, 32, 2U, t42, 24, t30, 8);
    t45 = (t0 + 1768);
    xsi_vlogvar_assign_value(t45, t29, 0, 0, 32);
    goto LAB62;

LAB66:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(60, ng0);

LAB71:    xsi_set_current_line(61, ng0);
    t23 = (t0 + 1208U);
    t31 = *((char **)t23);
    memset(t30, 0, 8);
    t23 = (t30 + 4);
    t32 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 16);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 16);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 255U);
    t33 = ((char*)((ng4)));
    t40 = (t0 + 1208U);
    t41 = *((char **)t40);
    memset(t44, 0, 8);
    t40 = (t44 + 4);
    t43 = (t41 + 4);
    t46 = *((unsigned int *)t41);
    t47 = (t46 >> 23);
    t48 = (t47 & 1);
    *((unsigned int *)t44) = t48;
    t49 = *((unsigned int *)t43);
    t50 = (t49 >> 23);
    t51 = (t50 & 1);
    *((unsigned int *)t40) = t51;
    xsi_vlog_mul_concat(t42, 24, 1, t33, 1U, t44, 1);
    xsi_vlogtype_concat(t29, 32, 32, 2U, t42, 24, t30, 8);
    t45 = (t0 + 1768);
    xsi_vlogvar_assign_value(t45, t29, 0, 0, 32);
    goto LAB70;

LAB76:    t33 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(69, ng0);

LAB81:    xsi_set_current_line(70, ng0);
    t41 = (t0 + 1208U);
    t43 = *((char **)t41);
    memset(t42, 0, 8);
    t41 = (t42 + 4);
    t45 = (t43 + 4);
    t34 = *((unsigned int *)t43);
    t35 = (t34 >> 0);
    *((unsigned int *)t42) = t35;
    t36 = *((unsigned int *)t45);
    t37 = (t36 >> 0);
    *((unsigned int *)t41) = t37;
    t38 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t38 & 65535U);
    t39 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t39 & 65535U);
    t52 = ((char*)((ng1)));
    xsi_vlogtype_concat(t30, 32, 32, 2U, t52, 16, t42, 16);
    t53 = (t0 + 1768);
    xsi_vlogvar_assign_value(t53, t30, 0, 0, 32);
    goto LAB80;

LAB86:    t33 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB87;

LAB88:    xsi_set_current_line(79, ng0);

LAB91:    xsi_set_current_line(80, ng0);
    t41 = (t0 + 1208U);
    t43 = *((char **)t41);
    memset(t42, 0, 8);
    t41 = (t42 + 4);
    t45 = (t43 + 4);
    t34 = *((unsigned int *)t43);
    t35 = (t34 >> 0);
    *((unsigned int *)t42) = t35;
    t36 = *((unsigned int *)t45);
    t37 = (t36 >> 0);
    *((unsigned int *)t41) = t37;
    t38 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t38 & 65535U);
    t39 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t39 & 65535U);
    t52 = ((char*)((ng9)));
    t53 = (t0 + 1208U);
    t54 = *((char **)t53);
    memset(t55, 0, 8);
    t53 = (t55 + 4);
    t56 = (t54 + 4);
    t46 = *((unsigned int *)t54);
    t47 = (t46 >> 15);
    t48 = (t47 & 1);
    *((unsigned int *)t55) = t48;
    t49 = *((unsigned int *)t56);
    t50 = (t49 >> 15);
    t51 = (t50 & 1);
    *((unsigned int *)t53) = t51;
    xsi_vlog_mul_concat(t44, 16, 1, t52, 1U, t55, 1);
    xsi_vlogtype_concat(t30, 32, 32, 2U, t44, 16, t42, 16);
    t57 = (t0 + 1768);
    xsi_vlogvar_assign_value(t57, t30, 0, 0, 32);
    goto LAB90;

}


extern void work_m_00000000002904882829_1057179022_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("work_m_00000000002904882829_1057179022", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000002904882829_1057179022.didat");
	xsi_register_executes(pe);
}
