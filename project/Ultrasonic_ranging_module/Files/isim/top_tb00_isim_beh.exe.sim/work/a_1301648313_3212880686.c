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
static const char *ng0 = "D:/Xilinx ISE projects/Ultrasonic_range_detector/bin_to_bcd.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_1301648313_3212880686_p_0(char *t0)
{
    char t12[16];
    char t18[16];
    char t23[16];
    char t28[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    int t10;
    int t11;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    char *t17;
    char *t19;
    char *t20;
    int t21;
    unsigned char t22;
    char *t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;

LAB0:    xsi_set_current_line(45, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 2528U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 32U);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 2528U);
    t3 = *((char **)t1);
    t5 = (14 + 2);
    t6 = (31 - t5);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t3 + t8);
    memcpy(t1, t2, 14U);
    xsi_set_current_line(49, ng0);
    t5 = (14 - 4);
    t1 = (t0 + 7972);
    *((int *)t1) = 0;
    t2 = (t0 + 7976);
    *((int *)t2) = t5;
    t9 = 0;
    t10 = t5;

LAB2:    if (t9 <= t10)
        goto LAB3;

LAB5:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    t5 = (14 + 18);
    t9 = (t5 - 1);
    t6 = (31 - t9);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t3 = (t0 + 4968);
    t4 = (t3 + 56U);
    t13 = *((char **)t4);
    t14 = (t13 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 18U);
    xsi_driver_first_trans_fast(t3);
    t1 = (t0 + 4824);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 2528U);
    t4 = *((char **)t3);
    t11 = (14 + 3);
    t6 = (31 - t11);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t3 = (t4 + t8);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 17;
    t14 = (t13 + 4U);
    *((int *)t14) = 14;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t15 = (14 - 17);
    t16 = (t15 * -1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t14 = (t0 + 7980);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 0;
    t20 = (t19 + 4U);
    *((int *)t20) = 3;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t21 = (3 - 0);
    t16 = (t21 * 1);
    t16 = (t16 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t16;
    t22 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t3, t12, t14, t18);
    if (t22 != 0)
        goto LAB6;

LAB8:
LAB7:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    t5 = (14 + 7);
    t6 = (31 - t5);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t3 = (t12 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 21;
    t4 = (t3 + 4U);
    *((int *)t4) = 18;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t11 = (18 - 21);
    t16 = (t11 * -1);
    t16 = (t16 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t16;
    t4 = (t0 + 7984);
    t14 = (t18 + 0U);
    t17 = (t14 + 0U);
    *((int *)t17) = 0;
    t17 = (t14 + 4U);
    *((int *)t17) = 3;
    t17 = (t14 + 8U);
    *((int *)t17) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t17 = (t14 + 12U);
    *((unsigned int *)t17) = t16;
    t22 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t1, t12, t4, t18);
    if (t22 != 0)
        goto LAB9;

LAB11:
LAB10:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    t5 = (14 + 11);
    t6 = (31 - t5);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t3 = (t12 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 25;
    t4 = (t3 + 4U);
    *((int *)t4) = 22;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t11 = (22 - 25);
    t16 = (t11 * -1);
    t16 = (t16 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t16;
    t4 = (t0 + 7988);
    t14 = (t18 + 0U);
    t17 = (t14 + 0U);
    *((int *)t17) = 0;
    t17 = (t14 + 4U);
    *((int *)t17) = 3;
    t17 = (t14 + 8U);
    *((int *)t17) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t17 = (t14 + 12U);
    *((unsigned int *)t17) = t16;
    t22 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t1, t12, t4, t18);
    if (t22 != 0)
        goto LAB12;

LAB14:
LAB13:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    t5 = (14 + 14);
    t6 = (31 - t5);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t3 = (t12 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 28;
    t4 = (t3 + 4U);
    *((int *)t4) = 26;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t11 = (26 - 28);
    t16 = (t11 * -1);
    t16 = (t16 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t16;
    t4 = (t0 + 7992);
    t14 = (t18 + 0U);
    t17 = (t14 + 0U);
    *((int *)t17) = 0;
    t17 = (t14 + 4U);
    *((int *)t17) = 3;
    t17 = (t14 + 8U);
    *((int *)t17) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t17 = (t14 + 12U);
    *((unsigned int *)t17) = t16;
    t22 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t1, t12, t4, t18);
    if (t22 != 0)
        goto LAB15;

LAB17:
LAB16:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    t5 = (14 + 18);
    t11 = (t5 - 2);
    t6 = (31 - t11);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t3 = xsi_get_transient_memory(31U);
    memcpy(t3, t1, 31U);
    t4 = (t0 + 2528U);
    t13 = *((char **)t4);
    t15 = (14 + 18);
    t21 = (t15 - 1);
    t16 = (31 - t21);
    t26 = (t16 * 1U);
    t27 = (0 + t26);
    t4 = (t13 + t27);
    memcpy(t4, t3, 31U);

LAB4:    t1 = (t0 + 7972);
    t9 = *((int *)t1);
    t2 = (t0 + 7976);
    t10 = *((int *)t2);
    if (t9 == t10)
        goto LAB5;

LAB18:    t5 = (t9 + 1);
    t9 = t5;
    t3 = (t0 + 7972);
    *((int *)t3) = t9;
    goto LAB2;

LAB6:    xsi_set_current_line(52, ng0);
    t20 = (t0 + 2528U);
    t24 = *((char **)t20);
    t25 = (14 + 3);
    t16 = (31 - t25);
    t26 = (t16 * 1U);
    t27 = (0 + t26);
    t20 = (t24 + t27);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 17;
    t30 = (t29 + 4U);
    *((int *)t30) = 14;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t31 = (14 - 17);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t23, t20, t28, 3);
    t33 = (t0 + 2528U);
    t34 = *((char **)t33);
    t35 = (14 + 3);
    t32 = (31 - t35);
    t36 = (t32 * 1U);
    t37 = (0 + t36);
    t33 = (t34 + t37);
    t38 = (t23 + 12U);
    t39 = *((unsigned int *)t38);
    t40 = (1U * t39);
    memcpy(t33, t30, t40);
    goto LAB7;

LAB9:    xsi_set_current_line(56, ng0);
    t17 = (t0 + 2528U);
    t19 = *((char **)t17);
    t21 = (14 + 7);
    t16 = (31 - t21);
    t26 = (t16 * 1U);
    t27 = (0 + t26);
    t17 = (t19 + t27);
    t20 = (t28 + 0U);
    t24 = (t20 + 0U);
    *((int *)t24) = 21;
    t24 = (t20 + 4U);
    *((int *)t24) = 18;
    t24 = (t20 + 8U);
    *((int *)t24) = -1;
    t25 = (18 - 21);
    t32 = (t25 * -1);
    t32 = (t32 + 1);
    t24 = (t20 + 12U);
    *((unsigned int *)t24) = t32;
    t24 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t23, t17, t28, 3);
    t29 = (t0 + 2528U);
    t30 = *((char **)t29);
    t31 = (14 + 7);
    t32 = (31 - t31);
    t36 = (t32 * 1U);
    t37 = (0 + t36);
    t29 = (t30 + t37);
    t33 = (t23 + 12U);
    t39 = *((unsigned int *)t33);
    t40 = (1U * t39);
    memcpy(t29, t24, t40);
    goto LAB10;

LAB12:    xsi_set_current_line(60, ng0);
    t17 = (t0 + 2528U);
    t19 = *((char **)t17);
    t21 = (14 + 11);
    t16 = (31 - t21);
    t26 = (t16 * 1U);
    t27 = (0 + t26);
    t17 = (t19 + t27);
    t20 = (t28 + 0U);
    t24 = (t20 + 0U);
    *((int *)t24) = 25;
    t24 = (t20 + 4U);
    *((int *)t24) = 22;
    t24 = (t20 + 8U);
    *((int *)t24) = -1;
    t25 = (22 - 25);
    t32 = (t25 * -1);
    t32 = (t32 + 1);
    t24 = (t20 + 12U);
    *((unsigned int *)t24) = t32;
    t24 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t23, t17, t28, 3);
    t29 = (t0 + 2528U);
    t30 = *((char **)t29);
    t31 = (14 + 11);
    t32 = (31 - t31);
    t36 = (t32 * 1U);
    t37 = (0 + t36);
    t29 = (t30 + t37);
    t33 = (t23 + 12U);
    t39 = *((unsigned int *)t33);
    t40 = (1U * t39);
    memcpy(t29, t24, t40);
    goto LAB13;

LAB15:    xsi_set_current_line(64, ng0);
    t17 = (t0 + 2528U);
    t19 = *((char **)t17);
    t21 = (14 + 14);
    t16 = (31 - t21);
    t26 = (t16 * 1U);
    t27 = (0 + t26);
    t17 = (t19 + t27);
    t20 = (t28 + 0U);
    t24 = (t20 + 0U);
    *((int *)t24) = 28;
    t24 = (t20 + 4U);
    *((int *)t24) = 26;
    t24 = (t20 + 8U);
    *((int *)t24) = -1;
    t25 = (26 - 28);
    t32 = (t25 * -1);
    t32 = (t32 + 1);
    t24 = (t20 + 12U);
    *((unsigned int *)t24) = t32;
    t24 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t23, t17, t28, 3);
    t29 = (t0 + 2528U);
    t30 = *((char **)t29);
    t31 = (14 + 14);
    t32 = (31 - t31);
    t36 = (t32 * 1U);
    t37 = (0 + t36);
    t29 = (t30 + t37);
    t33 = (t23 + 12U);
    t39 = *((unsigned int *)t33);
    t40 = (1U * t39);
    memcpy(t29, t24, t40);
    goto LAB16;

}

static void work_a_1301648313_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(74, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (17 - 15);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 5032);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 4840);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1301648313_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(75, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (17 - 11);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 5096);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 4856);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1301648313_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(76, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (17 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 5160);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 4872);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1301648313_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(77, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (17 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 5224);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 4888);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1301648313_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1301648313_3212880686_p_0,(void *)work_a_1301648313_3212880686_p_1,(void *)work_a_1301648313_3212880686_p_2,(void *)work_a_1301648313_3212880686_p_3,(void *)work_a_1301648313_3212880686_p_4};
	xsi_register_didat("work_a_1301648313_3212880686", "isim/top_tb00_isim_beh.exe.sim/work/a_1301648313_3212880686.didat");
	xsi_register_executes(pe);
}
