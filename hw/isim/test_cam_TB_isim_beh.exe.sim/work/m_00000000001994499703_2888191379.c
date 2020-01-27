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
static const char *ng0 = "C:/Users/USER PC/Trabajo/David/Repositorios/work03-smulacion-ov7670-grupo-02/hw/src/test_cam_TB.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {224U, 0U};
static int ng4[] = {2, 0};
static int ng5[] = {65536, 0, 0, 0, 0, 0, 0, 0};
static int ng6[] = {256, 0};
static const char *ng7 = "test_vga.txt";
static const char *ng8 = "w";
static const char *ng9 = "%0t ps: %b %b %b %b %b\n";



static void Initial_65_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 6272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);

LAB4:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 6080);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 6080);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB1;

}

static void Always_81_1(char *t0)
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

LAB0:    t1 = (t0 + 6520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 6328);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 3112);
    t5 = (t4 + 56U);
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
    t24 = (t0 + 3112);
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

static void Always_82_2(char *t0)
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

LAB0:    t1 = (t0 + 6768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 6576);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 3432);
    t5 = (t4 + 56U);
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
    t24 = (t0 + 3432);
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

static void Initial_102_3(char *t0)
{
    char t8[8];
    char t34[8];
    char t36[8];
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
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;

LAB0:    t1 = (t0 + 7016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(102, ng0);

LAB4:    xsi_set_current_line(102, ng0);

LAB5:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 8824);
    *((int *)t2) = 1;
    t3 = (t0 + 7048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(104, ng0);

LAB7:    xsi_set_current_line(105, ng0);
    t4 = (t0 + 4232);
    t5 = (t4 + 56U);
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
        goto LAB11;

LAB8:    if (t20 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t8) = 1;

LAB11:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB12;

LAB13:
LAB14:    goto LAB4;

LAB10:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(105, ng0);

LAB15:    xsi_set_current_line(106, ng0);
    t30 = (t0 + 4392);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng1)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t32, 10, t33, 32);
    t35 = (t0 + 4392);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 10);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t6, 32, t5, 32);
    t7 = (t0 + 744);
    t9 = *((char **)t7);
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t8, 32, t9, 32);
    memset(t36, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB17;

LAB16:    t10 = (t34 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t4) > *((unsigned int *)t34))
        goto LAB18;

LAB19:    t24 = (t36 + 4);
    t11 = *((unsigned int *)t24);
    t12 = (~(t11));
    t13 = *((unsigned int *)t36);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB21;

LAB22:
LAB23:    goto LAB14;

LAB17:    t23 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB19;

LAB18:    *((unsigned int *)t36) = 1;
    goto LAB19;

LAB21:    xsi_set_current_line(107, ng0);

LAB24:    xsi_set_current_line(108, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 4392);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 10);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 4552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 10, t5, 32);
    t6 = (t0 + 4552);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 10);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 4552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t6 = *((char **)t5);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t6, 32, t5, 32);
    t7 = (t0 + 880);
    t9 = *((char **)t7);
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t8, 32, t9, 32);
    memset(t36, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB26;

LAB25:    t10 = (t34 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t4) > *((unsigned int *)t34))
        goto LAB27;

LAB28:    t24 = (t36 + 4);
    t11 = *((unsigned int *)t24);
    t12 = (~(t11));
    t13 = *((unsigned int *)t36);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB30;

LAB31:
LAB32:    goto LAB23;

LAB26:    t23 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t36) = 1;
    goto LAB28;

LAB30:    xsi_set_current_line(110, ng0);

LAB33:    xsi_set_current_line(111, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 4552);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 10);
    goto LAB32;

LAB34:    goto LAB1;

}

