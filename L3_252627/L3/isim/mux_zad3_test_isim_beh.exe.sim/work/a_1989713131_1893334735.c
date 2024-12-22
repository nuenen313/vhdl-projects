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
static const char *ng0 = "/home/marta/Desktop/IEA/sem5/VLSI/L3_252627/L3/mux_zad3.vhd";



static void work_a_1989713131_1893334735_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 2504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4550);
    t5 = xsi_mem_cmp(t2, t3, 2U);
    if (t5 == 1)
        goto LAB5;

LAB8:    t6 = (t0 + 4552);
    t8 = xsi_mem_cmp(t6, t3, 2U);
    if (t8 == 1)
        goto LAB6;

LAB9:
LAB7:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t5 = (3 - 3);
    t12 = (t5 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t15 = *((unsigned char *)t2);
    t4 = (t0 + 2904);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t15;
    xsi_driver_first_trans_fast_port(t4);

LAB4:    xsi_set_current_line(35, ng0);

LAB13:    t2 = (t0 + 2824);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB14;

LAB1:    return;
LAB5:    xsi_set_current_line(36, ng0);
    t9 = (t0 + 1032U);
    t10 = *((char **)t9);
    t11 = (0 - 3);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t9 = (t10 + t14);
    t15 = *((unsigned char *)t9);
    t16 = (t0 + 2904);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t15;
    xsi_driver_first_trans_fast_port(t16);
    goto LAB4;

LAB6:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t5 = (2 - 3);
    t12 = (t5 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t15 = *((unsigned char *)t2);
    t4 = (t0 + 2904);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t15;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB10:;
LAB11:    t3 = (t0 + 2824);
    *((int *)t3) = 0;
    goto LAB2;

LAB12:    goto LAB11;

LAB14:    goto LAB12;

}


extern void work_a_1989713131_1893334735_init()
{
	static char *pe[] = {(void *)work_a_1989713131_1893334735_p_0};
	xsi_register_didat("work_a_1989713131_1893334735", "isim/mux_zad3_test_isim_beh.exe.sim/work/a_1989713131_1893334735.didat");
	xsi_register_executes(pe);
}
