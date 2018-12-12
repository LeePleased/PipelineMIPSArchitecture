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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/hadoop/Desktop/NaivePipelineMIPS/rf.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static const char *ng3 = "r_mem/bench_1.txt";
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};



static void Initial_38_0(char *t0)
{
    char t6[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(38, ng0);

LAB2:    xsi_set_current_line(39, ng0);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3752);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 880);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t3, 32, t5, 32);
    t4 = (t6 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 3592);
    xsi_vlogfile_readmemh(ng3, 0, t1, 0, 0, 0, 0);

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB6:    xsi_set_current_line(40, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 3592);
    t16 = (t0 + 3592);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3592);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3752);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 3752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 3752);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

}

static void Cont_46_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3592);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3592);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1752U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 5840);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 5728);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_47_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3592);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3592);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1912U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 5904);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 5744);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_49_3(char *t0)
{
    char t13[8];
    char t14[8];
    char t45[8];
    char t58[8];
    char t64[8];
    char t98[8];
    char t99[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
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
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    int t113;
    int t114;

LAB0:    t1 = (t0 + 5408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5760);
    *((int *)t2) = 1;
    t3 = (t0 + 5440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 2712U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2552U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t23 = (t9 ^ t10);
    t26 = (t8 | t23);
    t29 = *((unsigned int *)t4);
    t30 = *((unsigned int *)t5);
    t33 = (t29 | t30);
    t34 = (~(t33));
    t35 = (t26 & t34);
    if (t35 != 0)
        goto LAB15;

LAB12:    if (t33 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t13) = 1;

LAB15:    memset(t14, 0, 8);
    t12 = (t13 + 4);
    t36 = *((unsigned int *)t12);
    t37 = (~(t36));
    t38 = *((unsigned int *)t13);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t12) != 0)
        goto LAB18;

LAB19:    t16 = (t14 + 4);
    t41 = *((unsigned int *)t14);
    t42 = (!(t41));
    t43 = *((unsigned int *)t16);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB20;

LAB21:    memcpy(t64, t14, 8);

LAB22:    t90 = (t64 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t64);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB34;

LAB35:
LAB36:    goto LAB2;

LAB6:    xsi_set_current_line(50, ng0);

LAB9:    xsi_set_current_line(51, ng0);
    t11 = (t0 + 2392U);
    t12 = *((char **)t11);
    t11 = (t0 + 3592);
    t15 = (t0 + 3592);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 3592);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 2072U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t22, 5, 2);
    t21 = (t13 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (!(t23));
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB10;

LAB11:    goto LAB8;

LAB10:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_assign_value(t11, t12, 0, *((unsigned int *)t14), t32);
    goto LAB11;

LAB14:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB15;

LAB16:    *((unsigned int *)t14) = 1;
    goto LAB19;

LAB18:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB19;

LAB20:    t17 = (t0 + 2552U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng5)));
    memset(t45, 0, 8);
    t19 = (t18 + 4);
    t20 = (t17 + 4);
    t46 = *((unsigned int *)t18);
    t47 = *((unsigned int *)t17);
    t48 = (t46 ^ t47);
    t49 = *((unsigned int *)t19);
    t50 = *((unsigned int *)t20);
    t51 = (t49 ^ t50);
    t52 = (t48 | t51);
    t53 = *((unsigned int *)t19);
    t54 = *((unsigned int *)t20);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB26;

LAB23:    if (t55 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t45) = 1;

LAB26:    memset(t58, 0, 8);
    t22 = (t45 + 4);
    t59 = *((unsigned int *)t22);
    t60 = (~(t59));
    t61 = *((unsigned int *)t45);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t22) != 0)
        goto LAB29;

LAB30:    t65 = *((unsigned int *)t14);
    t66 = *((unsigned int *)t58);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = (t14 + 4);
    t69 = (t58 + 4);
    t70 = (t64 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB22;

LAB25:    t21 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t58) = 1;
    goto LAB30;

LAB29:    t25 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB30;

LAB31:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t64) = (t76 | t77);
    t78 = (t14 + 4);
    t79 = (t58 + 4);
    t80 = *((unsigned int *)t78);
    t81 = (~(t80));
    t82 = *((unsigned int *)t14);
    t24 = (t82 & t81);
    t83 = *((unsigned int *)t79);
    t84 = (~(t83));
    t85 = *((unsigned int *)t58);
    t27 = (t85 & t84);
    t86 = (~(t24));
    t87 = (~(t27));
    t88 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t88 & t86);
    t89 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t89 & t87);
    goto LAB33;

LAB34:    xsi_set_current_line(56, ng0);

LAB37:    xsi_set_current_line(57, ng0);
    t96 = (t0 + 2232U);
    t97 = *((char **)t96);
    t96 = (t0 + 3592);
    t100 = (t0 + 3592);
    t101 = (t100 + 72U);
    t102 = *((char **)t101);
    t103 = (t0 + 3592);
    t104 = (t103 + 64U);
    t105 = *((char **)t104);
    t106 = (t0 + 1592U);
    t107 = *((char **)t106);
    xsi_vlog_generic_convert_array_indices(t98, t99, t102, t105, 2, 1, t107, 5, 2);
    t106 = (t98 + 4);
    t108 = *((unsigned int *)t106);
    t28 = (!(t108));
    t109 = (t99 + 4);
    t110 = *((unsigned int *)t109);
    t31 = (!(t110));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB38;

LAB39:    goto LAB36;

LAB38:    t111 = *((unsigned int *)t98);
    t112 = *((unsigned int *)t99);
    t113 = (t111 - t112);
    t114 = (t113 + 1);
    xsi_vlogvar_assign_value(t96, t97, 0, *((unsigned int *)t99), t114);
    goto LAB39;

}


extern void work_m_10457256484784545757_4062356339_init()
{
	static char *pe[] = {(void *)Initial_38_0,(void *)Cont_46_1,(void *)Cont_47_2,(void *)Always_49_3};
	xsi_register_didat("work_m_10457256484784545757_4062356339", "isim/Main_isim_beh.exe.sim/work/m_10457256484784545757_4062356339.didat");
	xsi_register_executes(pe);
}
