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
static const char *ng0 = "D:/university/term4/06_digital_design_and_computer_architecture_lab/exe/project03/multiplication/multiplier.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Always_14_0(char *t0)
{
    char t24[8];
    char t37[8];
    char t43[8];
    char t71[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t72;

LAB0:    t1 = (t0 + 3784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 4104);
    *((int *)t2) = 1;
    t3 = (t0 + 3816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(38, ng0);

LAB33:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(16, ng0);

LAB9:    xsi_set_current_line(18, ng0);
    t11 = (t0 + 2864);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(30, ng0);

LAB32:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t0 + 2224);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    memcpy(t24, t3, 8);
    t2 = (t0 + 2384);
    xsi_vlogvar_assign_value(t2, t24, 0, 0, 16);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB12:    goto LAB8;

LAB10:    xsi_set_current_line(18, ng0);

LAB13:    xsi_set_current_line(19, ng0);
    t20 = (t0 + 472);
    t21 = *((char **)t20);
    t20 = (t0 + 2704);
    t22 = (t20 + 56U);
    t23 = *((char **)t22);
    memset(t24, 0, 8);
    t25 = (t21 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB15;

LAB14:    t26 = (t23 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB15;

LAB18:    if (*((unsigned int *)t21) > *((unsigned int *)t23))
        goto LAB16;

LAB17:    t28 = (t24 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(26, ng0);

LAB31:    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2064);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);

LAB21:    goto LAB12;

LAB15:    t27 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB17;

LAB16:    *((unsigned int *)t24) = 1;
    goto LAB17;

LAB19:    xsi_set_current_line(19, ng0);

LAB22:    xsi_set_current_line(20, ng0);
    t34 = (t0 + 2224);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t38 = (t0 + 2224);
    t39 = (t38 + 72U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t37, 32, t36, t40, 2, t41, 32, 1);
    t42 = ((char*)((ng2)));
    memset(t43, 0, 8);
    t44 = (t37 + 4);
    t45 = (t42 + 4);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t42);
    t48 = (t46 ^ t47);
    t49 = *((unsigned int *)t44);
    t50 = *((unsigned int *)t45);
    t51 = (t49 ^ t50);
    t52 = (t48 | t51);
    t53 = *((unsigned int *)t44);
    t54 = *((unsigned int *)t45);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB26;

LAB23:    if (t55 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t43) = 1;

LAB26:    t59 = (t43 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t43);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t24, 0, 8);
    xsi_vlog_unsigned_lshift(t24, 16, t4, 16, t5, 32);
    t11 = (t0 + 2384);
    xsi_vlogvar_assign_value(t11, t24, 0, 0, 16);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t24, 0, 8);
    xsi_vlog_unsigned_rshift(t24, 8, t4, 8, t5, 32);
    t11 = (t0 + 2224);
    xsi_vlogvar_assign_value(t11, t24, 0, 0, 8);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 32, t4, 8, t5, 32);
    t11 = (t0 + 2704);
    xsi_vlogvar_assign_value(t11, t24, 0, 0, 8);
    goto LAB21;

LAB25:    t58 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(20, ng0);

LAB30:    xsi_set_current_line(21, ng0);
    t65 = (t0 + 2544);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    t68 = (t0 + 2384);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    memset(t71, 0, 8);
    xsi_vlog_unsigned_add(t71, 16, t67, 16, t70, 16);
    t72 = (t0 + 2544);
    xsi_vlogvar_assign_value(t72, t71, 0, 0, 16);
    goto LAB29;

}


extern void work_m_00000000003146977491_1345475044_init()
{
	static char *pe[] = {(void *)Always_14_0};
	xsi_register_didat("work_m_00000000003146977491_1345475044", "isim/multiplier_tb_isim_beh.exe.sim/work/m_00000000003146977491_1345475044.didat");
	xsi_register_executes(pe);
}
