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
static const char *ng0 = "D:/jizu/p6/cpup6/EXT.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {16, 0};
static int ng3[] = {31, 0};
static int ng4[] = {0, 0};
static int ng5[] = {1, 0};
static int ng6[] = {15, 0};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {3U, 0U};
static int ng10[] = {2, 0};



static void Always_37_0(char *t0)
{
    char t9[8];
    char t17[8];
    char t26[8];
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
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(39, ng0);

LAB16:    xsi_set_current_line(40, ng0);
    xsi_set_current_line(40, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);

LAB17:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_leq(t9, 32, t4, 32, t7, 32);
    t8 = (t9 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t15 = ((char*)((ng6)));
    t16 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t17, t26, ((int*)(t8)), 2, t15, 32, 1, t16, 32, 1);
    t18 = (t9 + 4);
    t10 = *((unsigned int *)t18);
    t6 = (!(t10));
    t19 = (t17 + 4);
    t11 = *((unsigned int *)t19);
    t27 = (!(t11));
    t28 = (t6 && t27);
    t20 = (t26 + 4);
    t12 = *((unsigned int *)t20);
    t29 = (!(t12));
    t30 = (t28 && t29);
    if (t30 == 1)
        goto LAB23;

LAB24:    goto LAB15;

LAB9:    xsi_set_current_line(45, ng0);

LAB25:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1008U);
    t7 = (t3 + 72U);
    t8 = *((char **)t7);
    t15 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t9, 32, t4, t8, 2, t15, 32, 1);
    t16 = ((char*)((ng5)));
    memset(t17, 0, 8);
    t18 = (t9 + 4);
    t19 = (t16 + 4);
    t10 = *((unsigned int *)t9);
    t11 = *((unsigned int *)t16);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t18);
    t14 = *((unsigned int *)t19);
    t25 = (t13 ^ t14);
    t34 = (t12 | t25);
    t35 = *((unsigned int *)t18);
    t36 = *((unsigned int *)t19);
    t37 = (t35 | t36);
    t38 = (~(t37));
    t39 = (t34 & t38);
    if (t39 != 0)
        goto LAB29;

LAB26:    if (t37 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t17) = 1;

LAB29:    t21 = (t17 + 4);
    t40 = *((unsigned int *)t21);
    t41 = (~(t40));
    t42 = *((unsigned int *)t17);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(52, ng0);

LAB42:    xsi_set_current_line(53, ng0);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB43:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_leq(t9, 32, t4, 32, t7, 32);
    t8 = (t9 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t15 = ((char*)((ng6)));
    t16 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t17, t26, ((int*)(t8)), 2, t15, 32, 1, t16, 32, 1);
    t18 = (t9 + 4);
    t10 = *((unsigned int *)t18);
    t6 = (!(t10));
    t19 = (t17 + 4);
    t11 = *((unsigned int *)t19);
    t27 = (!(t11));
    t28 = (t6 && t27);
    t20 = (t26 + 4);
    t12 = *((unsigned int *)t20);
    t29 = (!(t12));
    t30 = (t28 && t29);
    if (t30 == 1)
        goto LAB49;

LAB50:
LAB32:    goto LAB15;

LAB11:    xsi_set_current_line(59, ng0);

LAB51:    xsi_set_current_line(60, ng0);
    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB52:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng6)));
    memset(t9, 0, 8);
    xsi_vlog_signed_leq(t9, 32, t4, 32, t7, 32);
    t8 = (t9 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t15 = ((char*)((ng3)));
    t16 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t9, t17, t26, ((int*)(t8)), 2, t15, 32, 1, t16, 32, 1);
    t18 = (t9 + 4);
    t10 = *((unsigned int *)t18);
    t6 = (!(t10));
    t19 = (t17 + 4);
    t11 = *((unsigned int *)t19);
    t27 = (!(t11));
    t28 = (t6 && t27);
    t20 = (t26 + 4);
    t12 = *((unsigned int *)t20);
    t29 = (!(t12));
    t30 = (t28 && t29);
    if (t30 == 1)
        goto LAB58;

LAB59:    goto LAB15;

LAB13:    xsi_set_current_line(65, ng0);

LAB60:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1008U);
    t7 = (t3 + 72U);
    t8 = *((char **)t7);
    t15 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t9, 32, t4, t8, 2, t15, 32, 1);
    t16 = ((char*)((ng5)));
    memset(t17, 0, 8);
    t18 = (t9 + 4);
    t19 = (t16 + 4);
    t10 = *((unsigned int *)t9);
    t11 = *((unsigned int *)t16);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t18);
    t14 = *((unsigned int *)t19);
    t25 = (t13 ^ t14);
    t34 = (t12 | t25);
    t35 = *((unsigned int *)t18);
    t36 = *((unsigned int *)t19);
    t37 = (t35 | t36);
    t38 = (~(t37));
    t39 = (t34 & t38);
    if (t39 != 0)
        goto LAB64;