static void Initial_119_4(char *t0)
{
    char t8[8];
    char t34[8];
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
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;

LAB0:    t1 = (t0 + 7264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(119, ng0);

LAB4:    xsi_set_current_line(119, ng0);

LAB5:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 8840);
    *((int *)t2) = 1;
    t3 = (t0 + 7296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(120, ng0);

LAB7:    xsi_set_current_line(121, ng0);
    t4 = (t0 + 4232);
    t5 = (t4 + 56U);
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
        goto LAB11;

LAB8:    if (t20 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t8) = 1;

LAB11:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB12;

LAB13:
LAB14:    goto LAB4;

LAB10:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(121, ng0);

LAB15:    xsi_set_current_line(122, ng0);
    t30 = (t0 + 4552);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng2)));
    memset(t34, 0, 8);
    t35 = (t32 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB19;

LAB16:    if (t46 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t34) = 1;

LAB19:    t50 = (t34 + 4);
    t51 = *((unsigned int *)t50);
    t52 = (~(t51));
    t53 = *((unsigned int *)t34);
    t54 = (t53 & t52);
    t55 = (t54 != 0);
    if (t55 > 0)
        goto LAB20;

LAB21:
LAB22:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 4552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t6 = *((char **)t5);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_divide(t8, 32, t6, 32, t5, 32);
    memset(t34, 0, 8);
    t7 = (t4 + 4);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t8);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB27;

LAB24:    if (t20 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t34) = 1;

LAB27:    t23 = (t34 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t34);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB28;

LAB29:
LAB30:    goto LAB14;

LAB18:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(122, ng0);

LAB23:    xsi_set_current_line(123, ng0);
    t56 = ((char*)((ng1)));
    t57 = (t0 + 3592);
    xsi_vlogvar_assign_value(t57, t56, 0, 0, 1);
    goto LAB22;

LAB26:    t10 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(125, ng0);

LAB31:    xsi_set_current_line(126, ng0);
    t24 = ((char*)((ng2)));
    t30 = (t0 + 3592);
    xsi_vlogvar_assign_value(t30, t24, 0, 0, 1);
    goto LAB30;

LAB32:    goto LAB1;

}

static void Initial_133_5(char *t0)
{
    char t8[8];
    char t35[8];
    char t36[8];
    char t50[8];
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
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;

LAB0:    t1 = (t0 + 7512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(133, ng0);

LAB4:    xsi_set_current_line(133, ng0);

LAB5:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 8856);
    *((int *)t2) = 1;
    t3 = (t0 + 7544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(134, ng0);

LAB7:    xsi_set_current_line(135, ng0);
    t4 = (t0 + 4232);
    t5 = (t4 + 56U);
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
        goto LAB11;

LAB8:    if (t20 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t8) = 1;

LAB11:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB12;

LAB13:
LAB14:    goto LAB4;

LAB10:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(135, ng0);

LAB15:    xsi_set_current_line(136, ng0);
    t30 = (t0 + 4552);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t0 + 880);
    t34 = *((char **)t33);
    t33 = ((char*)((ng1)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 32, t34, 32, t33, 32);
    memset(t36, 0, 8);
    t37 = (t32 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB17;

LAB16:    t38 = (t35 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t32) > *((unsigned int *)t35))
        goto LAB18;

LAB19:    t40 = (t36 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB36;

LAB33:    if (t20 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t8) = 1;

LAB36:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB37;

LAB38:
LAB39:    goto LAB14;

LAB17:    t39 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB19;

LAB18:    *((unsigned int *)t36) = 1;
    goto LAB19;

LAB21:    xsi_set_current_line(136, ng0);

LAB24:    xsi_set_current_line(137, ng0);
    t46 = (t0 + 4392);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng2)));
    memset(t50, 0, 8);
    t51 = (t48 + 4);
    t52 = (t49 + 4);
    t53 = *((unsigned int *)t48);
    t54 = *((unsigned int *)t49);
    t55 = (t53 ^ t54);
    t56 = *((unsigned int *)t51);
    t57 = *((unsigned int *)t52);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t51);
    t61 = *((unsigned int *)t52);
    t62 = (t60 | t61);
    t63 = (~(t62));
    t64 = (t59 & t63);
    if (t64 != 0)
        goto LAB28;

LAB25:    if (t62 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t50) = 1;

LAB28:    t66 = (t50 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t50);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB29;

LAB30:
LAB31:    goto LAB23;

LAB27:    t65 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(137, ng0);

LAB32:    xsi_set_current_line(138, ng0);
    t72 = ((char*)((ng1)));
    t73 = (t0 + 3752);
    xsi_vlogvar_assign_value(t73, t72, 0, 0, 1);
    goto LAB31;

LAB35:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(141, ng0);

LAB40:    xsi_set_current_line(142, ng0);
    t23 = ((char*)((ng2)));
    t24 = (t0 + 3752);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 1);
    goto LAB39;

