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
static const char *ng0 = "D:/Verilog/MyVerilog/ALU/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {10U, 0U};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {12U, 0U};
static int ng15[] = {0, 0};
static int ng16[] = {8, 0};
static unsigned int ng17[] = {13U, 0U};
static unsigned int ng18[] = {14U, 0U};
static unsigned int ng19[] = {15U, 0U};
static unsigned int ng20[] = {16U, 0U};
static unsigned int ng21[] = {17U, 0U};
static unsigned int ng22[] = {255U, 0U};



static void Cont_30_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 3936);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 3824);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_31_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 255U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = (t0 + 4000);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 255U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 7);
    t27 = (t0 + 3840);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_32_2(char *t0)
{
    char t10[8];
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;

LAB0:    t1 = (t0 + 3504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3856);
    *((int *)t2) = 1;
    t3 = (t0 + 3536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB41;

LAB42:
LAB44:
LAB43:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);

LAB45:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 9, t8, 8, t9, 8);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 9);
    goto LAB45;

LAB9:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 9, t4, 8, t7, 8);
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 9);
    goto LAB45;

LAB11:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_multiply(t10, 9, t4, 8, t7, 8);
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 9);
    goto LAB45;

LAB13:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_divide(t10, 9, t4, 8, t7, 8);
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 9);
    goto LAB45;

LAB15:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 9, t4, 8, t3, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 9);
    goto LAB45;

LAB17:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 9, t4, 8, t3, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 9);
    goto LAB45;

LAB19:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 7);
    t17 = (t16 & 1);
    *((unsigned int *)t3) = t17;
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    memset(t18, 0, 8);
    t8 = (t18 + 4);
    t19 = (t9 + 4);
    t20 = *((unsigned int *)t9);
    t21 = (t20 >> 0);
    *((unsigned int *)t18) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t8) = t23;
    t24 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t24 & 127U);
    t25 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t25 & 127U);
    xsi_vlogtype_concat(t10, 9, 8, 2U, t18, 7, t11, 1);
    t26 = (t0 + 2088);
    xsi_vlogvar_assign_value(t26, t10, 0, 0, 9);
    goto LAB45;

LAB21:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 1);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 1);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 127U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 127U);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    memset(t18, 0, 8);
    t8 = (t18 + 4);
    t19 = (t9 + 4);
    t20 = *((unsigned int *)t9);
    t21 = (t20 >> 0);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 0);
    t25 = (t24 & 1);
    *((unsigned int *)t8) = t25;
    xsi_vlogtype_concat(t10, 9, 8, 2U, t18, 1, t11, 7);
    t26 = (t0 + 2088);
    xsi_vlogvar_assign_value(t26, t10, 0, 0, 9);
    goto LAB45;

LAB23:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 & t13);
    *((unsigned int *)t10) = t14;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t20 = *((unsigned int *)t9);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB46;

LAB47:
LAB48:    t41 = (t0 + 2088);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 9);
    goto LAB45;

LAB25:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 | t13);
    *((unsigned int *)t10) = t14;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t20 = *((unsigned int *)t9);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB49;

LAB50:
LAB51:    t41 = (t0 + 2088);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 9);
    goto LAB45;

LAB27:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (~(t12));
    *((unsigned int *)t10) = t13;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB53;

LAB52:    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 511U);
    t21 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t21 & 511U);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 9);
    goto LAB45;

LAB29:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    *((unsigned int *)t10) = t14;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t20 = *((unsigned int *)t9);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB54;

LAB55:
LAB56:    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t10, 0, 0, 9);
    goto LAB45;

LAB31:    xsi_set_current_line(47, ng0);

LAB57:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 & t13);
    *((unsigned int *)t11) = t14;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t11 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t20 = *((unsigned int *)t9);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB58;

LAB59:
LAB60:    memset(t10, 0, 8);
    t41 = (t10 + 4);
    t42 = (t11 + 4);
    t43 = *((unsigned int *)t11);
    t44 = (~(t43));
    *((unsigned int *)t10) = t44;
    *((unsigned int *)t41) = 0;
    if (*((unsigned int *)t42) != 0)
        goto LAB62;

LAB61:    t49 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t49 & 511U);
    t50 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t50 & 511U);
    t51 = (t0 + 2088);
    xsi_vlogvar_assign_value(t51, t10, 0, 0, 9);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2088);
    t4 = (t0 + 2088);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng16)));
    xsi_vlog_generic_convert_bit_index(t10, t8, 2, t9, 32, 1);
    t19 = (t10 + 4);
    t12 = *((unsigned int *)t19);
    t6 = (!(t12));
    if (t6 == 1)
        goto LAB63;

LAB64:    goto LAB45;

