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
static const char *ng0 = "D:/Verilog/MyVerilog/Bin2BCD/Bin2BCD.v";
static int ng1[] = {0, 0};
static int ng2[] = {4, 0};
static int ng3[] = {3, 0};
static int ng4[] = {1, 0};
static int ng5[] = {7, 0};
static unsigned int ng6[] = {3U, 0U};



static void Always_29_0(char *t0)
{
    char t8[8];
    char t10[8];
    char t11[8];
    char t12[8];
    char t21[8];
    char t43[8];
    char t46[8];
    char t55[8];
    char t66[8];
    char t71[8];
    char t72[8];
    char t75[8];
    char t77[8];
    char t78[8];
    char t79[8];
    char t87[8];
    char t92[8];
    char t93[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t73;
    char *t74;
    char *t76;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t94;
    char *t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;

LAB0:    t1 = (t0 + 2824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3144);
    *((int *)t2) = 1;
    t3 = (t0 + 2856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    xsi_set_current_line(30, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t2 = (t0 + 1744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t5 = (t0 + 472);
    t7 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t7, 32, t5, 32);
    t9 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_divide(t10, 32, t8, 32, t9, 32);
    memset(t11, 0, 8);
    xsi_vlog_signed_add(t11, 32, t6, 32, t10, 32);
    memset(t12, 0, 8);
    xsi_vlog_signed_leq(t12, 32, t4, 32, t11, 32);
    t13 = (t12 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = (t0 + 1584);
    t4 = (t0 + 1584);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    t9 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t8, t10, t11, ((int*)(t6)), 2, t7, 32, 1, t9, 32, 1);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t13);
    t30 = (!(t14));
    t19 = (t10 + 4);
    t15 = *((unsigned int *)t19);
    t31 = (!(t15));
    t32 = (t30 && t31);
    t20 = (t11 + 4);
    t16 = *((unsigned int *)t20);
    t33 = (!(t16));
    t34 = (t32 && t33);
    if (t34 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(32, ng0);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB13:    t2 = (t0 + 1744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t6, 32, t5, 32);
    memset(t10, 0, 8);
    xsi_vlog_signed_leq(t10, 32, t4, 32, t8, 32);
    t7 = (t10 + 4);
    t14 = *((unsigned int *)t7);
    t15 = (~(t14));
    t16 = *((unsigned int *)t10);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB14;

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(30, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 1584);
    t22 = (t0 + 1584);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 1744);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_bit_index(t21, t24, 2, t27, 32, 1);
    t28 = (t21 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    if (t30 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 1744);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB6;

LAB9:    xsi_vlogvar_assign_value(t20, t19, 0, *((unsigned int *)t21), 1);
    goto LAB10;

LAB11:    t17 = *((unsigned int *)t11);
    t35 = (t17 + 0);
    t18 = *((unsigned int *)t8);
    t29 = *((unsigned int *)t10);
    t36 = (t18 - t29);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t2, t3, t35, *((unsigned int *)t10), t37);
    goto LAB12;

LAB14:    xsi_set_current_line(33, ng0);
    xsi_set_current_line(33, ng0);
    t9 = ((char*)((ng1)));
    t13 = (t0 + 1904);
    xsi_vlogvar_assign_value(t13, t9, 0, 0, 32);

LAB16:    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1744);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_divide(t8, 32, t7, 32, t9, 32);
    memset(t10, 0, 8);
    xsi_vlog_signed_leq(t10, 32, t4, 32, t8, 32);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t10);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 1744);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB13;

LAB17:    xsi_set_current_line(34, ng0);
    t19 = (t0 + 1584);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    t23 = (t0 + 1584);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 472);
    t27 = *((char **)t26);
    t26 = (t0 + 1744);
    t28 = (t26 + 56U);
    t38 = *((char **)t28);
    memset(t12, 0, 8);
    xsi_vlog_signed_minus(t12, 32, t27, 32, t38, 32);
    t39 = ((char*)((ng2)));
    t40 = (t0 + 1904);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memset(t21, 0, 8);
    xsi_vlog_signed_multiply(t21, 32, t39, 32, t42, 32);
    memset(t43, 0, 8);
    xsi_vlog_signed_add(t43, 32, t12, 32, t21, 32);
    t44 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t11, 32, t22, ((int*)(t25)), 2, t43, 32, 1, t44, 32, 1, 0);
    t45 = ((char*)((ng2)));
    memset(t46, 0, 8);
    t47 = (t11 + 4);
    if (*((unsigned int *)t47) != 0)
        goto LAB20;

