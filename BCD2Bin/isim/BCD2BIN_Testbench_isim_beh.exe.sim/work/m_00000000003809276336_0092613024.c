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
static const char *ng0 = "D:/Verilog/MyVerilog/BCD2Bin/BCD2Bin.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Always_34_0(char *t0)
{
    char t7[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;

LAB0:    t1 = (t0 + 2984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3304);
    *((int *)t2) = 1;
    t3 = (t0 + 3016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 9);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t7, t4, 8);
    t5 = (t0 + 1584);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 16);
    goto LAB2;

LAB7:    xsi_set_current_line(38, ng0);

LAB9:    xsi_set_current_line(39, ng0);
    t13 = (t0 + 1744);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng2)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_lshift(t17, 9, t15, 9, t16, 32);
    t18 = (t0 + 1744);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 9);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = (t0 + 1144U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2064);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_index_select_value(t7, 1, t3, t5, 2, t14, 32, 1);
    t15 = (t0 + 1744);
    t16 = (t0 + 1744);
    t18 = (t16 + 72U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t17, t19, 2, t20, 32, 1);
    t21 = (t17 + 4);
    t8 = *((unsigned int *)t21);
    t22 = (!(t8));
    if (t22 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1904);
    t6 = (t5 + 56U);
    t13 = *((char **)t6);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 10, t4, 9, t13, 1);
    t14 = (t0 + 1744);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 9);
    t15 = (t0 + 1904);
    xsi_vlogvar_assign_value(t15, t7, 9, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2064);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB6;

LAB10:    xsi_vlogvar_assign_value(t15, t7, 0, *((unsigned int *)t17), 1);
    goto LAB11;

}


extern void work_m_00000000003809276336_0092613024_init()
{
	static char *pe[] = {(void *)Always_34_0};
	xsi_register_didat("work_m_00000000003809276336_0092613024", "isim/BCD2BIN_Testbench_isim_beh.exe.sim/work/m_00000000003809276336_0092613024.didat");
	xsi_register_executes(pe);
}
