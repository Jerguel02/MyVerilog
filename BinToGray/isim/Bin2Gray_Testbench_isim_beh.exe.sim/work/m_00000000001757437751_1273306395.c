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
static const char *ng0 = "D:/Verilog/MyVerilog/BinToGray/Bin2Gray.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static int sp_CONVERSION(char *t1, char *t2)
{
    char t7[8];
    char t19[8];
    char t28[8];
    char t36[8];
    char t46[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    int t45;
    char *t47;
    char *t48;
    char *t49;

LAB0:    t0 = 1;
    xsi_set_current_line(39, ng0);
    xsi_set_current_line(39, ng0);
    t3 = (t1 + 472);
    t4 = *((char **)t3);
    t3 = (t1 + 2496);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);

LAB2:    t3 = (t1 + 2496);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_signed_greatereq(t7, 32, t5, 32, t6, 32);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB3;

LAB4:    t0 = 0;

LAB1:    return t0;
LAB3:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t14 = (t1 + 2496);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 472);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    xsi_vlog_signed_equal(t19, 32, t16, 32, t18, 32);
    t17 = (t19 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(41, ng0);

LAB12:    xsi_set_current_line(41, ng0);
    t3 = (t1 + 2336);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 2336);
    t8 = (t6 + 72U);
    t14 = *((char **)t8);
    t15 = (t1 + 2496);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng2)));
    memset(t19, 0, 8);
    xsi_vlog_signed_add(t19, 32, t17, 32, t18, 32);
    xsi_vlog_generic_get_index_select_value(t7, 1, t5, t14, 2, t19, 32, 1);
    t25 = (t1 + 2336);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t29 = (t1 + 2336);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = (t1 + 2496);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_generic_get_index_select_value(t28, 1, t27, t31, 2, t34, 32, 1);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t28);
    t11 = (t9 ^ t10);
    *((unsigned int *)t36) = t11;
    t35 = (t7 + 4);
    t37 = (t28 + 4);
    t38 = (t36 + 4);
    t12 = *((unsigned int *)t35);
    t13 = *((unsigned int *)t37);
    t20 = (t12 | t13);
    *((unsigned int *)t38) = t20;
    t21 = *((unsigned int *)t38);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB13;

LAB14:
LAB15:    t39 = (t1 + 2176);
    t40 = (t1 + 2176);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = (t1 + 2496);
    t47 = (t43 + 56U);
    t48 = *((char **)t47);
    xsi_vlog_generic_convert_bit_index(t46, t42, 2, t48, 32, 1);
    t49 = (t46 + 4);
    t44 = *((unsigned int *)t49);
    t45 = (!(t44));
    if (t45 == 1)
        goto LAB16;

LAB17:
LAB8:    xsi_set_current_line(39, ng0);
    t3 = (t1 + 2496);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t5, 32, t6, 32);
    t8 = (t1 + 2496);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(40, ng0);

LAB9:    xsi_set_current_line(40, ng0);
    t25 = (t1 + 2336);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t29 = (t1 + 2336);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = (t1 + 2496);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_generic_get_index_select_value(t28, 1, t27, t31, 2, t34, 32, 1);
    t35 = (t1 + 2176);
    t37 = (t1 + 2176);
    t38 = (t37 + 72U);
    t39 = *((char **)t38);
    t40 = (t1 + 2496);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    xsi_vlog_generic_convert_bit_index(t36, t39, 2, t42, 32, 1);
    t43 = (t36 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (!(t44));
    if (t45 == 1)
        goto LAB10;

LAB11:    goto LAB8;

LAB10:    xsi_vlogvar_assign_value(t35, t28, 0, *((unsigned int *)t36), 1);
    goto LAB11;

LAB13:    t23 = *((unsigned int *)t36);
    t24 = *((unsigned int *)t38);
    *((unsigned int *)t36) = (t23 | t24);
    goto LAB15;

LAB16:    xsi_vlogvar_assign_value(t39, t36, 0, *((unsigned int *)t46), 1);
    goto LAB17;

}

static void Always_32_0(char *t0)
{
    char t21[8];
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1616U);
    t5 = *((char **)t4);
    t4 = (t0 + 3224);
    t6 = (t0 + 984);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t6, 0, 0);
    t8 = (t0 + 2336);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 4);

LAB6:    t9 = (t0 + 3320);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);
    if (t17 != 0)
        goto LAB8;

LAB7:    t10 = (t0 + 3320);
    t18 = *((char **)t10);
    t10 = (t0 + 2176);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 8);
    t22 = (t0 + 984);
    t23 = (t0 + 3224);
    t24 = 0;
    xsi_delete_subprogram_invocation(t22, t18, t0, t23, t24);
    t25 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t25, t21, 0, 0, 4, 0LL);
    goto LAB2;

LAB8:    t9 = (t0 + 3416U);
    *((char **)t9) = &&LAB6;
    goto LAB1;

}


extern void work_m_00000000001757437751_1273306395_init()
{
	static char *pe[] = {(void *)Always_32_0};
	static char *se[] = {(void *)sp_CONVERSION};
	xsi_register_didat("work_m_00000000001757437751_1273306395", "isim/Bin2Gray_Testbench_isim_beh.exe.sim/work/m_00000000001757437751_1273306395.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
