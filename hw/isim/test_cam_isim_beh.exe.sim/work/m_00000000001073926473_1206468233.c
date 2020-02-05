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
static const char *ng0 = "C:/Users/USER PC/Trabajo/David/Repositorios/work03-smulacion-ov7670-grupo-02/hw/src/Capturador_DD.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static unsigned int ng7[] = {131071U, 0U};
static int ng8[] = {7, 0};



static void Always_16_0(char *t0)
{
    char t18[8];
    char t32[8];
    char t33[8];
    char t34[8];
    char t35[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    int t43;
    int t44;
    char *t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 3808);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(16, ng0);

LAB5:    xsi_set_current_line(21, ng0);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t8 == 1)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB53:    t5 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 32);
    if (t8 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t8 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t8 == 1)
        goto LAB58;

LAB59:
LAB61:
LAB60:    xsi_set_current_line(59, ng0);

LAB70:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB62:    goto LAB2;

LAB7:    xsi_set_current_line(22, ng0);

LAB20:    xsi_set_current_line(23, ng0);
    t9 = (t0 + 1688U);
    t10 = *((char **)t9);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB21;

LAB22:
LAB23:    goto LAB19;

LAB9:    xsi_set_current_line(25, ng0);

LAB24:    xsi_set_current_line(26, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB25;

LAB26:
LAB27:    goto LAB19;

LAB11:    xsi_set_current_line(28, ng0);

LAB28:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t3) == 0)
        goto LAB29;

LAB31:    t5 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t5) = 1;

LAB32:    t7 = (t18 + 4);
    t9 = (t4 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    *((unsigned int *)t18) = t20;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB34;

LAB33:    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 1U);
    t26 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t26 & 1U);
    t10 = (t18 + 4);
    t27 = *((unsigned int *)t10);
    t28 = (~(t27));
    t29 = *((unsigned int *)t18);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB19;

LAB13:    xsi_set_current_line(31, ng0);

LAB38:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB42;

LAB43:
LAB44:    goto LAB19;

LAB15:    xsi_set_current_line(35, ng0);

LAB45:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB48:    goto LAB19;

LAB17:    xsi_set_current_line(39, ng0);

LAB49:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB52:    goto LAB19;

LAB21:    xsi_set_current_line(23, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 2568);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 3);
    goto LAB23;

LAB25:    xsi_set_current_line(26, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    goto LAB27;

LAB29:    *((unsigned int *)t18) = 1;
    goto LAB32;

LAB34:    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t18) = (t21 | t22);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t23 | t24);
    goto LAB33;

LAB35:    xsi_set_current_line(29, ng0);
    t16 = ((char*)((ng4)));
    t17 = (t0 + 2568);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 3);
    goto LAB37;

LAB39:    xsi_set_current_line(32, ng0);
    t5 = ((char*)((ng1)));
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    goto LAB41;

LAB42:    xsi_set_current_line(33, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB44;

LAB46:    xsi_set_current_line(36, ng0);
    t5 = ((char*)((ng6)));
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    goto LAB48;

LAB50:    xsi_set_current_line(40, ng0);
    t5 = ((char*)((ng5)));
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    goto LAB52;

LAB54:    xsi_set_current_line(47, ng0);

LAB63:    xsi_set_current_line(48, ng0);
    t7 = ((char*)((ng7)));
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 17);
    goto LAB62;

LAB56:    xsi_set_current_line(50, ng0);

LAB64:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t5, 17, t7, 32);
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t18, 0, 0, 17);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t32, 0, 8);
    t2 = (t32 + 4);
    t5 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 0);
    *((unsigned int *)t32) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 0);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t15 & 7U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 7U);
    t7 = (t0 + 1528U);
    t9 = *((char **)t7);
    memset(t33, 0, 8);
    t7 = (t33 + 4);
    t10 = (t9 + 4);
    t20 = *((unsigned int *)t9);
    t21 = (t20 >> 5);
    *((unsigned int *)t33) = t21;
    t22 = *((unsigned int *)t10);
    t23 = (t22 >> 5);
    *((unsigned int *)t7) = t23;
    t24 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t24 & 7U);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t25 & 7U);
    xsi_vlogtype_concat(t18, 6, 6, 2U, t33, 3, t32, 3);
    t16 = (t0 + 2088);
    t17 = (t0 + 2088);
    t37 = (t17 + 72U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng8)));
    t40 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t34, t35, t36, ((int*)(t38)), 2, t39, 32, 1, t40, 32, 1);
    t41 = (t34 + 4);
    t26 = *((unsigned int *)t41);
    t8 = (!(t26));
    t42 = (t35 + 4);
    t27 = *((unsigned int *)t42);
    t43 = (!(t27));
    t44 = (t8 && t43);
    t45 = (t36 + 4);
    t28 = *((unsigned int *)t45);
    t46 = (!(t28));
    t47 = (t44 && t46);
    if (t47 == 1)
        goto LAB65;

LAB66:    goto LAB62;

LAB58:    xsi_set_current_line(55, ng0);

LAB67:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1528U);
    t5 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 3);
    *((unsigned int *)t18) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 3);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t15 & 3U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 3U);
    t9 = (t0 + 2088);
    t10 = (t0 + 2088);
    t16 = (t10 + 72U);
    t17 = *((char **)t16);
    t37 = ((char*)((ng2)));
    t38 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t32, t33, t34, ((int*)(t17)), 2, t37, 32, 1, t38, 32, 1);
    t39 = (t32 + 4);
    t20 = *((unsigned int *)t39);
    t43 = (!(t20));
    t40 = (t33 + 4);
    t21 = *((unsigned int *)t40);
    t44 = (!(t21));
    t46 = (t43 && t44);
    t41 = (t34 + 4);
    t22 = *((unsigned int *)t41);
    t47 = (!(t22));
    t48 = (t46 && t47);
    if (t48 == 1)
        goto LAB68;

LAB69:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB62;

LAB65:    t29 = *((unsigned int *)t36);
    t48 = (t29 + 0);
    t30 = *((unsigned int *)t34);
    t31 = *((unsigned int *)t35);
    t49 = (t30 - t31);
    t50 = (t49 + 1);
    xsi_vlogvar_assign_value(t16, t18, t48, *((unsigned int *)t35), t50);
    goto LAB66;

LAB68:    t23 = *((unsigned int *)t34);
    t49 = (t23 + 0);
    t24 = *((unsigned int *)t32);
    t25 = *((unsigned int *)t33);
    t50 = (t24 - t25);
    t51 = (t50 + 1);
    xsi_vlogvar_assign_value(t9, t18, t49, *((unsigned int *)t33), t51);
    goto LAB69;

}


extern void work_m_00000000001073926473_1206468233_init()
{
	static char *pe[] = {(void *)Always_16_0};
	xsi_register_didat("work_m_00000000001073926473_1206468233", "isim/test_cam_isim_beh.exe.sim/work/m_00000000001073926473_1206468233.didat");
	xsi_register_executes(pe);
}
