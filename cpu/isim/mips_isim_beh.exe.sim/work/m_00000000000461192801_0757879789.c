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
static const char *ng0 = "D:/jizu/p6/cpup6/NPC.v";
static int ng1[] = {8, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {14, 0};
static int ng4[] = {4, 0};



static void Cont_37_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 4792);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 4696);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_40_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t18[8];
    char t19[8];
    char t29[8];
    char t33[8];
    char t41[8];
    char t46[8];
    char t47[8];
    char t62[8];
    char t63[8];
    char t73[8];
    char t77[8];
    char t85[8];
    char t90[8];
    char t91[8];
    char t106[8];
    char t107[8];
    char t117[8];
    char t121[8];
    char t129[8];
    char t134[8];
    char t135[8];
    char t150[8];
    char t151[8];
    char t161[8];
    char t165[8];
    char t173[8];
    char t178[8];
    char t179[8];
    char t194[8];
    char t195[8];
    char t205[8];
    char t209[8];
    char t217[8];
    char t222[8];
    char t223[8];
    char t238[8];
    char t239[8];
    char t249[8];
    char t253[8];
    char t261[8];
    char t266[8];
    char t267[8];
    char t286[8];
    char t287[8];
    char t299[8];
    char t303[8];
    char t318[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t74;
    char *t75;
    char *t76;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t118;
    char *t119;
    char *t120;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    char *t152;
    char *t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t162;
    char *t163;
    char *t164;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t180;
    char *t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    char *t187;
    char *t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;
    char *t196;
    char *t197;
    char *t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t206;
    char *t207;
    char *t208;
    char *t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    char *t224;
    char *t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    char *t231;
    char *t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    char *t236;
    char *t237;
    char *t240;
    char *t241;
    char *t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    char *t250;
    char *t251;
    char *t252;
    char *t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    char *t268;
    char *t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    char *t275;
    char *t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    char *t280;
    char *t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    char *t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    char *t294;
    char *t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    char *t300;
    char *t301;
    char *t302;
    char *t304;
    char *t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    char *t316;
    char *t317;
    char *t319;
    char *t320;
    char *t321;
    char *t322;
    char *t323;
    char *t324;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t42 = *((unsigned int *)t4);
    t43 = (~(t42));
    t44 = *((unsigned int *)t12);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t46, 8);

LAB16:    t319 = (t0 + 4856);
    t320 = (t319 + 56U);
    t321 = *((char **)t320);
    t322 = (t321 + 56U);
    t323 = *((char **)t322);
    memcpy(t323, t3, 8);
    xsi_driver_vfirst_trans(t319, 0, 31);
    t324 = (t0 + 4712);
    *((int *)t324) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 1208U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng2)));
    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t19 + 4);
    t22 = (t21 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (t23 >> 0);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 0);
    *((unsigned int *)t20) = t26;
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 65535U);
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t28 & 65535U);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 1048U);
    t32 = *((char **)t31);
    memset(t33, 0, 8);
    t31 = (t33 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 15);
    t37 = (t36 & 1);
    *((unsigned int *)t33) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 15);
    t40 = (t39 & 1);
    *((unsigned int *)t31) = t40;
    xsi_vlog_mul_concat(t29, 14, 1, t30, 1U, t33, 1);
    xsi_vlogtype_concat(t18, 32, 32, 3U, t29, 14, t19, 16, t16, 2);
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 32, t17, 32, t18, 32);
    goto LAB9;

LAB10:    t48 = (t0 + 2008U);
    t49 = *((char **)t48);
    memset(t47, 0, 8);
    t48 = (t49 + 4);
    t50 = *((unsigned int *)t48);
    t51 = (~(t50));
    t52 = *((unsigned int *)t49);
    t53 = (t52 & t51);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t48) != 0)
        goto LAB19;

LAB20:    t56 = (t47 + 4);
    t57 = *((unsigned int *)t47);
    t58 = *((unsigned int *)t56);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB21;

LAB22:    t86 = *((unsigned int *)t47);
    t87 = (~(t86));
    t88 = *((unsigned int *)t56);
    t89 = (t87 || t88);
    if (t89 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t56) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t47) > 0)
        goto LAB27;

LAB28:    memcpy(t46, t90, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t41, 32, t46, 32);
    goto LAB16;

LAB14:    memcpy(t3, t41, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t47) = 1;
    goto LAB20;

LAB19:    t55 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB20;