LAB19:    t48 = (t45 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB20;

LAB23:    if (*((unsigned int *)t11) > *((unsigned int *)t45))
        goto LAB21;

LAB22:    t50 = (t46 + 4);
    t29 = *((unsigned int *)t50);
    t51 = (~(t29));
    t52 = *((unsigned int *)t46);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 1904);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB16;

LAB20:    t49 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB22;

LAB21:    *((unsigned int *)t46) = 1;
    goto LAB22;

LAB24:    xsi_set_current_line(35, ng0);
    t56 = (t0 + 1584);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t0 + 1584);
    t60 = (t59 + 72U);
    t61 = *((char **)t60);
    t62 = (t0 + 472);
    t63 = *((char **)t62);
    t62 = (t0 + 1744);
    t64 = (t62 + 56U);
    t65 = *((char **)t64);
    memset(t66, 0, 8);
    xsi_vlog_signed_minus(t66, 32, t63, 32, t65, 32);
    t67 = ((char*)((ng2)));
    t68 = (t0 + 1904);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    memset(t71, 0, 8);
    xsi_vlog_signed_multiply(t71, 32, t67, 32, t70, 32);
    memset(t72, 0, 8);
    xsi_vlog_signed_add(t72, 32, t66, 32, t71, 32);
    t73 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t55, 4, t58, ((int*)(t61)), 2, t72, 32, 1, t73, 32, 1, 0);
    t74 = ((char*)((ng6)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_add(t75, 4, t55, 4, t74, 4);
    t76 = (t0 + 1584);
    t80 = (t0 + 1584);
    t81 = (t80 + 72U);
    t82 = *((char **)t81);
    t83 = (t0 + 472);
    t84 = *((char **)t83);
    t83 = (t0 + 1744);
    t85 = (t83 + 56U);
    t86 = *((char **)t85);
    memset(t87, 0, 8);
    xsi_vlog_signed_minus(t87, 32, t84, 32, t86, 32);
    t88 = ((char*)((ng2)));
    t89 = (t0 + 1904);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    memset(t92, 0, 8);
    xsi_vlog_signed_multiply(t92, 32, t88, 32, t91, 32);
    memset(t93, 0, 8);
    xsi_vlog_signed_add(t93, 32, t87, 32, t92, 32);
    t94 = ((char*)((ng2)));
    xsi_vlog_convert_indexed_partindices(t77, t78, t79, ((int*)(t82)), 2, t93, 32, 1, t94, 32, 1, 0);
    t95 = (t77 + 4);
    t96 = *((unsigned int *)t95);
    t30 = (!(t96));
    t97 = (t78 + 4);
    t98 = *((unsigned int *)t97);
    t31 = (!(t98));
    t32 = (t30 && t31);
    t99 = (t79 + 4);
    t100 = *((unsigned int *)t99);
    t33 = (!(t100));
    t34 = (t32 && t33);
    if (t34 == 1)
        goto LAB27;

LAB28:    goto LAB26;

LAB27:    t101 = *((unsigned int *)t79);
    t35 = (t101 + 0);
    t102 = *((unsigned int *)t77);
    t103 = *((unsigned int *)t78);
    t36 = (t102 - t103);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t76, t75, t35, *((unsigned int *)t78), t37);
    goto LAB28;

}


extern void work_m_00000000000366520507_2618506667_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000000366520507_2618506667", "isim/Bin2BCD_Testbench_isim_beh.exe.sim/work/m_00000000000366520507_2618506667.didat");
	xsi_register_executes(pe);
}
