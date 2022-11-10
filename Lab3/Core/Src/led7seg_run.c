/*
 * led7seg_run.c
 *
 *  Created on: Nov 8, 2022
 *      Author: Chung Thinh
 */
#include "led7seg_run.h"

void led7SEG_run1()
{
	if(timer2_flag == 1)
	{
		two_led7SEG2();
		two_led7SEG1();
		setTimer2(100);
	}
	if(status1 != MODE)
	{
		if(timer3_flag == 1)
		{
			count_led1--;
			setTimer3(1000);
		}
	}
}

void led7SEG_run2()
{
	if(status2 != MODE)
	{
		if(timer5_flag == 1)
		{
			count_led2--;
			setTimer5(1000);
		}
	}
}
