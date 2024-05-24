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
static const char *ng0 = "C:/Xilinx/PS2Keyboard2/key2ascii.v";
static unsigned int ng1[] = {69U, 0U};
static unsigned int ng2[] = {48U, 0U};
static unsigned int ng3[] = {22U, 0U};
static unsigned int ng4[] = {49U, 0U};
static unsigned int ng5[] = {30U, 0U};
static unsigned int ng6[] = {50U, 0U};
static unsigned int ng7[] = {38U, 0U};
static unsigned int ng8[] = {51U, 0U};
static unsigned int ng9[] = {37U, 0U};
static unsigned int ng10[] = {52U, 0U};
static unsigned int ng11[] = {46U, 0U};
static unsigned int ng12[] = {53U, 0U};
static unsigned int ng13[] = {54U, 0U};
static unsigned int ng14[] = {61U, 0U};
static unsigned int ng15[] = {55U, 0U};
static unsigned int ng16[] = {62U, 0U};
static unsigned int ng17[] = {56U, 0U};
static unsigned int ng18[] = {70U, 0U};
static unsigned int ng19[] = {57U, 0U};
static unsigned int ng20[] = {28U, 0U};
static unsigned int ng21[] = {65U, 0U};
static unsigned int ng22[] = {66U, 0U};
static unsigned int ng23[] = {33U, 0U};
static unsigned int ng24[] = {67U, 0U};
static unsigned int ng25[] = {35U, 0U};
static unsigned int ng26[] = {68U, 0U};
static unsigned int ng27[] = {36U, 0U};
static unsigned int ng28[] = {43U, 0U};
static unsigned int ng29[] = {71U, 0U};
static unsigned int ng30[] = {72U, 0U};
static unsigned int ng31[] = {73U, 0U};
static unsigned int ng32[] = {59U, 0U};
static unsigned int ng33[] = {74U, 0U};
static unsigned int ng34[] = {75U, 0U};
static unsigned int ng35[] = {76U, 0U};
static unsigned int ng36[] = {58U, 0U};
static unsigned int ng37[] = {77U, 0U};
static unsigned int ng38[] = {78U, 0U};
static unsigned int ng39[] = {79U, 0U};
static unsigned int ng40[] = {80U, 0U};
static unsigned int ng41[] = {21U, 0U};
static unsigned int ng42[] = {81U, 0U};
static unsigned int ng43[] = {45U, 0U};
static unsigned int ng44[] = {82U, 0U};
static unsigned int ng45[] = {27U, 0U};
static unsigned int ng46[] = {83U, 0U};
static unsigned int ng47[] = {44U, 0U};
static unsigned int ng48[] = {84U, 0U};
static unsigned int ng49[] = {60U, 0U};
static unsigned int ng50[] = {85U, 0U};
static unsigned int ng51[] = {42U, 0U};
static unsigned int ng52[] = {86U, 0U};
static unsigned int ng53[] = {29U, 0U};
static unsigned int ng54[] = {87U, 0U};
static unsigned int ng55[] = {34U, 0U};
static unsigned int ng56[] = {88U, 0U};
static unsigned int ng57[] = {89U, 0U};
static unsigned int ng58[] = {26U, 0U};
static unsigned int ng59[] = {90U, 0U};
static unsigned int ng60[] = {14U, 0U};
static unsigned int ng61[] = {96U, 0U};
static unsigned int ng62[] = {91U, 0U};
static unsigned int ng63[] = {93U, 0U};
static unsigned int ng64[] = {92U, 0U};
static unsigned int ng65[] = {39U, 0U};
static unsigned int ng66[] = {47U, 0U};
static unsigned int ng67[] = {41U, 0U};
static unsigned int ng68[] = {32U, 0U};
static unsigned int ng69[] = {13U, 0U};
static unsigned int ng70[] = {102U, 0U};
static unsigned int ng71[] = {8U, 0U};



static void Always_7_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(7, ng0);
    t2 = (t0 + 2688);
    *((int *)t2) = 1;
    t3 = (t0 + 2400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(8, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t4, 8);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng32)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng34)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng36)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng37)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng41)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng43)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng45)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng47)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB64;

LAB65:    t2 = ((char*)((ng49)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB66;

LAB67:    t2 = ((char*)((ng51)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB68;

LAB69:    t2 = ((char*)((ng53)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB70;

LAB71:    t2 = ((char*)((ng55)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB72;

LAB73:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB74;

LAB75:    t2 = ((char*)((ng58)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB76;

LAB77:    t2 = ((char*)((ng60)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB78;

LAB79:    t2 = ((char*)((ng38)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB80;

LAB81:    t2 = ((char*)((ng50)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB82;

LAB83:    t2 = ((char*)((ng48)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB84;

LAB85:    t2 = ((char*)((ng62)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB86;

LAB87:    t2 = ((char*)((ng63)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB88;

LAB89:    t2 = ((char*)((ng35)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB90;

LAB91:    t2 = ((char*)((ng44)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB92;

LAB93:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB94;

LAB95:    t2 = ((char*)((ng31)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB96;

LAB97:    t2 = ((char*)((ng33)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB98;

LAB99:    t2 = ((char*)((ng67)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB100;

LAB101:    t2 = ((char*)((ng59)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB102;

LAB103:    t2 = ((char*)((ng70)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB104;

LAB105:
LAB107:
LAB106:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng51)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB108:    goto LAB2;

LAB6:    xsi_set_current_line(9, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1448);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    goto LAB108;

LAB8:    xsi_set_current_line(10, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB10:    xsi_set_current_line(11, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB12:    xsi_set_current_line(12, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB14:    xsi_set_current_line(13, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB16:    xsi_set_current_line(14, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB18:    xsi_set_current_line(15, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB20:    xsi_set_current_line(16, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB22:    xsi_set_current_line(17, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB24:    xsi_set_current_line(18, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB26:    xsi_set_current_line(20, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB28:    xsi_set_current_line(21, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB30:    xsi_set_current_line(22, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB32:    xsi_set_current_line(23, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB34:    xsi_set_current_line(24, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB36:    xsi_set_current_line(25, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB38:    xsi_set_current_line(26, ng0);
    t3 = ((char*)((ng29)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB40:    xsi_set_current_line(27, ng0);
    t3 = ((char*)((ng30)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB42:    xsi_set_current_line(28, ng0);
    t3 = ((char*)((ng31)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB44:    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng33)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB46:    xsi_set_current_line(30, ng0);
    t3 = ((char*)((ng34)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB48:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng35)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB50:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng37)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB52:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng38)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB54:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng39)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB56:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng40)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB58:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng42)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB60:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng44)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB62:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng46)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB64:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng48)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB66:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng50)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB68:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng52)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB70:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng54)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB72:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng56)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB74:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng57)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB76:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng59)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB78:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng61)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB80:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng43)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB82:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB84:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng62)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB86:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng63)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB88:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng64)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB90:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng32)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB92:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng65)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB94:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng47)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB96:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB98:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng66)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB100:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng68)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB102:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng69)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

LAB104:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng71)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB108;

}


extern void work_m_00000000004242873748_3452180807_init()
{
	static char *pe[] = {(void *)Always_7_0};
	xsi_register_didat("work_m_00000000004242873748_3452180807", "isim/tb_kb_test_isim_beh.exe.sim/work/m_00000000004242873748_3452180807.didat");
	xsi_register_executes(pe);
}