LAB61:    if (t37 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t17) = 1;

LAB64:    t21 = (t17 + 4);
    t40 = *((unsigned int *)t21);
    t41 = (~(t40));
    t42 = *((unsigned int *)t17);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(72, ng0);

LAB77:    xsi_set_current_line(73, ng0);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB78:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_leq(t9, 32, t4, 32, t7, 32);
    t8 = (t9 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t15 = ((char*)((ng6)));
    t16 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t17, t26, ((int*)(t8)), 2, t15, 32, 1, t16, 32, 1);
    t18 = (t9 + 4);
    t10 = *((unsigned int *)t18);
    t6 = (!(t10));
    t19 = (t17 + 4);
    t11 = *((unsigned int *)t19);
    t27 = (!(t11));
    t28 = (t6 && t27);
    t20 = (t26 + 4);
    t12 = *((unsigned int *)t20);
    t29 = (!(t12));
    t30 = (t28 && t29);
    if (t30 == 1)
        goto LAB84;

LAB85:
LAB67:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng10)));
    memset(t17, 0, 8);
    xsi_vlog_signed_lshift(t17, 32, t4, 32, t7, 32);
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t17, 0, 0, 32);
    goto LAB15;

LAB18:    xsi_set_current_line(40, ng0);

LAB20:    xsi_set_current_line(41, ng0);
    t15 = ((char*)((ng4)));
    t16 = (t0 + 1608);
    t18 = (t0 + 1608);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 1768);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_bit_index(t17, t20, 2, t23, 32, 1);
    t24 = (t17 + 4);
    t25 = *((unsigned int *)t24);
    t6 = (!(t25));
    if (t6 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t4, 32, t7, 32);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB17;

LAB21:    xsi_vlogvar_assign_value(t16, t15, 0, *((unsigned int *)t17), 1);
    goto LAB22;

LAB23:    t13 = *((unsigned int *)t26);
    t31 = (t13 + 0);
    t14 = *((unsigned int *)t9);
    t25 = *((unsigned int *)t17);
    t32 = (t14 - t25);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t2, t3, t31, *((unsigned int *)t17), t33);
    goto LAB24;

LAB28:    t20 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(46, ng0);

LAB33:    xsi_set_current_line(47, ng0);
    xsi_set_current_line(47, ng0);
    t22 = ((char*)((ng2)));
    t23 = (t0 + 1768);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 32);

LAB34:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_leq(t9, 32, t4, 32, t7, 32);
    t8 = (t9 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t15 = ((char*)((ng6)));
    t16 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t17, t26, ((int*)(t8)), 2, t15, 32, 1, t16, 32, 1);
    t18 = (t9 + 4);
    t10 = *((unsigned int *)t18);
    t6 = (!(t10));
    t19 = (t17 + 4);
    t11 = *((unsigned int *)t19);
    t27 = (!(t11));
    t28 = (t6 && t27);
    t20 = (t26 + 4);
    t12 = *((unsigned int *)t20);
    t29 = (!(t12));
    t30 = (t28 && t29);
    if (t30 == 1)
        goto LAB40;

LAB41:    goto LAB32;

LAB35:    xsi_set_current_line(47, ng0);

LAB37:    xsi_set_current_line(48, ng0);
    t15 = ((char*)((ng5)));
    t16 = (t0 + 1608);
    t18 = (t0 + 1608);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 1768);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_bit_index(t17, t20, 2, t23, 32, 1);
    t24 = (t17 + 4);
    t25 = *((unsigned int *)t24);
    t6 = (!(t25));
    if (t6 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t4, 32, t7, 32);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB34;

LAB38:    xsi_vlogvar_assign_value(t16, t15, 0, *((unsigned int *)t17), 1);
    goto LAB39;

LAB40:    t13 = *((unsigned int *)t26);
    t31 = (t13 + 0);
    t14 = *((unsigned int *)t9);
    t25 = *((unsigned int *)t17);
    t32 = (t14 - t25);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t2, t3, t31, *((unsigned int *)t17), t33);
    goto LAB41;

LAB44:    xsi_set_current_line(53, ng0);

LAB46:    xsi_set_current_line(54, ng0);
    t15 = ((char*)((ng4)));
    t16 = (t0 + 1608);
    t18 = (t0 + 1608);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 1768);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_bit_index(t17, t20, 2, t23, 32, 1);
    t24 = (t17 + 4);
    t25 = *((unsigned int *)t24);
    t6 = (!(t25));
    if (t6 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t4, 32, t7, 32);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB43;

