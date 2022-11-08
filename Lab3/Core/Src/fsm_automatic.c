/*
 * fsm_automatic.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Chung Thinh
 */
#include "fsm_automatic.h"


void fsm_automatic_run()
{
	switch(status)
	{
	case INIT:
		led_display_run(INIT);
		status = AUTO_RED_GREEN;
		setTimer1(3000);
		setTimer2(100);
		setTimer3(1000);
		count_led1 = 4;
		count_led2 = 2;
		break;
	case AUTO_RED_GREEN:
		led_display_run(AUTO_RED_GREEN);
		if(timer1_flag == 1)
		{
			status = AUTO_YELLOW_ROW;
			count_led2 = 1;
			setTimer1(2000);
			setTimer3(1000);
		}
		led7SEG_run();
		check_button_run();
		break;
	case AUTO_YELLOW_ROW:
		led_display_run(AUTO_YELLOW_ROW);
		if(timer1_flag == 1)
		{
			status = AUTO_GREEN_RED;
			count_led1 = 2;
			count_led2 = 4;
			setTimer1(3000);
			setTimer3(1000);
		}
		led7SEG_run();
		check_button_run();
		break;
	case AUTO_GREEN_RED:
		led_display_run(AUTO_GREEN_RED);
		if(timer1_flag == 1)
		{
			status = AUTO_YELLOW_LINE;
			count_led1 = 1;
			setTimer1(2000);
			setTimer3(1000);
		}
		led7SEG_run();
		check_button_run();
		break;
	case AUTO_YELLOW_LINE:
		led_display_run(AUTO_YELLOW_LINE);
		if(timer1_flag == 1)
		{
			status = INIT;
		}
		led7SEG_run();
		check_button_run();
		break;
	case Mode2:
		count_led1 = 2;
		count_led2 = 0;
		led7SEG_run();
		setTimer1(500);
		if(timer1_flag == 1)
		{
			led_display_run(Mode2);
		}
		break;
	default:
		break;
	}
}