LAB21:    t60 = (t0 + 1208U);
    t61 = *((char **)t60);
    t60 = ((char*)((ng2)));
    t64 = (t0 + 1048U);
    t65 = *((char **)t64);
    memset(t63, 0, 8);
    t64 = (t63 + 4);
    t66 = (t65 + 4);
    t67 = *((unsigned int *)t65);
    t68 = (t67 >> 0);
    *((unsigned int *)t63) = t68;
    t69 = *((unsigned int *)t66);
    t70 = (t69 >> 0);
    *((unsigned int *)t64) = t70;
    t71 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t71 & 65535U);
    t72 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t72 & 65535U);
    t74 = ((char*)((ng3)));
    t75 = (t0 + 1048U);
    t76 = *((char **)t75);
    memset(t77, 0, 8);
    t75 = (t77 + 4);
    t78 = (t76 + 4);
    t79 = *((unsigned int *)t76);
    t80 = (t79 >> 15);
    t81 = (t80 & 1);
    *((unsigned int *)t77) = t81;
    t82 = *((unsigned int *)t78);
    t83 = (t82 >> 15);
    t84 = (t83 & 1);
    *((unsigned int *)t75) = t84;
    xsi_vlog_mul_concat(t73, 14, 1, t74, 1U, t77, 1);
    xsi_vlogtype_concat(t62, 32, 32, 3U, t73, 14, t63, 16, t60, 2);
    memset(t85, 0, 8);
    xsi_vlog_unsigned_add(t85, 32, t61, 32, t62, 32);
    goto LAB22;

LAB23:    t92 = (t0 + 2168U);
    t93 = *((char **)t92);
    memset(t91, 0, 8);
    t92 = (t93 + 4);
    t94 = *((unsigned int *)t92);
    t95 = (~(t94));
    t96 = *((unsigned int *)t93);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t92) != 0)
        goto LAB32;

LAB33:    t100 = (t91 + 4);
    t101 = *((unsigned int *)t91);
    t102 = *((unsigned int *)t100);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB34;

LAB35:    t130 = *((unsigned int *)t91);
    t131 = (~(t130));
    t132 = *((unsigned int *)t100);
    t133 = (t131 || t132);
    if (t133 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t100) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t91) > 0)
        goto LAB40;

LAB41:    memcpy(t90, t134, 8);

LAB42:    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t46, 32, t85, 32, t90, 32);
    goto LAB29;

LAB27:    memcpy(t46, t85, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t91) = 1;
    goto LAB33;

LAB32:    t99 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB33;

LAB34:    t104 = (t0 + 1208U);
    t105 = *((char **)t104);
    t104 = ((char*)((ng2)));
    t108 = (t0 + 1048U);
    t109 = *((char **)t108);
    memset(t107, 0, 8);
    t108 = (t107 + 4);
    t110 = (t109 + 4);
    t111 = *((unsigned int *)t109);
    t112 = (t111 >> 0);
    *((unsigned int *)t107) = t112;
    t113 = *((unsigned int *)t110);
    t114 = (t113 >> 0);
    *((unsigned int *)t108) = t114;
    t115 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t115 & 65535U);
    t116 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t116 & 65535U);
    t118 = ((char*)((ng3)));
    t119 = (t0 + 1048U);
    t120 = *((char **)t119);
    memset(t121, 0, 8);
    t119 = (t121 + 4);
    t122 = (t120 + 4);
    t123 = *((unsigned int *)t120);
    t124 = (t123 >> 15);
    t125 = (t124 & 1);
    *((unsigned int *)t121) = t125;
    t126 = *((unsigned int *)t122);
    t127 = (t126 >> 15);
    t128 = (t127 & 1);
    *((unsigned int *)t119) = t128;
    xsi_vlog_mul_concat(t117, 14, 1, t118, 1U, t121, 1);
    xsi_vlogtype_concat(t106, 32, 32, 3U, t117, 14, t107, 16, t104, 2);
    memset(t129, 0, 8);
    xsi_vlog_unsigned_add(t129, 32, t105, 32, t106, 32);
    goto LAB35;

LAB36:    t136 = (t0 + 2328U);
    t137 = *((char **)t136);
    memset(t135, 0, 8);
    t136 = (t137 + 4);
    t138 = *((unsigned int *)t136);
    t139 = (~(t138));
    t140 = *((unsigned int *)t137);
    t141 = (t140 & t139);
    t142 = (t141 & 1U);
    if (t142 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t136) != 0)
        goto LAB45;