LAB41:    goto LAB1;

}

static void Initial_150_6(char *t0)
{
    char t8[8];
    char t24[8];
    char t40[8];
    char t56[8];
    char t64[8];
    char t106[8];
    char t128[8];
    char t142[32];
    char t143[32];
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
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
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
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
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
    int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t107;
    char *t108;
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
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;

LAB0:    t1 = (t0 + 7760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(150, ng0);

LAB4:    xsi_set_current_line(150, ng0);

LAB5:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 8872);
    *((int *)t2) = 1;
    t3 = (t0 + 7792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(151, ng0);

LAB7:    xsi_set_current_line(152, ng0);
    t4 = (t0 + 4232);
    t5 = (t4 + 56U);
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
        goto LAB11;

LAB8:    if (t20 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t8) = 1;

LAB11:    memset(t24, 0, 8);
    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t25) != 0)
        goto LAB14;

LAB15:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB16;

LAB17:    memcpy(t64, t24, 8);

LAB18:    t96 = (t64 + 4);
    t97 = *((unsigned int *)t96);
    t98 = (~(t97));
    t99 = *((unsigned int *)t64);
    t100 = (t99 & t98);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB30;

LAB31:
LAB32:    goto LAB4;

LAB10:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB11;

LAB12:    *((unsigned int *)t24) = 1;
    goto LAB15;

LAB14:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB15;

LAB16:    t36 = (t0 + 3752);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng1)));
    memset(t40, 0, 8);
    t41 = (t38 + 4);
    t42 = (t39 + 4);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t41);
    t47 = *((unsigned int *)t42);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t41);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB22;

LAB19:    if (t52 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t40) = 1;

LAB22:    memset(t56, 0, 8);
    t57 = (t40 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t40);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t57) != 0)
        goto LAB25;

LAB26:    t65 = *((unsigned int *)t24);
    t66 = *((unsigned int *)t56);
    t67 = (t65 & t66);
    *((unsigned int *)t64) = t67;
    t68 = (t24 + 4);
    t69 = (t56 + 4);
    t70 = (t64 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB18;

LAB21:    t55 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB22;

LAB23:    *((unsigned int *)t56) = 1;
    goto LAB26;

LAB25:    t63 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB26;

LAB27:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t64) = (t76 | t77);
    t78 = (t24 + 4);
    t79 = (t56 + 4);
    t80 = *((unsigned int *)t24);
    t81 = (~(t80));
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t56);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (~(t86));
    t88 = (t81 & t83);
    t89 = (t85 & t87);
    t90 = (~(t88));
    t91 = (~(t89));
    t92 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t92 & t90);
    t93 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t93 & t91);
    t94 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t94 & t90);
    t95 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t95 & t91);
    goto LAB29;

LAB30:    xsi_set_current_line(152, ng0);

LAB33:    xsi_set_current_line(153, ng0);
    t102 = (t0 + 4712);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t105 = ((char*)((ng2)));
    memset(t106, 0, 8);
    t107 = (t104 + 4);
    t108 = (t105 + 4);
    t109 = *((unsigned int *)t104);
    t110 = *((unsigned int *)t105);
    t111 = (t109 ^ t110);
    t112 = *((unsigned int *)t107);
    t113 = *((unsigned int *)t108);
    t114 = (t112 ^ t113);
    t115 = (t111 | t114);
    t116 = *((unsigned int *)t107);
    t117 = *((unsigned int *)t108);
    t118 = (t116 | t117);
    t119 = (~(t118));
    t120 = (t115 & t119);
    if (t120 != 0)
        goto LAB37;

LAB34:    if (t118 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t106) = 1;

LAB37:    t122 = (t106 + 4);
    t123 = *((unsigned int *)t122);
    t124 = (~(t123));
    t125 = *((unsigned int *)t106);
    t126 = (t125 & t124);
    t127 = (t126 != 0);
    if (t127 > 0)
        goto LAB38;

LAB39:
LAB40:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 4872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 8);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 8);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 255U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 255U);
    t7 = (t0 + 3912);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 8);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 4872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_multiply(t8, 32, t4, 16, t5, 32);
    t6 = (t0 + 3912);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 32, t8, 32, t9, 8);
    t10 = (t0 + 4872);
    xsi_vlogvar_assign_value(t10, t24, 0, 0, 16);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 4712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 4, t5, 32);
    t6 = (t0 + 4712);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 4);
    goto LAB32;