LAB47:    xsi_vlogvar_assign_value(t16, t15, 0, *((unsigned int *)t17), 1);
    goto LAB48;

LAB49:    t13 = *((unsigned int *)t26);
    t31 = (t13 + 0);
    t14 = *((unsigned int *)t9);
    t25 = *((unsigned int *)t17);
    t32 = (t14 - t25);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t2, t3, t31, *((unsigned int *)t17), t33);
    goto LAB50;

LAB53:    xsi_set_current_line(60, ng0);

LAB55:    xsi_set_current_line(61, ng0);
    t15 = ((char*)((ng4)));
    t16 = (t0 + 1608);
    t18 = (t0 + 1608);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 1768);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_bit_index(t17, t20, 2, t23, 32, 1);
    t24 = (t17 + 4);
    t25 = *((unsigned int *)t24);
    t6 = (!(t25));
    if (t6 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t4, 32, t7, 32);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB52;

LAB56:    xsi_vlogvar_assign_value(t16, t15, 0, *((unsigned int *)t17), 1);
    goto LAB57;

LAB58:    t13 = *((unsigned int *)t26);
    t31 = (t13 + 0);
    t14 = *((unsigned int *)t9);
    t25 = *((unsigned int *)t17);
    t32 = (t14 - t25);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t2, t3, t31, *((unsigned int *)t17), t33);
    goto LAB59;

LAB63:    t20 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(66, ng0);

LAB68:    xsi_set_current_line(67, ng0);
    xsi_set_current_line(67, ng0);
    t22 = ((char*)((ng2)));
    t23 = (t0 + 1768);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 32);

LAB69:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_leq(t9, 32, t4, 32, t7, 32);
    t8 = (t9 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t15 = ((char*)((ng6)));
    t16 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t17, t26, ((int*)(t8)), 2, t15, 32, 1, t16, 32, 1);
    t18 = (t9 + 4);
    t10 = *((unsigned int *)t18);
    t6 = (!(t10));
    t19 = (t17 + 4);
    t11 = *((unsigned int *)t19);
    t27 = (!(t11));
    t28 = (t6 && t27);
    t20 = (t26 + 4);
    t12 = *((unsigned int *)t20);
    t29 = (!(t12));
    t30 = (t28 && t29);
    if (t30 == 1)
        goto LAB75;

LAB76:    goto LAB67;

LAB70:    xsi_set_current_line(67, ng0);

LAB72:    xsi_set_current_line(68, ng0);
    t15 = ((char*)((ng5)));
    t16 = (t0 + 1608);
    t18 = (t0 + 1608);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 1768);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_bit_index(t17, t20, 2, t23, 32, 1);
    t24 = (t17 + 4);
    t25 = *((unsigned int *)t24);
    t6 = (!(t25));
    if (t6 == 1)
        goto LAB73;

LAB74:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t4, 32, t7, 32);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB69;

LAB73:    xsi_vlogvar_assign_value(t16, t15, 0, *((unsigned int *)t17), 1);
    goto LAB74;

LAB75:    t13 = *((unsigned int *)t26);
    t31 = (t13 + 0);
    t14 = *((unsigned int *)t9);
    t25 = *((unsigned int *)t17);
    t32 = (t14 - t25);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t2, t3, t31, *((unsigned int *)t17), t33);
    goto LAB76;

LAB79:    xsi_set_current_line(73, ng0);

LAB81:    xsi_set_current_line(74, ng0);
    t15 = ((char*)((ng4)));
    t16 = (t0 + 1608);
    t18 = (t0 + 1608);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 1768);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_bit_index(t17, t20, 2, t23, 32, 1);
    t24 = (t17 + 4);
    t25 = *((unsigned int *)t24);
    t6 = (!(t25));
    if (t6 == 1)
        goto LAB82;

LAB83:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t4, 32, t7, 32);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB78;

LAB82:    xsi_vlogvar_assign_value(t16, t15, 0, *((unsigned int *)t17), 1);
    goto LAB83;

LAB84:    t13 = *((unsigned int *)t26);
    t31 = (t13 + 0);
    t14 = *((unsigned int *)t9);
    t25 = *((unsigned int *)t17);
    t32 = (t14 - t25);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t2, t3, t31, *((unsigned int *)t17), t33);
    goto LAB85;

}


extern void work_m_00000000003191455671_4241813833_init()
{
	static char *pe[] = {(void *)Always_37_0};
	xsi_register_didat("work_m_00000000003191455671_4241813833", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000003191455671_4241813833.didat");
	xsi_register_executes(pe);
}