LAB46:    t144 = (t135 + 4);
    t145 = *((unsigned int *)t135);
    t146 = *((unsigned int *)t144);
    t147 = (t145 || t146);
    if (t147 > 0)
        goto LAB47;

LAB48:    t174 = *((unsigned int *)t135);
    t175 = (~(t174));
    t176 = *((unsigned int *)t144);
    t177 = (t175 || t176);
    if (t177 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t144) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t135) > 0)
        goto LAB53;

LAB54:    memcpy(t134, t178, 8);

LAB55:    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t90, 32, t129, 32, t134, 32);
    goto LAB42;

LAB40:    memcpy(t90, t129, 8);
    goto LAB42;

LAB43:    *((unsigned int *)t135) = 1;
    goto LAB46;

LAB45:    t143 = (t135 + 4);
    *((unsigned int *)t135) = 1;
    *((unsigned int *)t143) = 1;
    goto LAB46;

LAB47:    t148 = (t0 + 1208U);
    t149 = *((char **)t148);
    t148 = ((char*)((ng2)));
    t152 = (t0 + 1048U);
    t153 = *((char **)t152);
    memset(t151, 0, 8);
    t152 = (t151 + 4);
    t154 = (t153 + 4);
    t155 = *((unsigned int *)t153);
    t156 = (t155 >> 0);
    *((unsigned int *)t151) = t156;
    t157 = *((unsigned int *)t154);
    t158 = (t157 >> 0);
    *((unsigned int *)t152) = t158;
    t159 = *((unsigned int *)t151);
    *((unsigned int *)t151) = (t159 & 65535U);
    t160 = *((unsigned int *)t152);
    *((unsigned int *)t152) = (t160 & 65535U);
    t162 = ((char*)((ng3)));
    t163 = (t0 + 1048U);
    t164 = *((char **)t163);
    memset(t165, 0, 8);
    t163 = (t165 + 4);
    t166 = (t164 + 4);
    t167 = *((unsigned int *)t164);
    t168 = (t167 >> 15);
    t169 = (t168 & 1);
    *((unsigned int *)t165) = t169;
    t170 = *((unsigned int *)t166);
    t171 = (t170 >> 15);
    t172 = (t171 & 1);
    *((unsigned int *)t163) = t172;
    xsi_vlog_mul_concat(t161, 14, 1, t162, 1U, t165, 1);
    xsi_vlogtype_concat(t150, 32, 32, 3U, t161, 14, t151, 16, t148, 2);
    memset(t173, 0, 8);
    xsi_vlog_unsigned_add(t173, 32, t149, 32, t150, 32);
    goto LAB48;

LAB49:    t180 = (t0 + 2488U);
    t181 = *((char **)t180);
    memset(t179, 0, 8);
    t180 = (t181 + 4);
    t182 = *((unsigned int *)t180);
    t183 = (~(t182));
    t184 = *((unsigned int *)t181);
    t185 = (t184 & t183);
    t186 = (t185 & 1U);
    if (t186 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t180) != 0)
        goto LAB58;

LAB59:    t188 = (t179 + 4);
    t189 = *((unsigned int *)t179);
    t190 = *((unsigned int *)t188);
    t191 = (t189 || t190);
    if (t191 > 0)
        goto LAB60;

LAB61:    t218 = *((unsigned int *)t179);
    t219 = (~(t218));
    t220 = *((unsigned int *)t188);
    t221 = (t219 || t220);
    if (t221 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t188) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t179) > 0)
        goto LAB66;

LAB67:    memcpy(t178, t222, 8);

LAB68:    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t134, 32, t173, 32, t178, 32);
    goto LAB55;

LAB53:    memcpy(t134, t173, 8);
    goto LAB55;

LAB56:    *((unsigned int *)t179) = 1;
    goto LAB59;

LAB58:    t187 = (t179 + 4);
    *((unsigned int *)t179) = 1;
    *((unsigned int *)t187) = 1;
    goto LAB59;

