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
static const char *ng0 = "D:/School_repositories/Digital-electronics-1/labs/07_stopwatch/Stopwatch/stopwatch.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_1781507893_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1166267554_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1472U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5672);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 2952U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t3 = (t0 + 5832);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t3);
    goto LAB3;

}

static void work_a_1166267554_3212880686_p_1(char *t0)
{
    char t29[16];
    char *t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned char t18;
    char *t19;
    char *t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t30;
    unsigned int t31;

LAB0:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5688);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 == 1)
        goto LAB8;

LAB9:    t4 = (t0 + 2792U);
    t11 = *((char **)t4);
    t4 = (t0 + 9784U);
    t12 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t11, t4, 9);
    if (t12 == 1)
        goto LAB17;

LAB18:    t10 = (unsigned char)0;

LAB19:    if (t10 == 1)
        goto LAB14;

LAB15:    t9 = (unsigned char)0;

LAB16:    if (t9 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    t3 = t8;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 2952U);
    t4 = *((char **)t1);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = (unsigned char)0;

LAB24:    if (t2 != 0)
        goto LAB20;

LAB21:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(49, ng0);
    t22 = xsi_get_transient_memory(4U);
    memset(t22, 0, 4U);
    t23 = t22;
    memset(t23, (unsigned char)2, 4U);
    t24 = (t0 + 5896);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t22, 4U);
    xsi_driver_first_trans_fast(t24);
    xsi_set_current_line(50, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t4 = t1;
    memset(t4, (unsigned char)2, 4U);
    t5 = (t0 + 5960);
    t11 = (t5 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(51, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t4 = t1;
    memset(t4, (unsigned char)2, 4U);
    t5 = (t0 + 6024);
    t11 = (t5 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(52, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t4 = t1;
    memset(t4, (unsigned char)2, 4U);
    t5 = (t0 + 6088);
    t11 = (t5 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB6;

LAB8:    t3 = (unsigned char)1;
    goto LAB10;

LAB11:    t19 = (t0 + 2312U);
    t20 = *((char **)t19);
    t19 = (t0 + 9736U);
    t21 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t20, t19, 5);
    t8 = t21;
    goto LAB13;

LAB14:    t16 = (t0 + 2472U);
    t17 = *((char **)t16);
    t16 = (t0 + 9752U);
    t18 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t17, t16, 9);
    t9 = t18;
    goto LAB16;

LAB17:    t13 = (t0 + 2632U);
    t14 = *((char **)t13);
    t13 = (t0 + 9768U);
    t15 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t14, t13, 9);
    t10 = t15;
    goto LAB19;

LAB20:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2792U);
    t11 = *((char **)t1);
    t1 = (t0 + 9784U);
    t13 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t29, t11, t1, 1);
    t14 = (t29 + 12U);
    t30 = *((unsigned int *)t14);
    t31 = (1U * t30);
    t9 = (4U != t31);
    if (t9 == 1)
        goto LAB25;

LAB26:    t16 = (t0 + 6088);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    memcpy(t22, t13, 4U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 2792U);
    t4 = *((char **)t1);
    t1 = (t0 + 9784U);
    t2 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t4, t1, 9);
    if (t2 != 0)
        goto LAB27;

LAB29:
LAB28:    goto LAB6;

LAB22:    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t7 = *((unsigned char *)t5);
    t8 = (t7 == (unsigned char)3);
    t2 = t8;
    goto LAB24;

LAB25:    xsi_size_not_matching(4U, t31, 0);
    goto LAB26;

LAB27:    xsi_set_current_line(59, ng0);
    t5 = xsi_get_transient_memory(4U);
    memset(t5, 0, 4U);
    t11 = t5;
    memset(t11, (unsigned char)2, 4U);
    t13 = (t0 + 6088);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    memcpy(t19, t5, 4U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t1 = (t0 + 9768U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t29, t4, t1, 1);
    t11 = (t29 + 12U);
    t30 = *((unsigned int *)t11);
    t31 = (1U * t30);
    t2 = (4U != t31);
    if (t2 == 1)
        goto LAB30;

LAB31:    t13 = (t0 + 6024);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    memcpy(t19, t5, 4U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t1 = (t0 + 9768U);
    t2 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t4, t1, 9);
    if (t2 != 0)
        goto LAB32;

LAB34:
LAB33:    goto LAB28;

LAB30:    xsi_size_not_matching(4U, t31, 0);
    goto LAB31;

LAB32:    xsi_set_current_line(64, ng0);
    t5 = xsi_get_transient_memory(4U);
    memset(t5, 0, 4U);
    t11 = t5;
    memset(t11, (unsigned char)2, 4U);
    t13 = (t0 + 6024);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    memcpy(t19, t5, 4U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t1 = (t0 + 9752U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t29, t4, t1, 1);
    t11 = (t29 + 12U);
    t30 = *((unsigned int *)t11);
    t31 = (1U * t30);
    t2 = (4U != t31);
    if (t2 == 1)
        goto LAB35;

LAB36:    t13 = (t0 + 5960);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    memcpy(t19, t5, 4U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t1 = (t0 + 9752U);
    t2 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t4, t1, 9);
    if (t2 != 0)
        goto LAB37;

LAB39:
LAB38:    goto LAB33;

LAB35:    xsi_size_not_matching(4U, t31, 0);
    goto LAB36;

LAB37:    xsi_set_current_line(69, ng0);
    t5 = xsi_get_transient_memory(4U);
    memset(t5, 0, 4U);
    t11 = t5;
    memset(t11, (unsigned char)2, 4U);
    t13 = (t0 + 5960);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    memcpy(t19, t5, 4U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t1 = (t0 + 9736U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t29, t4, t1, 1);
    t11 = (t29 + 12U);
    t30 = *((unsigned int *)t11);
    t31 = (1U * t30);
    t2 = (4U != t31);
    if (t2 == 1)
        goto LAB40;

LAB41:    t13 = (t0 + 5896);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    memcpy(t19, t5, 4U);
    xsi_driver_first_trans_fast(t13);
    goto LAB38;

LAB40:    xsi_size_not_matching(4U, t31, 0);
    goto LAB41;

}

static void work_a_1166267554_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(80, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 6152);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5704);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1166267554_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(81, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 6216);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5720);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1166267554_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(82, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 6280);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5736);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1166267554_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(83, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 6344);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5752);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1166267554_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1166267554_3212880686_p_0,(void *)work_a_1166267554_3212880686_p_1,(void *)work_a_1166267554_3212880686_p_2,(void *)work_a_1166267554_3212880686_p_3,(void *)work_a_1166267554_3212880686_p_4,(void *)work_a_1166267554_3212880686_p_5};
	xsi_register_didat("work_a_1166267554_3212880686", "isim/top_tb00_isim_beh.exe.sim/work/a_1166267554_3212880686.didat");
	xsi_register_executes(pe);
}
