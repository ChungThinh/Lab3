/*
 * fsm_automatic.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Chung Thinh
 */
#include "fsm_automatic.h"


void fsm_automatic_run1()
{
	switch(status1)
	{
	case INIT1:
		led_display_run(INIT1);
		status1 = RED1;
		setTimer1(red_init*1000);
		setTimer2(100);
		setTimer3(1000);
		count_led1 = red_init - 1;
		break;
	case RED1:
		led_display_run(RED1);
		if(timer1_flag == 1)
		{
			setTimer3(1000);
			status1 = GREEN1;
			count_led1 = green_init - 1;
			setTimer1(green_init*1000);
		}
		led7SEG_run1();
		check_button_run();
		break;
	case GREEN1:
		led_display_run(GREEN1);
		if(timer1_flag == 1)
		{
			setTimer3(1000);
			status1 = YELLOW1;
			count_led1 = yellow_init - 1;
			setTimer1(yellow_init*1000);
		}
		led7SEG_run1();
		check_button_run();
		break;
	case YELLOW1:
		led_display_run(YELLOW1);
		if(timer1_flag == 1)
		{
			status1 = INIT1;
		}
		led7SEG_run1();
		check_button_run();
		break;
	case MODE:
		led7SEG_run1();
		if(timer1_flag == 1)
		{
			led_display_run(status_led);
			setTimer1(500);
		}
		if(isButtonPressed(0) == 1)
		{
			count_button++;
			check_button_run();
		}
		if(isButtonPressed(1) == 1)
		{
			count_led2++;
		}
		if(isButtonPressed(2))
		{
			switch(count_button)
			{
				case 2:
					red_init = count_led2;
					break;
				case 3:
					yellow_init = count_led2;
					break;
				case 4:
					green_init = count_led2;
					break;
			}
			count_button = 0;
			status1 = INIT1;
			status2 = INIT2;
		}
		break;
	default:
		break;
	}
}

void fsm_automatic_run2()
{
	switch(status2)
	{
	case INIT2:
		led_display_run(INIT2);
		status2 = GREEN2;
		setTimer4(green_init*1000);
		count_led2 = green_init - 1;
		setTimer5(1000);
		break;
	case RED2:
		led_display_run(RED2);
		if(timer4_flag == 1)
		{
			setTimer5(1000);
			status2 = GREEN2;
			count_led2 = green_init - 1;
			setTimer4(green_init*1000);
		}
		led7SEG_run2();
		break;
	case GREEN2:
		led_display_run(GREEN2);
		if(timer4_flag == 1)
		{
			setTimer5(1000);
			status2 = YELLOW2;
			count_led2 = yellow_init-1;
			setTimer4(yellow_init*1000);
		}
		led7SEG_run2();
		break;
	case YELLOW2:
		led_display_run(YELLOW2);
		if(timer4_flag == 1)
		{
			setTimer5(1000);
			status2 = RED2;
			count_led2 = red_init-1;
			setTimer4(red_init*1000);
		}
		led7SEG_run2();
		break;
	case MODE:
		break;
	default:
		break;
	}
}