LAB60:    t192 = (t0 + 1208U);
    t193 = *((char **)t192);
    t192 = ((char*)((ng2)));
    t196 = (t0 + 1048U);
    t197 = *((char **)t196);
    memset(t195, 0, 8);
    t196 = (t195 + 4);
    t198 = (t197 + 4);
    t199 = *((unsigned int *)t197);
    t200 = (t199 >> 0);
    *((unsigned int *)t195) = t200;
    t201 = *((unsigned int *)t198);
    t202 = (t201 >> 0);
    *((unsigned int *)t196) = t202;
    t203 = *((unsigned int *)t195);
    *((unsigned int *)t195) = (t203 & 65535U);
    t204 = *((unsigned int *)t196);
    *((unsigned int *)t196) = (t204 & 65535U);
    t206 = ((char*)((ng3)));
    t207 = (t0 + 1048U);
    t208 = *((char **)t207);
    memset(t209, 0, 8);
    t207 = (t209 + 4);
    t210 = (t208 + 4);
    t211 = *((unsigned int *)t208);
    t212 = (t211 >> 15);
    t213 = (t212 & 1);
    *((unsigned int *)t209) = t213;
    t214 = *((unsigned int *)t210);
    t215 = (t214 >> 15);
    t216 = (t215 & 1);
    *((unsigned int *)t207) = t216;
    xsi_vlog_mul_concat(t205, 14, 1, t206, 1U, t209, 1);
    xsi_vlogtype_concat(t194, 32, 32, 3U, t205, 14, t195, 16, t192, 2);
    memset(t217, 0, 8);
    xsi_vlog_unsigned_add(t217, 32, t193, 32, t194, 32);
    goto LAB61;

LAB62:    t224 = (t0 + 2648U);
    t225 = *((char **)t224);
    memset(t223, 0, 8);
    t224 = (t225 + 4);
    t226 = *((unsigned int *)t224);
    t227 = (~(t226));
    t228 = *((unsigned int *)t225);
    t229 = (t228 & t227);
    t230 = (t229 & 1U);
    if (t230 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t224) != 0)
        goto LAB71;

LAB72:    t232 = (t223 + 4);
    t233 = *((unsigned int *)t223);
    t234 = *((unsigned int *)t232);
    t235 = (t233 || t234);
    if (t235 > 0)
        goto LAB73;

LAB74:    t262 = *((unsigned int *)t223);
    t263 = (~(t262));
    t264 = *((unsigned int *)t232);
    t265 = (t263 || t264);
    if (t265 > 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t232) > 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t223) > 0)
        goto LAB79;

LAB80:    memcpy(t222, t266, 8);

LAB81:    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t178, 32, t217, 32, t222, 32);
    goto LAB68;

LAB66:    memcpy(t178, t217, 8);
    goto LAB68;

LAB69:    *((unsigned int *)t223) = 1;
    goto LAB72;

LAB71:    t231 = (t223 + 4);
    *((unsigned int *)t223) = 1;
    *((unsigned int *)t231) = 1;
    goto LAB72;

LAB73:    t236 = (t0 + 1208U);
    t237 = *((char **)t236);
    t236 = ((char*)((ng2)));
    t240 = (t0 + 1048U);
    t241 = *((char **)t240);
    memset(t239, 0, 8);
    t240 = (t239 + 4);
    t242 = (t241 + 4);
    t243 = *((unsigned int *)t241);
    t244 = (t243 >> 0);
    *((unsigned int *)t239) = t244;
    t245 = *((unsigned int *)t242);
    t246 = (t245 >> 0);
    *((unsigned int *)t240) = t246;
    t247 = *((unsigned int *)t239);
    *((unsigned int *)t239) = (t247 & 65535U);
    t248 = *((unsigned int *)t240);
    *((unsigned int *)t240) = (t248 & 65535U);
    t250 = ((char*)((ng3)));
    t251 = (t0 + 1048U);
    t252 = *((char **)t251);
    memset(t253, 0, 8);
    t251 = (t253 + 4);
    t254 = (t252 + 4);
    t255 = *((unsigned int *)t252);
    t256 = (t255 >> 15);
    t257 = (t256 & 1);
    *((unsigned int *)t253) = t257;
    t258 = *((unsigned int *)t254);
    t259 = (t258 >> 15);
    t260 = (t259 & 1);
    *((unsigned int *)t251) = t260;
    xsi_vlog_mul_concat(t249, 14, 1, t250, 1U, t253, 1);
    xsi_vlogtype_concat(t238, 32, 32, 3U, t249, 14, t239, 16, t236, 2);
    memset(t261, 0, 8);
    xsi_vlog_unsigned_add(t261, 32, t237, 32, t238, 32);
    goto LAB74;

LAB75:    t268 = (t0 + 1848U);
    t269 = *((char **)t268);
    memset(t267, 0, 8);
    t268 = (t269 + 4);
    t270 = *((unsigned int *)t268);
    t271 = (~(t270));
    t272 = *((unsigned int *)t269);
    t273 = (t272 & t271);
    t274 = (t273 & 1U);
    if (t274 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t268) != 0)
        goto LAB84;

