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
static const char *ng0 = "D:/Xilinx ISE projects/Ultrasonic_range_detector/HC_SR04_driver.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_1781507893_1035706684(char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_1781543830_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_1808404841_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_2053728113_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_2110339434_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3086374525_3212880686_p_0(char *t0)
{
    char t15[16];
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    static char *nl0[] = {&&LAB9, &&LAB11, &&LAB10};

LAB0:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1152U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4528);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl0) + t2);
    goto **((char **)t1);

LAB5:    xsi_set_current_line(57, ng0);
    t3 = xsi_get_transient_memory(15U);
    memset(t3, 0, 15U);
    t7 = t3;
    memset(t7, (unsigned char)2, 15U);
    t8 = (t0 + 4640);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 15U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 4704);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB8:    goto LAB6;

LAB9:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 1992U);
    t7 = *((char **)t4);
    t4 = (t0 + 7660U);
    t8 = (t0 + 2608U);
    t9 = *((char **)t8);
    t8 = (t0 + 7692U);
    t5 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t7, t4, t9, t8);
    if (t5 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 4768);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(69, ng0);
    t1 = xsi_get_transient_memory(15U);
    memset(t1, 0, 15U);
    t3 = t1;
    memset(t3, (unsigned char)2, 15U);
    t4 = (t0 + 4640);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 15U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 4704);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB13:    goto LAB8;

LAB10:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 4704);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 4832);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 15U);
    xsi_driver_first_trans_fast(t1);

LAB18:    goto LAB8;

LAB11:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 7660U);
    t2 = ieee_p_1242562249_sub_1781543830_1035706684(IEEE_P_1242562249, t3, t1, 0);
    if (t2 != 0)
        goto LAB22;

LAB24:    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 7660U);
    t5 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t3, t1, 0);
    if (t5 == 1)
        goto LAB27;

LAB28:    t2 = (unsigned char)0;

LAB29:    if (t2 != 0)
        goto LAB25;

LAB26:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 4704);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB23:    goto LAB8;

LAB12:    xsi_set_current_line(65, ng0);
    t10 = (t0 + 4768);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 7660U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t15, t3, t1, 1);
    t7 = (t15 + 12U);
    t16 = *((unsigned int *)t7);
    t17 = (1U * t16);
    t2 = (15U != t17);
    if (t2 == 1)
        goto LAB15;

LAB16:    t8 = (t0 + 4640);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 15U);
    xsi_driver_first_trans_fast(t8);
    goto LAB13;

LAB15:    xsi_size_not_matching(15U, t17, 0);
    goto LAB16;

LAB17:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1992U);
    t4 = *((char **)t1);
    t1 = (t0 + 7660U);
    t7 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t15, t4, t1, 1);
    t8 = (t15 + 12U);
    t16 = *((unsigned int *)t8);
    t17 = (1U * t16);
    t6 = (15U != t17);
    if (t6 == 1)
        goto LAB20;

LAB21:    t9 = (t0 + 4640);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t7, 15U);
    xsi_driver_first_trans_fast(t9);
    goto LAB18;

LAB20:    xsi_size_not_matching(15U, t17, 0);
    goto LAB21;

LAB22:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 4704);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(86, ng0);
    t1 = xsi_get_transient_memory(15U);
    memset(t1, 0, 15U);
    t3 = t1;
    memset(t3, (unsigned char)2, 15U);
    t4 = (t0 + 4640);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 15U);
    xsi_driver_first_trans_fast(t4);
    goto LAB23;

LAB25:    xsi_set_current_line(88, ng0);
    t4 = (t0 + 4704);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB23;

LAB27:    t4 = (t0 + 1352U);
    t7 = *((char **)t4);
    t6 = *((unsigned char *)t7);
    t18 = (t6 == (unsigned char)3);
    t2 = t18;
    goto LAB29;

}

static void work_a_3086374525_3212880686_p_1(char *t0)
{
    char t1[16];
    char t4[16];
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(105, ng0);

LAB3:    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = (t0 + 7708U);
    t5 = (t0 + 2152U);
    t6 = *((char **)t5);
    t5 = (t0 + 7676U);
    t7 = ieee_p_1242562249_sub_1808404841_1035706684(IEEE_P_1242562249, t4, t6, t5, 2);
    t8 = ieee_p_1242562249_sub_2053728113_1035706684(IEEE_P_1242562249, t1, t3, t2, t7, t4);
    t9 = (t1 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (1U * t10);
    t12 = (33U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 4896);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t8, 33U);
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 4544);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(33U, t11, 0);
    goto LAB6;

}

static void work_a_3086374525_3212880686_p_2(char *t0)
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

LAB0:    xsi_set_current_line(106, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (32 - 31);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 4960);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 14U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 4560);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3086374525_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3086374525_3212880686_p_0,(void *)work_a_3086374525_3212880686_p_1,(void *)work_a_3086374525_3212880686_p_2};
	xsi_register_didat("work_a_3086374525_3212880686", "isim/top_tb00_isim_beh.exe.sim/work/a_3086374525_3212880686.didat");
	xsi_register_executes(pe);
}
