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
static const char *ng0 = "D:/Verilog/Is31Days/Is31Days.v";



static void Cont_25_0(char *t0)
{
    char t5[8];
    char t21[8];
    char t39[8];
    char t58[8];
    char t90[8];
    char t91[8];
    char t123[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t18 = (t0 + 1048U);
    t19 = *((char **)t18);
    t18 = (t0 + 1208U);
    t20 = *((char **)t18);
    t18 = (t0 + 1368U);
    t22 = *((char **)t18);
    memset(t21, 0, 8);
    t18 = (t22 + 4);
    t23 = *((unsigned int *)t18);
    t24 = (~(t23));
    t25 = *((unsigned int *)t22);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t18) == 0)
        goto LAB7;

LAB9:    t28 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t28) = 1;

LAB10:    t29 = (t21 + 4);
    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (~(t31));
    *((unsigned int *)t21) = t32;
    *((unsigned int *)t29) = 0;
    if (*((unsigned int *)t30) != 0)
        goto LAB12;

LAB11:    t37 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t37 & 1U);
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 1U);
    t40 = (t0 + 1528U);
    t41 = *((char **)t40);
    memset(t39, 0, 8);
    t40 = (t41 + 4);
    t42 = *((unsigned int *)t40);
    t43 = (~(t42));
    t44 = *((unsigned int *)t41);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t40) == 0)
        goto LAB13;

LAB15:    t47 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t47) = 1;

LAB16:    t48 = (t39 + 4);
    t49 = (t41 + 4);
    t50 = *((unsigned int *)t41);
    t51 = (~(t50));
    *((unsigned int *)t39) = t51;
    *((unsigned int *)t48) = 0;
    if (*((unsigned int *)t49) != 0)
        goto LAB18;

LAB17:    t56 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t56 & 1U);
    t57 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t57 & 1U);
    t59 = *((unsigned int *)t21);
    t60 = *((unsigned int *)t39);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t21 + 4);
    t63 = (t39 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB19;

LAB20:
LAB21:    memset(t90, 0, 8);
    xsi_vlog_unsigned_add(t90, 1, t20, 1, t58, 1);
    t92 = *((unsigned int *)t19);
    t93 = *((unsigned int *)t90);
    t94 = (t92 & t93);
    *((unsigned int *)t91) = t94;
    t95 = (t19 + 4);
    t96 = (t90 + 4);
    t97 = (t91 + 4);
    t98 = *((unsigned int *)t95);
    t99 = *((unsigned int *)t96);
    t100 = (t98 | t99);
    *((unsigned int *)t97) = t100;
    t101 = *((unsigned int *)t97);
    t102 = (t101 != 0);
    if (t102 == 1)
        goto LAB22;

LAB23:
LAB24:    t124 = *((unsigned int *)t5);
    t125 = *((unsigned int *)t91);
    t126 = (t124 | t125);
    *((unsigned int *)t123) = t126;
    t127 = (t5 + 4);
    t128 = (t91 + 4);
    t129 = (t123 + 4);
    t130 = *((unsigned int *)t127);
    t131 = *((unsigned int *)t128);
    t132 = (t130 | t131);
    *((unsigned int *)t129) = t132;
    t133 = *((unsigned int *)t129);
    t134 = (t133 != 0);
    if (t134 == 1)
        goto LAB25;

LAB26:
LAB27:    t151 = (t0 + 3248);
    t152 = (t151 + 56U);
    t153 = *((char **)t152);
    t154 = (t153 + 56U);
    t155 = *((char **)t154);
    memset(t155, 0, 8);
    t156 = 1U;
    t157 = t156;
    t158 = (t123 + 4);
    t159 = *((unsigned int *)t123);
    t156 = (t156 & t159);
    t160 = *((unsigned int *)t158);
    t157 = (t157 & t160);
    t161 = (t155 + 4);
    t162 = *((unsigned int *)t155);
    *((unsigned int *)t155) = (t162 | t156);
    t163 = *((unsigned int *)t161);
    *((unsigned int *)t161) = (t163 | t157);
    xsi_driver_vfirst_trans(t151, 0, 0);
    t164 = (t0 + 3168);
    *((int *)t164) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    goto LAB6;

LAB7:    *((unsigned int *)t21) = 1;
    goto LAB10;

LAB12:    t33 = *((unsigned int *)t21);
    t34 = *((unsigned int *)t30);
    *((unsigned int *)t21) = (t33 | t34);
    t35 = *((unsigned int *)t29);
    t36 = *((unsigned int *)t30);
    *((unsigned int *)t29) = (t35 | t36);
    goto LAB11;

LAB13:    *((unsigned int *)t39) = 1;
    goto LAB16;

LAB18:    t52 = *((unsigned int *)t39);
    t53 = *((unsigned int *)t49);
    *((unsigned int *)t39) = (t52 | t53);
    t54 = *((unsigned int *)t48);
    t55 = *((unsigned int *)t49);
    *((unsigned int *)t48) = (t54 | t55);
    goto LAB17;

LAB19:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t21 + 4);
    t73 = (t39 + 4);
    t74 = *((unsigned int *)t21);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t39);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB21;

LAB22:    t103 = *((unsigned int *)t91);
    t104 = *((unsigned int *)t97);
    *((unsigned int *)t91) = (t103 | t104);
    t105 = (t19 + 4);
    t106 = (t90 + 4);
    t107 = *((unsigned int *)t19);
    t108 = (~(t107));
    t109 = *((unsigned int *)t105);
    t110 = (~(t109));
    t111 = *((unsigned int *)t90);
    t112 = (~(t111));
    t113 = *((unsigned int *)t106);
    t114 = (~(t113));
    t115 = (t108 & t110);
    t116 = (t112 & t114);
    t117 = (~(t115));
    t118 = (~(t116));
    t119 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t119 & t117);
    t120 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t120 & t118);
    t121 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t121 & t117);
    t122 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t122 & t118);
    goto LAB24;

LAB25:    t135 = *((unsigned int *)t123);
    t136 = *((unsigned int *)t129);
    *((unsigned int *)t123) = (t135 | t136);
    t137 = (t5 + 4);
    t138 = (t91 + 4);
    t139 = *((unsigned int *)t137);
    t140 = (~(t139));
    t141 = *((unsigned int *)t5);
    t142 = (t141 & t140);
    t143 = *((unsigned int *)t138);
    t144 = (~(t143));
    t145 = *((unsigned int *)t91);
    t146 = (t145 & t144);
    t147 = (~(t142));
    t148 = (~(t146));
    t149 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t149 & t147);
    t150 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t150 & t148);
    goto LAB27;

}


extern void work_m_00000000004027281335_1284137140_init()
{
	static char *pe[] = {(void *)Cont_25_0};
	xsi_register_didat("work_m_00000000004027281335_1284137140", "isim/Is31Days_testbench_isim_beh.exe.sim/work/m_00000000004027281335_1284137140.didat");
	xsi_register_executes(pe);
}