LAB33:    xsi_set_current_line(48, ng0);

LAB65:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t11 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t20 = *((unsigned int *)t9);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB66;

LAB67:
LAB68:    memset(t10, 0, 8);
    t41 = (t10 + 4);
    t42 = (t11 + 4);
    t37 = *((unsigned int *)t11);
    t38 = (~(t37));
    *((unsigned int *)t10) = t38;
    *((unsigned int *)t41) = 0;
    if (*((unsigned int *)t42) != 0)
        goto LAB70;

LAB69:    t45 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t45 & 511U);
    t46 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t46 & 511U);
    t51 = (t0 + 2088);
    xsi_vlogvar_assign_value(t51, t10, 0, 0, 9);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2088);
    t4 = (t0 + 2088);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng16)));
    xsi_vlog_generic_convert_bit_index(t10, t8, 2, t9, 32, 1);
    t19 = (t10 + 4);
    t12 = *((unsigned int *)t19);
    t6 = (!(t12));
    if (t6 == 1)
        goto LAB71;

LAB72:    goto LAB45;

LAB35:    xsi_set_current_line(49, ng0);

LAB73:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    *((unsigned int *)t11) = t14;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t11 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t20 = *((unsigned int *)t9);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB74;

LAB75:
LAB76:    memset(t10, 0, 8);
    t19 = (t10 + 4);
    t26 = (t11 + 4);
    t24 = *((unsigned int *)t11);
    t25 = (~(t24));
    *((unsigned int *)t10) = t25;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB78;

LAB77:    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & 511U);
    t32 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t32 & 511U);
    t41 = (t0 + 2088);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 9);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2088);
    t4 = (t0 + 2088);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng16)));
    xsi_vlog_generic_convert_bit_index(t10, t8, 2, t9, 32, 1);
    t19 = (t10 + 4);
    t12 = *((unsigned int *)t19);
    t6 = (!(t12));
    if (t6 == 1)
        goto LAB79;

LAB80:    goto LAB45;

LAB37:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB82;

LAB81:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB82;

LAB85:    if (*((unsigned int *)t4) > *((unsigned int *)t7))
        goto LAB83;

LAB84:    memset(t11, 0, 8);
    t19 = (t18 + 4);
    t12 = *((unsigned int *)t19);
    t13 = (~(t12));
    t14 = *((unsigned int *)t18);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t19) != 0)
        goto LAB88;

LAB89:    t41 = (t11 + 4);
    t17 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t41);
    t21 = (t17 || t20);
    if (t21 > 0)
        goto LAB90;

LAB91:    t22 = *((unsigned int *)t11);
    t23 = (~(t22));
    t24 = *((unsigned int *)t41);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t41) > 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t11) > 0)
        goto LAB96;

LAB97:    memcpy(t10, t51, 8);

LAB98:    t52 = (t0 + 2088);
    xsi_vlogvar_assign_value(t52, t10, 0, 0, 9);
    goto LAB45;

LAB39:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB100;

LAB99:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB100;

LAB103:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB101;

LAB102:    memset(t11, 0, 8);
    t19 = (t18 + 4);
    t12 = *((unsigned int *)t19);
    t13 = (~(t12));
    t14 = *((unsigned int *)t18);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t19) != 0)
        goto LAB106;

LAB107:    t41 = (t11 + 4);
    t17 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t41);
    t21 = (t17 || t20);
    if (t21 > 0)
        goto LAB108;

LAB109:    t22 = *((unsigned int *)t11);
    t23 = (~(t22));
    t24 = *((unsigned int *)t41);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t41) > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t11) > 0)
        goto LAB114;

LAB115:    memcpy(t10, t51, 8);

LAB116:    t52 = (t0 + 2088);
    xsi_vlogvar_assign_value(t52, t10, 0, 0, 9);
    goto LAB45;

LAB41:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t20 = (t14 | t17);
    t21 = *((unsigned int *)t3);
    t22 = *((unsigned int *)t8);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB120;

LAB117:    if (t23 != 0)
        goto LAB119;

LAB118:    *((unsigned int *)t18) = 1;

LAB120:    memset(t11, 0, 8);
    t19 = (t18 + 4);
    t27 = *((unsigned int *)t19);
    t28 = (~(t27));
    t29 = *((unsigned int *)t18);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB121;

LAB122:    if (*((unsigned int *)t19) != 0)
        goto LAB123;

LAB124:    t41 = (t11 + 4);
    t32 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t41);
    t36 = (t32 || t35);
    if (t36 > 0)
        goto LAB125;

LAB126:    t37 = *((unsigned int *)t11);
    t38 = (~(t37));
    t39 = *((unsigned int *)t41);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t41) > 0)
        goto LAB129;

