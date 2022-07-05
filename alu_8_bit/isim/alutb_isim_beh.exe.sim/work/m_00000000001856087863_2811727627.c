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
static const char *ng0 = "D:/university/term4/06_digital_design_and_computer_architecture_lab/exe/project02/alu_8_bit/alutb.v";
static unsigned int ng1[] = {2U, 0U};
static unsigned int ng2[] = {7U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {9U, 0U};
static const char *ng5 = "Pass!";
static const char *ng6 = "Fail!";
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {253U, 0U};
static unsigned int ng12[] = {6U, 0U};
static unsigned int ng13[] = {166U, 0U};
static unsigned int ng14[] = {111U, 0U};
static unsigned int ng15[] = {21U, 0U};
static unsigned int ng16[] = {64U, 0U};
static unsigned int ng17[] = {128U, 0U};



static void Initial_35_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);

LAB4:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t4) = 1;

LAB9:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(47, ng0);

LAB14:    xsi_set_current_line(48, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB12:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB8:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(45, ng0);

LAB13:    xsi_set_current_line(46, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB12;

LAB15:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB19;

LAB16:    if (t16 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t4) = 1;

LAB19:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(57, ng0);

LAB24:    xsi_set_current_line(58, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB22:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB18:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(55, ng0);

LAB23:    xsi_set_current_line(56, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB22;

LAB25:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB29;

LAB26:    if (t16 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t4) = 1;

LAB29:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(67, ng0);

LAB34:    xsi_set_current_line(68, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB32:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB28:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(65, ng0);

LAB33:    xsi_set_current_line(66, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB32;

LAB35:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB39;

LAB36:    if (t16 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t4) = 1;

LAB39:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(77, ng0);

LAB44:    xsi_set_current_line(78, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB42:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB38:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(75, ng0);

LAB43:    xsi_set_current_line(76, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB42;

LAB45:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB49;

LAB46:    if (t16 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t4) = 1;

LAB49:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(87, ng0);

LAB54:    xsi_set_current_line(88, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB52:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB48:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(85, ng0);

LAB53:    xsi_set_current_line(86, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB52;

LAB55:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB59;

LAB56:    if (t16 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t4) = 1;

LAB59:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(97, ng0);

LAB64:    xsi_set_current_line(98, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB62:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB58:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(95, ng0);

LAB63:    xsi_set_current_line(96, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB62;

LAB65:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB69;

LAB66:    if (t16 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t4) = 1;

LAB69:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(107, ng0);

LAB74:    xsi_set_current_line(108, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB72:    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB68:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(105, ng0);

LAB73:    xsi_set_current_line(106, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB72;

LAB75:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB79;

LAB76:    if (t16 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t4) = 1;

LAB79:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(117, ng0);

LAB84:    xsi_set_current_line(118, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB82:    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB78:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB79;

LAB80:    xsi_set_current_line(115, ng0);

LAB83:    xsi_set_current_line(116, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB82;

LAB85:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng15)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB89;

LAB86:    if (t16 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t4) = 1;

LAB89:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(132, ng0);

LAB94:    xsi_set_current_line(133, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB92:    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB88:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(130, ng0);

LAB93:    xsi_set_current_line(131, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB92;

LAB95:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng17)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB99;

LAB96:    if (t16 != 0)
        goto LAB98;

LAB97:    *((unsigned int *)t4) = 1;

LAB99:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB100;

LAB101:    xsi_set_current_line(148, ng0);

LAB104:    xsi_set_current_line(149, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB102:    goto LAB1;

LAB98:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB99;

LAB100:    xsi_set_current_line(146, ng0);

LAB103:    xsi_set_current_line(147, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB102;

}


extern void work_m_00000000001856087863_2811727627_init()
{
	static char *pe[] = {(void *)Initial_35_0};
	xsi_register_didat("work_m_00000000001856087863_2811727627", "isim/alutb_isim_beh.exe.sim/work/m_00000000001856087863_2811727627.didat");
	xsi_register_executes(pe);
}