LAB85:    t276 = (t267 + 4);
    t277 = *((unsigned int *)t267);
    t278 = *((unsigned int *)t276);
    t279 = (t277 || t278);
    if (t279 > 0)
        goto LAB86;

LAB87:    t282 = *((unsigned int *)t267);
    t283 = (~(t282));
    t284 = *((unsigned int *)t276);
    t285 = (t283 || t284);
    if (t285 > 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t276) > 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t267) > 0)
        goto LAB92;

LAB93:    memcpy(t266, t286, 8);

LAB94:    goto LAB76;

LAB77:    xsi_vlog_unsigned_bit_combine(t222, 32, t261, 32, t266, 32);
    goto LAB81;

LAB79:    memcpy(t222, t261, 8);
    goto LAB81;

LAB82:    *((unsigned int *)t267) = 1;
    goto LAB85;

LAB84:    t275 = (t267 + 4);
    *((unsigned int *)t267) = 1;
    *((unsigned int *)t275) = 1;
    goto LAB85;

LAB86:    t280 = (t0 + 1368U);
    t281 = *((char **)t280);
    goto LAB87;

LAB88:    t280 = (t0 + 1688U);
    t288 = *((char **)t280);
    memset(t287, 0, 8);
    t280 = (t288 + 4);
    t289 = *((unsigned int *)t280);
    t290 = (~(t289));
    t291 = *((unsigned int *)t288);
    t292 = (t291 & t290);
    t293 = (t292 & 1U);
    if (t293 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t280) != 0)
        goto LAB97;

LAB98:    t295 = (t287 + 4);
    t296 = *((unsigned int *)t287);
    t297 = *((unsigned int *)t295);
    t298 = (t296 || t297);
    if (t298 > 0)
        goto LAB99;

LAB100:    t312 = *((unsigned int *)t287);
    t313 = (~(t312));
    t314 = *((unsigned int *)t295);
    t315 = (t313 || t314);
    if (t315 > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t295) > 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t287) > 0)
        goto LAB105;

LAB106:    memcpy(t286, t318, 8);

LAB107:    goto LAB89;

LAB90:    xsi_vlog_unsigned_bit_combine(t266, 32, t281, 32, t286, 32);
    goto LAB94;

LAB92:    memcpy(t266, t281, 8);
    goto LAB94;

LAB95:    *((unsigned int *)t287) = 1;
    goto LAB98;

LAB97:    t294 = (t287 + 4);
    *((unsigned int *)t287) = 1;
    *((unsigned int *)t294) = 1;
    goto LAB98;

LAB99:    t300 = ((char*)((ng2)));
    t301 = (t0 + 1048U);
    t302 = *((char **)t301);
    t301 = (t0 + 1208U);
    t304 = *((char **)t301);
    memset(t303, 0, 8);
    t301 = (t303 + 4);
    t305 = (t304 + 4);
    t306 = *((unsigned int *)t304);
    t307 = (t306 >> 28);
    *((unsigned int *)t303) = t307;
    t308 = *((unsigned int *)t305);
    t309 = (t308 >> 28);
    *((unsigned int *)t301) = t309;
    t310 = *((unsigned int *)t303);
    *((unsigned int *)t303) = (t310 & 15U);
    t311 = *((unsigned int *)t301);
    *((unsigned int *)t301) = (t311 & 15U);
    xsi_vlogtype_concat(t299, 32, 32, 3U, t303, 4, t302, 26, t300, 2);
    goto LAB100;

LAB101:    t316 = (t0 + 1208U);
    t317 = *((char **)t316);
    t316 = ((char*)((ng4)));
    memset(t318, 0, 8);
    xsi_vlog_unsigned_add(t318, 32, t317, 32, t316, 32);
    goto LAB102;

LAB103:    xsi_vlog_unsigned_bit_combine(t286, 32, t299, 32, t318, 32);
    goto LAB107;

LAB105:    memcpy(t286, t299, 8);
    goto LAB107;

}


extern void work_m_00000000000461192801_0757879789_init()
{
	static char *pe[] = {(void *)Cont_37_0,(void *)Cont_40_1};
	xsi_register_didat("work_m_00000000000461192801_0757879789", "isim/mips_isim_beh.exe.sim/work/m_00000000000461192801_0757879789.didat");
	xsi_register_executes(pe);
}