LAB130:    if (*((unsigned int *)t11) > 0)
        goto LAB131;

LAB132:    memcpy(t10, t51, 8);

LAB133:    t52 = (t0 + 2088);
    xsi_vlogvar_assign_value(t52, t10, 0, 0, 9);
    goto LAB45;

LAB46:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    t19 = (t4 + 4);
    t26 = (t7 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t27 = *((unsigned int *)t19);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (~(t29));
    t31 = *((unsigned int *)t26);
    t32 = (~(t31));
    t33 = (t25 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t35);
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t36);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    goto LAB48;

LAB49:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    t19 = (t4 + 4);
    t26 = (t7 + 4);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t25);
    t28 = *((unsigned int *)t26);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB51;

LAB53:    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t10) = (t14 | t15);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t16 | t17);
    goto LAB52;

LAB54:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    goto LAB56;

LAB58:    t22 = *((unsigned int *)t11);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t11) = (t22 | t23);
    t19 = (t4 + 4);
    t26 = (t7 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t27 = *((unsigned int *)t19);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (~(t29));
    t31 = *((unsigned int *)t26);
    t32 = (~(t31));
    t33 = (t25 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t35);
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t36);
    t39 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t39 & t35);
    t40 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t40 & t36);
    goto LAB60;

LAB62:    t45 = *((unsigned int *)t10);
    t46 = *((unsigned int *)t42);
    *((unsigned int *)t10) = (t45 | t46);
    t47 = *((unsigned int *)t41);
    t48 = *((unsigned int *)t42);
    *((unsigned int *)t41) = (t47 | t48);
    goto LAB61;

LAB63:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t10), 1);
    goto LAB64;

LAB66:    t22 = *((unsigned int *)t11);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t11) = (t22 | t23);
    t19 = (t4 + 4);
    t26 = (t7 + 4);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t25);
    t28 = *((unsigned int *)t26);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB68;

LAB70:    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t42);
    *((unsigned int *)t10) = (t39 | t40);
    t43 = *((unsigned int *)t41);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t41) = (t43 | t44);
    goto LAB69;

LAB71:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t10), 1);
    goto LAB72;

LAB74:    t22 = *((unsigned int *)t11);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t11) = (t22 | t23);
    goto LAB76;

LAB78:    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t26);
    *((unsigned int *)t10) = (t27 | t28);
    t29 = *((unsigned int *)t19);
    t30 = *((unsigned int *)t26);
    *((unsigned int *)t19) = (t29 | t30);
    goto LAB77;

LAB79:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t10), 1);
    goto LAB80;

LAB82:    t9 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB84;

LAB83:    *((unsigned int *)t18) = 1;
    goto LAB84;

LAB86:    *((unsigned int *)t11) = 1;
    goto LAB89;

LAB88:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB89;

LAB90:    t42 = ((char*)((ng2)));
    goto LAB91;

LAB92:    t51 = ((char*)((ng1)));
    goto LAB93;

LAB94:    xsi_vlog_unsigned_bit_combine(t10, 9, t42, 9, t51, 9);
    goto LAB98;

LAB96:    memcpy(t10, t42, 8);
    goto LAB98;

LAB100:    t9 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB102;

LAB101:    *((unsigned int *)t18) = 1;
    goto LAB102;

LAB104:    *((unsigned int *)t11) = 1;
    goto LAB107;

LAB106:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB107;

LAB108:    t42 = ((char*)((ng2)));
    goto LAB109;

LAB110:    t51 = ((char*)((ng1)));
    goto LAB111;

LAB112:    xsi_vlog_unsigned_bit_combine(t10, 9, t42, 9, t51, 9);
    goto LAB116;

LAB114:    memcpy(t10, t42, 8);
    goto LAB116;

LAB119:    t9 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB120;

LAB121:    *((unsigned int *)t11) = 1;
    goto LAB124;

LAB123:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB124;

LAB125:    t42 = ((char*)((ng2)));
    goto LAB126;

LAB127:    t51 = ((char*)((ng1)));
    goto LAB128;

LAB129:    xsi_vlog_unsigned_bit_combine(t10, 9, t42, 9, t51, 9);
    goto LAB133;

LAB131:    memcpy(t10, t42, 8);
    goto LAB133;

}


extern void work_m_00000000000868378413_0886308060_init()
{
	static char *pe[] = {(void *)Cont_30_0,(void *)Cont_31_1,(void *)Always_32_2};
	xsi_register_didat("work_m_00000000000868378413_0886308060", "isim/ALU_Testbench_isim_beh.exe.sim/work/m_00000000000868378413_0886308060.didat");
	xsi_register_executes(pe);
}
