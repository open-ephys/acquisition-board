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

/* This file is designed for use with ISim build 0x79f3f3a8 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/jvoigts/ok_ephys_07/AD7980_controller_tb.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U, 0U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {1, 0, 0, 0};
static int ng6[] = {2, 0};
static int ng7[] = {3, 0};
static int ng8[] = {4, 0};
static int ng9[] = {5, 0};
static int ng10[] = {6, 0};
static int ng11[] = {20, 0};
static int ng12[] = {22, 0};



static void Initial_68_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 3560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);

LAB4:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2484);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2668);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 42);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2944);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3036);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3460);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3460);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB1;

}

static void Always_94_1(char *t0)
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
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3604);
    xsi_process_wait(t2, 13889LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(95, ng0);
    t4 = (t0 + 2300);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2300);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_97_2(char *t0)
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
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3748);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(98, ng0);
    t4 = (t0 + 2484);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2484);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_101_3(char *t0)
{
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

LAB0:    t1 = (t0 + 3992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 5196);
    *((int *)t2) = 1;
    t3 = (t0 + 4020);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(102, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(103, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB7;

}

static void Always_114_4(char *t0)
{
    char t8[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;

LAB0:    t1 = (t0 + 4136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 5204);
    *((int *)t2) = 1;
    t3 = (t0 + 4164);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(115, ng0);
    t4 = (t0 + 2668);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    xsi_vlog_unsigned_add(t8, 42, t6, 42, t7, 32);
    t9 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 42, 0LL);
    goto LAB2;

}

static void Always_166_5(char *t0)
{
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 4280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 5212);
    *((int *)t2) = 1;
    t3 = (t0 + 4308);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(167, ng0);
    t4 = (t0 + 2392);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 2760);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t4, 16, t5, 32);
    t6 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t6, t15, 0, 0, 16, 0LL);

LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(168, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 16, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(171, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    goto LAB10;

}

static void Always_176_6(char *t0)
{
    char t8[8];
    char t30[8];
    char t41[8];
    char t52[8];
    char t60[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;

LAB0:    t1 = (t0 + 4424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 5220);
    *((int *)t2) = 1;
    t3 = (t0 + 4452);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(177, ng0);

LAB5:    xsi_set_current_line(180, ng0);
    t4 = (t0 + 2760);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 2760);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB16;

LAB13:    if (t20 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t8) = 1;

LAB16:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 2760);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB23;

LAB20:    if (t20 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t8) = 1;

LAB23:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(191, ng0);
    t2 = (t0 + 2760);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB30;

LAB27:    if (t20 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t8) = 1;

LAB30:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB37;

LAB34:    if (t20 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t8) = 1;

LAB37:    memset(t30, 0, 8);
    t7 = (t8 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t7) != 0)
        goto LAB40;

LAB41:    t10 = (t30 + 4);
    t34 = *((unsigned int *)t30);
    t35 = *((unsigned int *)t10);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB42;

LAB43:    memcpy(t60, t30, 8);

LAB44:    t92 = (t60 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t60);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB56;

LAB57:
LAB58:    xsi_set_current_line(198, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB62;

LAB59:    if (t20 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t8) = 1;

LAB62:    memset(t30, 0, 8);
    t7 = (t8 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t7) != 0)
        goto LAB65;

LAB66:    t10 = (t30 + 4);
    t34 = *((unsigned int *)t30);
    t35 = *((unsigned int *)t10);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB67;

LAB68:    memcpy(t60, t30, 8);

LAB69:    t92 = (t60 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t60);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB81;

LAB82:
LAB83:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(181, ng0);
    t31 = (t0 + 1152U);
    t32 = *((char **)t31);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t33 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (t34 >> 8);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 8);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 255U);
    t40 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t40, t30, 0, 0, 8, 0LL);
    goto LAB12;

LAB15:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(184, ng0);
    t23 = (t0 + 1152U);
    t24 = *((char **)t23);
    memset(t30, 0, 8);
    t23 = (t30 + 4);
    t31 = (t24 + 4);
    t34 = *((unsigned int *)t24);
    t35 = (t34 >> 0);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t31);
    t37 = (t36 >> 0);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 255U);
    t32 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t32, t30, 0, 0, 8, 0LL);
    goto LAB19;

LAB22:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(189, ng0);
    t23 = (t0 + 1152U);
    t24 = *((char **)t23);
    memset(t30, 0, 8);
    t23 = (t30 + 4);
    t31 = (t24 + 4);
    t34 = *((unsigned int *)t24);
    t35 = (t34 >> 8);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t31);
    t37 = (t36 >> 8);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 255U);
    t32 = ((char*)((ng4)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 32, t30, 32, t32, 32);
    t33 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t33, t41, 0, 0, 8, 0LL);
    goto LAB26;

LAB29:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(192, ng0);
    t23 = (t0 + 1152U);
    t24 = *((char **)t23);
    memset(t30, 0, 8);
    t23 = (t30 + 4);
    t31 = (t24 + 4);
    t34 = *((unsigned int *)t24);
    t35 = (t34 >> 0);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t31);
    t37 = (t36 >> 0);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 255U);
    t32 = ((char*)((ng4)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 32, t30, 32, t32, 32);
    t33 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t33, t41, 0, 0, 8, 0LL);
    goto LAB33;

LAB36:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t30) = 1;
    goto LAB41;

LAB40:    t9 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB41;

LAB42:    t23 = (t0 + 2760);
    t24 = (t23 + 36U);
    t31 = *((char **)t24);
    t32 = ((char*)((ng8)));
    memset(t41, 0, 8);
    t33 = (t31 + 4);
    t40 = (t32 + 4);
    t37 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t40);
    t44 = (t42 ^ t43);
    t45 = (t39 | t44);
    t46 = *((unsigned int *)t33);
    t47 = *((unsigned int *)t40);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB48;

LAB45:    if (t48 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t41) = 1;

LAB48:    memset(t52, 0, 8);
    t53 = (t41 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t41);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t53) != 0)
        goto LAB51;

LAB52:    t61 = *((unsigned int *)t30);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t30 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB53;

LAB54:
LAB55:    goto LAB44;

LAB47:    t51 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t52) = 1;
    goto LAB52;

LAB51:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB52;

LAB53:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t30 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t30);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB55;

LAB56:    xsi_set_current_line(197, ng0);
    t98 = ((char*)((ng3)));
    t99 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t99, t98, 0, 0, 8, 0LL);
    goto LAB58;

LAB61:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t30) = 1;
    goto LAB66;

LAB65:    t9 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB66;

LAB67:    t23 = (t0 + 2760);
    t24 = (t23 + 36U);
    t31 = *((char **)t24);
    t32 = ((char*)((ng9)));
    memset(t41, 0, 8);
    t33 = (t31 + 4);
    t40 = (t32 + 4);
    t37 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t40);
    t44 = (t42 ^ t43);
    t45 = (t39 | t44);
    t46 = *((unsigned int *)t33);
    t47 = *((unsigned int *)t40);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB73;

LAB70:    if (t48 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t41) = 1;

LAB73:    memset(t52, 0, 8);
    t53 = (t41 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t41);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t53) != 0)
        goto LAB76;

LAB77:    t61 = *((unsigned int *)t30);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t30 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB78;

LAB79:
LAB80:    goto LAB69;

LAB72:    t51 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB73;

LAB74:    *((unsigned int *)t52) = 1;
    goto LAB77;

LAB76:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB77;

LAB78:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t30 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t30);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB80;

LAB81:    xsi_set_current_line(199, ng0);
    t98 = ((char*)((ng3)));
    t99 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t99, t98, 0, 0, 8, 0LL);
    goto LAB83;

}

static void Cont_205_7(char *t0)
{
    char t6[8];
    char t26[8];
    char t42[8];
    char t74[8];
    char t90[8];
    char t122[8];
    char t138[8];
    char t168[8];
    char t184[8];
    char t200[8];
    char t220[8];
    char t236[8];
    char t264[8];
    char t272[8];
    char t304[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    char *t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    char *t191;
    char *t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    char *t196;
    char *t197;
    char *t198;
    char *t199;
    char *t201;
    char *t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    char *t215;
    char *t216;
    char *t217;
    char *t218;
    char *t219;
    char *t221;
    char *t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    char *t235;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    char *t240;
    char *t241;
    char *t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    char *t250;
    char *t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    char *t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    char *t271;
    unsigned int t273;
    unsigned int t274;
    unsigned int t275;
    char *t276;
    char *t277;
    char *t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    char *t286;
    char *t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    int t296;
    int t297;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    char *t308;
    char *t309;
    char *t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    unsigned int t317;
    char *t318;
    char *t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    int t323;
    unsigned int t324;
    unsigned int t325;
    unsigned int t326;
    int t327;
    unsigned int t328;
    unsigned int t329;
    unsigned int t330;
    unsigned int t331;
    char *t332;
    char *t333;
    char *t334;
    char *t335;
    char *t336;
    unsigned int t337;
    unsigned int t338;
    char *t339;
    unsigned int t340;
    unsigned int t341;
    char *t342;
    unsigned int t343;
    unsigned int t344;
    char *t345;

LAB0:    t1 = (t0 + 4568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(205, ng0);
    t2 = (t0 + 2760);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 2760);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng4)));
    memset(t26, 0, 8);
    t27 = (t24 + 4);
    t28 = (t25 + 4);
    t29 = *((unsigned int *)t24);
    t30 = *((unsigned int *)t25);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t27);
    t33 = *((unsigned int *)t28);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t28);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB11;

LAB8:    if (t38 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t26) = 1;

LAB11:    t43 = *((unsigned int *)t6);
    t44 = *((unsigned int *)t26);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = (t6 + 4);
    t47 = (t26 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB12;

LAB13:
LAB14:    t70 = (t0 + 2760);
    t71 = (t70 + 36U);
    t72 = *((char **)t71);
    t73 = ((char*)((ng6)));
    memset(t74, 0, 8);
    t75 = (t72 + 4);
    t76 = (t73 + 4);
    t77 = *((unsigned int *)t72);
    t78 = *((unsigned int *)t73);
    t79 = (t77 ^ t78);
    t80 = *((unsigned int *)t75);
    t81 = *((unsigned int *)t76);
    t82 = (t80 ^ t81);
    t83 = (t79 | t82);
    t84 = *((unsigned int *)t75);
    t85 = *((unsigned int *)t76);
    t86 = (t84 | t85);
    t87 = (~(t86));
    t88 = (t83 & t87);
    if (t88 != 0)
        goto LAB18;

LAB15:    if (t86 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t74) = 1;

LAB18:    t91 = *((unsigned int *)t42);
    t92 = *((unsigned int *)t74);
    t93 = (t91 | t92);
    *((unsigned int *)t90) = t93;
    t94 = (t42 + 4);
    t95 = (t74 + 4);
    t96 = (t90 + 4);
    t97 = *((unsigned int *)t94);
    t98 = *((unsigned int *)t95);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 != 0);
    if (t101 == 1)
        goto LAB19;

LAB20:
LAB21:    t118 = (t0 + 2760);
    t119 = (t118 + 36U);
    t120 = *((char **)t119);
    t121 = ((char*)((ng7)));
    memset(t122, 0, 8);
    t123 = (t120 + 4);
    t124 = (t121 + 4);
    t125 = *((unsigned int *)t120);
    t126 = *((unsigned int *)t121);
    t127 = (t125 ^ t126);
    t128 = *((unsigned int *)t123);
    t129 = *((unsigned int *)t124);
    t130 = (t128 ^ t129);
    t131 = (t127 | t130);
    t132 = *((unsigned int *)t123);
    t133 = *((unsigned int *)t124);
    t134 = (t132 | t133);
    t135 = (~(t134));
    t136 = (t131 & t135);
    if (t136 != 0)
        goto LAB25;

LAB22:    if (t134 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t122) = 1;

LAB25:    t139 = *((unsigned int *)t90);
    t140 = *((unsigned int *)t122);
    t141 = (t139 | t140);
    *((unsigned int *)t138) = t141;
    t142 = (t90 + 4);
    t143 = (t122 + 4);
    t144 = (t138 + 4);
    t145 = *((unsigned int *)t142);
    t146 = *((unsigned int *)t143);
    t147 = (t145 | t146);
    *((unsigned int *)t144) = t147;
    t148 = *((unsigned int *)t144);
    t149 = (t148 != 0);
    if (t149 == 1)
        goto LAB26;

LAB27:
LAB28:    t166 = (t0 + 1060U);
    t167 = *((char **)t166);
    t166 = ((char*)((ng1)));
    memset(t168, 0, 8);
    t169 = (t167 + 4);
    t170 = (t166 + 4);
    t171 = *((unsigned int *)t167);
    t172 = *((unsigned int *)t166);
    t173 = (t171 ^ t172);
    t174 = *((unsigned int *)t169);
    t175 = *((unsigned int *)t170);
    t176 = (t174 ^ t175);
    t177 = (t173 | t176);
    t178 = *((unsigned int *)t169);
    t179 = *((unsigned int *)t170);
    t180 = (t178 | t179);
    t181 = (~(t180));
    t182 = (t177 & t181);
    if (t182 != 0)
        goto LAB32;

LAB29:    if (t180 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t168) = 1;

LAB32:    memset(t184, 0, 8);
    t185 = (t168 + 4);
    t186 = *((unsigned int *)t185);
    t187 = (~(t186));
    t188 = *((unsigned int *)t168);
    t189 = (t188 & t187);
    t190 = (t189 & 1U);
    if (t190 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t185) != 0)
        goto LAB35;

LAB36:    t192 = (t184 + 4);
    t193 = *((unsigned int *)t184);
    t194 = *((unsigned int *)t192);
    t195 = (t193 || t194);
    if (t195 > 0)
        goto LAB37;

LAB38:    memcpy(t272, t184, 8);

LAB39:    t305 = *((unsigned int *)t138);
    t306 = *((unsigned int *)t272);
    t307 = (t305 | t306);
    *((unsigned int *)t304) = t307;
    t308 = (t138 + 4);
    t309 = (t272 + 4);
    t310 = (t304 + 4);
    t311 = *((unsigned int *)t308);
    t312 = *((unsigned int *)t309);
    t313 = (t311 | t312);
    *((unsigned int *)t310) = t313;
    t314 = *((unsigned int *)t310);
    t315 = (t314 != 0);
    if (t315 == 1)
        goto LAB58;

LAB59:
LAB60:    t332 = (t0 + 5296);
    t333 = (t332 + 32U);
    t334 = *((char **)t333);
    t335 = (t334 + 40U);
    t336 = *((char **)t335);
    memset(t336, 0, 8);
    t337 = 1U;
    t338 = t337;
    t339 = (t304 + 4);
    t340 = *((unsigned int *)t304);
    t337 = (t337 & t340);
    t341 = *((unsigned int *)t339);
    t338 = (t338 & t341);
    t342 = (t336 + 4);
    t343 = *((unsigned int *)t336);
    *((unsigned int *)t336) = (t343 | t337);
    t344 = *((unsigned int *)t342);
    *((unsigned int *)t342) = (t344 | t338);
    xsi_driver_vfirst_trans(t332, 0, 0);
    t345 = (t0 + 5228);
    *((int *)t345) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB10:    t41 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB11;

LAB12:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t6 + 4);
    t57 = (t26 + 4);
    t58 = *((unsigned int *)t56);
    t59 = (~(t58));
    t60 = *((unsigned int *)t6);
    t61 = (t60 & t59);
    t62 = *((unsigned int *)t57);
    t63 = (~(t62));
    t64 = *((unsigned int *)t26);
    t65 = (t64 & t63);
    t66 = (~(t61));
    t67 = (~(t65));
    t68 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t68 & t66);
    t69 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t69 & t67);
    goto LAB14;

LAB17:    t89 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB18;

LAB19:    t102 = *((unsigned int *)t90);
    t103 = *((unsigned int *)t96);
    *((unsigned int *)t90) = (t102 | t103);
    t104 = (t42 + 4);
    t105 = (t74 + 4);
    t106 = *((unsigned int *)t104);
    t107 = (~(t106));
    t108 = *((unsigned int *)t42);
    t109 = (t108 & t107);
    t110 = *((unsigned int *)t105);
    t111 = (~(t110));
    t112 = *((unsigned int *)t74);
    t113 = (t112 & t111);
    t114 = (~(t109));
    t115 = (~(t113));
    t116 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t116 & t114);
    t117 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t117 & t115);
    goto LAB21;

LAB24:    t137 = (t122 + 4);
    *((unsigned int *)t122) = 1;
    *((unsigned int *)t137) = 1;
    goto LAB25;

LAB26:    t150 = *((unsigned int *)t138);
    t151 = *((unsigned int *)t144);
    *((unsigned int *)t138) = (t150 | t151);
    t152 = (t90 + 4);
    t153 = (t122 + 4);
    t154 = *((unsigned int *)t152);
    t155 = (~(t154));
    t156 = *((unsigned int *)t90);
    t157 = (t156 & t155);
    t158 = *((unsigned int *)t153);
    t159 = (~(t158));
    t160 = *((unsigned int *)t122);
    t161 = (t160 & t159);
    t162 = (~(t157));
    t163 = (~(t161));
    t164 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t164 & t162);
    t165 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t165 & t163);
    goto LAB28;

LAB31:    t183 = (t168 + 4);
    *((unsigned int *)t168) = 1;
    *((unsigned int *)t183) = 1;
    goto LAB32;

LAB33:    *((unsigned int *)t184) = 1;
    goto LAB36;

LAB35:    t191 = (t184 + 4);
    *((unsigned int *)t184) = 1;
    *((unsigned int *)t191) = 1;
    goto LAB36;

LAB37:    t196 = (t0 + 2760);
    t197 = (t196 + 36U);
    t198 = *((char **)t197);
    t199 = ((char*)((ng8)));
    memset(t200, 0, 8);
    t201 = (t198 + 4);
    t202 = (t199 + 4);
    t203 = *((unsigned int *)t198);
    t204 = *((unsigned int *)t199);
    t205 = (t203 ^ t204);
    t206 = *((unsigned int *)t201);
    t207 = *((unsigned int *)t202);
    t208 = (t206 ^ t207);
    t209 = (t205 | t208);
    t210 = *((unsigned int *)t201);
    t211 = *((unsigned int *)t202);
    t212 = (t210 | t211);
    t213 = (~(t212));
    t214 = (t209 & t213);
    if (t214 != 0)
        goto LAB43;

LAB40:    if (t212 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t200) = 1;

LAB43:    t216 = (t0 + 2760);
    t217 = (t216 + 36U);
    t218 = *((char **)t217);
    t219 = ((char*)((ng9)));
    memset(t220, 0, 8);
    t221 = (t218 + 4);
    t222 = (t219 + 4);
    t223 = *((unsigned int *)t218);
    t224 = *((unsigned int *)t219);
    t225 = (t223 ^ t224);
    t226 = *((unsigned int *)t221);
    t227 = *((unsigned int *)t222);
    t228 = (t226 ^ t227);
    t229 = (t225 | t228);
    t230 = *((unsigned int *)t221);
    t231 = *((unsigned int *)t222);
    t232 = (t230 | t231);
    t233 = (~(t232));
    t234 = (t229 & t233);
    if (t234 != 0)
        goto LAB47;

LAB44:    if (t232 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t220) = 1;

LAB47:    t237 = *((unsigned int *)t200);
    t238 = *((unsigned int *)t220);
    t239 = (t237 | t238);
    *((unsigned int *)t236) = t239;
    t240 = (t200 + 4);
    t241 = (t220 + 4);
    t242 = (t236 + 4);
    t243 = *((unsigned int *)t240);
    t244 = *((unsigned int *)t241);
    t245 = (t243 | t244);
    *((unsigned int *)t242) = t245;
    t246 = *((unsigned int *)t242);
    t247 = (t246 != 0);
    if (t247 == 1)
        goto LAB48;

LAB49:
LAB50:    memset(t264, 0, 8);
    t265 = (t236 + 4);
    t266 = *((unsigned int *)t265);
    t267 = (~(t266));
    t268 = *((unsigned int *)t236);
    t269 = (t268 & t267);
    t270 = (t269 & 1U);
    if (t270 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t265) != 0)
        goto LAB53;

LAB54:    t273 = *((unsigned int *)t184);
    t274 = *((unsigned int *)t264);
    t275 = (t273 & t274);
    *((unsigned int *)t272) = t275;
    t276 = (t184 + 4);
    t277 = (t264 + 4);
    t278 = (t272 + 4);
    t279 = *((unsigned int *)t276);
    t280 = *((unsigned int *)t277);
    t281 = (t279 | t280);
    *((unsigned int *)t278) = t281;
    t282 = *((unsigned int *)t278);
    t283 = (t282 != 0);
    if (t283 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB39;

LAB42:    t215 = (t200 + 4);
    *((unsigned int *)t200) = 1;
    *((unsigned int *)t215) = 1;
    goto LAB43;

LAB46:    t235 = (t220 + 4);
    *((unsigned int *)t220) = 1;
    *((unsigned int *)t235) = 1;
    goto LAB47;

LAB48:    t248 = *((unsigned int *)t236);
    t249 = *((unsigned int *)t242);
    *((unsigned int *)t236) = (t248 | t249);
    t250 = (t200 + 4);
    t251 = (t220 + 4);
    t252 = *((unsigned int *)t250);
    t253 = (~(t252));
    t254 = *((unsigned int *)t200);
    t255 = (t254 & t253);
    t256 = *((unsigned int *)t251);
    t257 = (~(t256));
    t258 = *((unsigned int *)t220);
    t259 = (t258 & t257);
    t260 = (~(t255));
    t261 = (~(t259));
    t262 = *((unsigned int *)t242);
    *((unsigned int *)t242) = (t262 & t260);
    t263 = *((unsigned int *)t242);
    *((unsigned int *)t242) = (t263 & t261);
    goto LAB50;

LAB51:    *((unsigned int *)t264) = 1;
    goto LAB54;

LAB53:    t271 = (t264 + 4);
    *((unsigned int *)t264) = 1;
    *((unsigned int *)t271) = 1;
    goto LAB54;

LAB55:    t284 = *((unsigned int *)t272);
    t285 = *((unsigned int *)t278);
    *((unsigned int *)t272) = (t284 | t285);
    t286 = (t184 + 4);
    t287 = (t264 + 4);
    t288 = *((unsigned int *)t184);
    t289 = (~(t288));
    t290 = *((unsigned int *)t286);
    t291 = (~(t290));
    t292 = *((unsigned int *)t264);
    t293 = (~(t292));
    t294 = *((unsigned int *)t287);
    t295 = (~(t294));
    t296 = (t289 & t291);
    t297 = (t293 & t295);
    t298 = (~(t296));
    t299 = (~(t297));
    t300 = *((unsigned int *)t278);
    *((unsigned int *)t278) = (t300 & t298);
    t301 = *((unsigned int *)t278);
    *((unsigned int *)t278) = (t301 & t299);
    t302 = *((unsigned int *)t272);
    *((unsigned int *)t272) = (t302 & t298);
    t303 = *((unsigned int *)t272);
    *((unsigned int *)t272) = (t303 & t299);
    goto LAB57;

LAB58:    t316 = *((unsigned int *)t304);
    t317 = *((unsigned int *)t310);
    *((unsigned int *)t304) = (t316 | t317);
    t318 = (t138 + 4);
    t319 = (t272 + 4);
    t320 = *((unsigned int *)t318);
    t321 = (~(t320));
    t322 = *((unsigned int *)t138);
    t323 = (t322 & t321);
    t324 = *((unsigned int *)t319);
    t325 = (~(t324));
    t326 = *((unsigned int *)t272);
    t327 = (t326 & t325);
    t328 = (~(t323));
    t329 = (~(t327));
    t330 = *((unsigned int *)t310);
    *((unsigned int *)t310) = (t330 & t328);
    t331 = *((unsigned int *)t310);
    *((unsigned int *)t310) = (t331 & t329);
    goto LAB60;

}

static void Cont_209_8(char *t0)
{
    char t6[8];
    char t26[8];
    char t42[8];
    char t72[8];
    char t88[8];
    char t104[8];
    char t120[8];
    char t128[8];
    char t160[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
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
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    int t152;
    int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;
    char *t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t188;
    char *t189;
    char *t190;
    char *t191;
    char *t192;
    unsigned int t193;
    unsigned int t194;
    char *t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;

LAB0:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 2760);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 2760);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng8)));
    memset(t26, 0, 8);
    t27 = (t24 + 4);
    t28 = (t25 + 4);
    t29 = *((unsigned int *)t24);
    t30 = *((unsigned int *)t25);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t27);
    t33 = *((unsigned int *)t28);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t28);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB11;

LAB8:    if (t38 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t26) = 1;

LAB11:    t43 = *((unsigned int *)t6);
    t44 = *((unsigned int *)t26);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = (t6 + 4);
    t47 = (t26 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB12;

LAB13:
LAB14:    t70 = (t0 + 1060U);
    t71 = *((char **)t70);
    t70 = ((char*)((ng1)));
    memset(t72, 0, 8);
    t73 = (t71 + 4);
    t74 = (t70 + 4);
    t75 = *((unsigned int *)t71);
    t76 = *((unsigned int *)t70);
    t77 = (t75 ^ t76);
    t78 = *((unsigned int *)t73);
    t79 = *((unsigned int *)t74);
    t80 = (t78 ^ t79);
    t81 = (t77 | t80);
    t82 = *((unsigned int *)t73);
    t83 = *((unsigned int *)t74);
    t84 = (t82 | t83);
    t85 = (~(t84));
    t86 = (t81 & t85);
    if (t86 != 0)
        goto LAB18;

LAB15:    if (t84 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t72) = 1;

LAB18:    memset(t88, 0, 8);
    t89 = (t72 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t72);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t89) != 0)
        goto LAB21;

LAB22:    t96 = (t88 + 4);
    t97 = *((unsigned int *)t88);
    t98 = *((unsigned int *)t96);
    t99 = (t97 || t98);
    if (t99 > 0)
        goto LAB23;

LAB24:    memcpy(t128, t88, 8);

LAB25:    t161 = *((unsigned int *)t42);
    t162 = *((unsigned int *)t128);
    t163 = (t161 | t162);
    *((unsigned int *)t160) = t163;
    t164 = (t42 + 4);
    t165 = (t128 + 4);
    t166 = (t160 + 4);
    t167 = *((unsigned int *)t164);
    t168 = *((unsigned int *)t165);
    t169 = (t167 | t168);
    *((unsigned int *)t166) = t169;
    t170 = *((unsigned int *)t166);
    t171 = (t170 != 0);
    if (t171 == 1)
        goto LAB37;

LAB38:
LAB39:    t188 = (t0 + 5332);
    t189 = (t188 + 32U);
    t190 = *((char **)t189);
    t191 = (t190 + 40U);
    t192 = *((char **)t191);
    memset(t192, 0, 8);
    t193 = 1U;
    t194 = t193;
    t195 = (t160 + 4);
    t196 = *((unsigned int *)t160);
    t193 = (t193 & t196);
    t197 = *((unsigned int *)t195);
    t194 = (t194 & t197);
    t198 = (t192 + 4);
    t199 = *((unsigned int *)t192);
    *((unsigned int *)t192) = (t199 | t193);
    t200 = *((unsigned int *)t198);
    *((unsigned int *)t198) = (t200 | t194);
    xsi_driver_vfirst_trans(t188, 0, 0);
    t201 = (t0 + 5236);
    *((int *)t201) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB10:    t41 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB11;

LAB12:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t6 + 4);
    t57 = (t26 + 4);
    t58 = *((unsigned int *)t56);
    t59 = (~(t58));
    t60 = *((unsigned int *)t6);
    t61 = (t60 & t59);
    t62 = *((unsigned int *)t57);
    t63 = (~(t62));
    t64 = *((unsigned int *)t26);
    t65 = (t64 & t63);
    t66 = (~(t61));
    t67 = (~(t65));
    t68 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t68 & t66);
    t69 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t69 & t67);
    goto LAB14;

LAB17:    t87 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t88) = 1;
    goto LAB22;

LAB21:    t95 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB22;

LAB23:    t100 = (t0 + 2760);
    t101 = (t100 + 36U);
    t102 = *((char **)t101);
    t103 = ((char*)((ng10)));
    memset(t104, 0, 8);
    t105 = (t102 + 4);
    t106 = (t103 + 4);
    t107 = *((unsigned int *)t102);
    t108 = *((unsigned int *)t103);
    t109 = (t107 ^ t108);
    t110 = *((unsigned int *)t105);
    t111 = *((unsigned int *)t106);
    t112 = (t110 ^ t111);
    t113 = (t109 | t112);
    t114 = *((unsigned int *)t105);
    t115 = *((unsigned int *)t106);
    t116 = (t114 | t115);
    t117 = (~(t116));
    t118 = (t113 & t117);
    if (t118 != 0)
        goto LAB29;

LAB26:    if (t116 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t104) = 1;

LAB29:    memset(t120, 0, 8);
    t121 = (t104 + 4);
    t122 = *((unsigned int *)t121);
    t123 = (~(t122));
    t124 = *((unsigned int *)t104);
    t125 = (t124 & t123);
    t126 = (t125 & 1U);
    if (t126 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t121) != 0)
        goto LAB32;

LAB33:    t129 = *((unsigned int *)t88);
    t130 = *((unsigned int *)t120);
    t131 = (t129 & t130);
    *((unsigned int *)t128) = t131;
    t132 = (t88 + 4);
    t133 = (t120 + 4);
    t134 = (t128 + 4);
    t135 = *((unsigned int *)t132);
    t136 = *((unsigned int *)t133);
    t137 = (t135 | t136);
    *((unsigned int *)t134) = t137;
    t138 = *((unsigned int *)t134);
    t139 = (t138 != 0);
    if (t139 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB25;

LAB28:    t119 = (t104 + 4);
    *((unsigned int *)t104) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB29;

LAB30:    *((unsigned int *)t120) = 1;
    goto LAB33;

LAB32:    t127 = (t120 + 4);
    *((unsigned int *)t120) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB33;

LAB34:    t140 = *((unsigned int *)t128);
    t141 = *((unsigned int *)t134);
    *((unsigned int *)t128) = (t140 | t141);
    t142 = (t88 + 4);
    t143 = (t120 + 4);
    t144 = *((unsigned int *)t88);
    t145 = (~(t144));
    t146 = *((unsigned int *)t142);
    t147 = (~(t146));
    t148 = *((unsigned int *)t120);
    t149 = (~(t148));
    t150 = *((unsigned int *)t143);
    t151 = (~(t150));
    t152 = (t145 & t147);
    t153 = (t149 & t151);
    t154 = (~(t152));
    t155 = (~(t153));
    t156 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t156 & t154);
    t157 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t157 & t155);
    t158 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t158 & t154);
    t159 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t159 & t155);
    goto LAB36;

LAB37:    t172 = *((unsigned int *)t160);
    t173 = *((unsigned int *)t166);
    *((unsigned int *)t160) = (t172 | t173);
    t174 = (t42 + 4);
    t175 = (t128 + 4);
    t176 = *((unsigned int *)t174);
    t177 = (~(t176));
    t178 = *((unsigned int *)t42);
    t179 = (t178 & t177);
    t180 = *((unsigned int *)t175);
    t181 = (~(t180));
    t182 = *((unsigned int *)t128);
    t183 = (t182 & t181);
    t184 = (~(t179));
    t185 = (~(t183));
    t186 = *((unsigned int *)t166);
    *((unsigned int *)t166) = (t186 & t184);
    t187 = *((unsigned int *)t166);
    *((unsigned int *)t166) = (t187 & t185);
    goto LAB39;

}

static void Always_215_9(char *t0)
{
    char t6[8];
    char t28[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(215, ng0);
    t2 = (t0 + 5244);
    *((int *)t2) = 1;
    t3 = (t0 + 4884);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(216, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(217, ng0);

LAB12:    xsi_set_current_line(218, ng0);
    t29 = (t0 + 2944);
    t30 = (t29 + 36U);
    t31 = *((char **)t30);
    t33 = (t0 + 3036);
    t34 = (t33 + 36U);
    t35 = *((char **)t34);
    memset(t32, 0, 8);
    t36 = (t32 + 4);
    t37 = (t35 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t32) = t39;
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 0);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t42 & 255U);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 & 255U);
    xsi_vlogtype_concat(t28, 16, 16, 2U, t32, 8, t31, 8);
    t44 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t44, t28, 0, 0, 16, 0LL);
    goto LAB11;

}

static void Cont_223_10(char *t0)
{
    char t6[8];
    char t26[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;

LAB0:    t1 = (t0 + 5000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(223, ng0);
    t2 = (t0 + 2760);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 2760);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng12)));
    memset(t26, 0, 8);
    t27 = (t24 + 4);
    t28 = (t25 + 4);
    t29 = *((unsigned int *)t24);
    t30 = *((unsigned int *)t25);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t27);
    t33 = *((unsigned int *)t28);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t28);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB11;

LAB8:    if (t38 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t26) = 1;

LAB11:    t43 = *((unsigned int *)t6);
    t44 = *((unsigned int *)t26);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = (t6 + 4);
    t47 = (t26 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB12;

LAB13:
LAB14:    t70 = (t0 + 5368);
    t71 = (t70 + 32U);
    t72 = *((char **)t71);
    t73 = (t72 + 40U);
    t74 = *((char **)t73);
    memset(t74, 0, 8);
    t75 = 1U;
    t76 = t75;
    t77 = (t42 + 4);
    t78 = *((unsigned int *)t42);
    t75 = (t75 & t78);
    t79 = *((unsigned int *)t77);
    t76 = (t76 & t79);
    t80 = (t74 + 4);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t81 | t75);
    t82 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t82 | t76);
    xsi_driver_vfirst_trans(t70, 0, 0);
    t83 = (t0 + 5252);
    *((int *)t83) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB10:    t41 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB11;

LAB12:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t6 + 4);
    t57 = (t26 + 4);
    t58 = *((unsigned int *)t56);
    t59 = (~(t58));
    t60 = *((unsigned int *)t6);
    t61 = (t60 & t59);
    t62 = *((unsigned int *)t57);
    t63 = (~(t62));
    t64 = *((unsigned int *)t26);
    t65 = (t64 & t63);
    t66 = (~(t61));
    t67 = (~(t65));
    t68 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t68 & t66);
    t69 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t69 & t67);
    goto LAB14;

}


extern void work_m_00000000001620350035_1086510854_init()
{
	static char *pe[] = {(void *)Initial_68_0,(void *)Always_94_1,(void *)Always_97_2,(void *)Always_101_3,(void *)Always_114_4,(void *)Always_166_5,(void *)Always_176_6,(void *)Cont_205_7,(void *)Cont_209_8,(void *)Always_215_9,(void *)Cont_223_10};
	xsi_register_didat("work_m_00000000001620350035_1086510854", "isim/AD7980_controller_tb_isim_beh.exe.sim/work/m_00000000001620350035_1086510854.didat");
	xsi_register_executes(pe);
}