LAB36:    t121 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t121) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(153, ng0);

LAB41:    xsi_set_current_line(154, ng0);
    t129 = (t0 + 5032);
    t130 = (t129 + 56U);
    t131 = *((char **)t130);
    memset(t128, 0, 8);
    t132 = (t128 + 4);
    t133 = (t131 + 24);
    t134 = (t131 + 28);
    t135 = *((unsigned int *)t133);
    t136 = (t135 >> 16);
    *((unsigned int *)t128) = t136;
    t137 = *((unsigned int *)t134);
    t138 = (t137 >> 16);
    *((unsigned int *)t132) = t138;
    t139 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t139 & 65535U);
    t140 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t140 & 65535U);
    t141 = (t0 + 4872);
    xsi_vlogvar_assign_value(t141, t128, 0, 0, 16);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 5032);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    xsi_vlog_unsigned_multiply(t142, 128, t4, 128, t5, 32);
    t6 = (t0 + 4872);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    xsi_vlog_unsigned_add(t143, 128, t142, 128, t9, 16);
    t10 = (t0 + 5032);
    xsi_vlogvar_assign_value(t10, t143, 0, 0, 128);
    goto LAB40;

LAB42:    goto LAB1;

}

static void Initial_174_7(char *t0)
{
    char t1[8];
    char *t2;
    char *t3;

LAB0:    xsi_set_current_line(174, ng0);

LAB2:    xsi_set_current_line(175, ng0);
    *((int *)t1) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng8);
    t2 = (t1 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 5192);
    xsi_vlogvar_assign_value(t3, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_179_8(char *t0)
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

LAB0:    t1 = (t0 + 8256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 8064);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(179, ng0);
    t4 = (t0 + 5352);
    t5 = (t4 + 56U);
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
    t24 = (t0 + 5352);
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

static void Initial_182_9(char *t0)
{
    char t7[16];
    char t12[8];
    char t21[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;

LAB0:    t1 = (t0 + 8504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(182, ng0);

LAB4:    xsi_set_current_line(182, ng0);

LAB5:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 8888);
    *((int *)t2) = 1;
    t3 = (t0 + 8536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(184, ng0);
    t4 = (t0 + 5192);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = xsi_vlog_time(t7, 10000.000000000000, 10.000000000000000);
    t9 = (t0 + 1592U);
    t10 = *((char **)t9);
    t9 = (t0 + 1752U);
    t11 = *((char **)t9);
    t9 = (t0 + 1912U);
    t13 = *((char **)t9);
    memset(t12, 0, 8);
    t9 = (t12 + 4);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (t15 >> 1);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 1);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 7U);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t20 & 7U);
    t22 = (t0 + 2072U);
    t23 = *((char **)t22);
    memset(t21, 0, 8);
    t22 = (t21 + 4);
    t24 = (t23 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (t25 >> 1);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t24);
    t28 = (t27 >> 1);
    *((unsigned int *)t22) = t28;
    t29 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t29 & 7U);
    t30 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t30 & 7U);
    t32 = (t0 + 2232U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t31 + 4);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (t35 >> 2);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 2);
    *((unsigned int *)t32) = t38;
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 3U);
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 3U);
    xsi_vlogfile_fwrite(*((unsigned int *)t6), 0, 0, 1, ng9, 7, t0, (char)118, t7, 64, (char)118, t10, 1, (char)118, t11, 1, (char)118, t12, 3, (char)118, t21, 3, (char)118, t31, 2);
    goto LAB4;

LAB7:    goto LAB1;

}


extern void work_m_00000000001994499703_2888191379_init()
{
	static char *pe[] = {(void *)Initial_65_0,(void *)Always_81_1,(void *)Always_82_2,(void *)Initial_102_3,(void *)Initial_119_4,(void *)Initial_133_5,(void *)Initial_150_6,(void *)Initial_174_7,(void *)Always_179_8,(void *)Initial_182_9};
	xsi_register_didat("work_m_00000000001994499703_2888191379", "isim/test_cam_TB_isim_beh.exe.sim/work/m_00000000001994499703_2888191379.didat");
	xsi_register_executes(pe);
}
