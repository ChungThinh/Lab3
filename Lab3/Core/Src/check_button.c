/*
 * check_button.c
 *
 *  Created on: Nov 8, 2022
 *      Author: Chung Thinh
 */
#include "check_button.h"

void check_button_run()
{
	if(isButtonPressed(0) == 1)
	{
		count_button++;
	}
	switch(count_button)
	{
		case 2:
			HAL_GPIO_WritePin(RED_LINE_GPIO_Port,RED_LINE_Pin, SET);
			HAL_GPIO_WritePin(RED_ROW_GPIO_Port,RED_ROW_Pin , SET);
			count_led1 = 2;
			count_led2 = 1;
			setTimer1(500);
			status = MODE;
			status_led = Mode2;
			led_display_run(Mode2);
			break;
		case 3:
			HAL_GPIO_WritePin(YELLOW_LINE_GPIO_Port, YELLOW_LINE_Pin, SET);
			HAL_GPIO_WritePin(YELLOW_ROW_GPIO_Port, YELLOW_ROW_Pin, SET);
			count_led1 = 3;
			count_led2 = 1;
			setTimer1(500);
			status = MODE;
			status_led = Mode3;
			led_display_run(Mode3);
			break;
		case 4:
			HAL_GPIO_WritePin(GREEN_LINE_GPIO_Port, GREEN_LINE_Pin, SET);
			HAL_GPIO_WritePin(GREEN_ROW_GPIO_Port, GREEN_ROW_Pin, SET);
			count_led1 = 4;
			count_led2 = 1;
			setTimer1(500);
			status = MODE;
			status_led = Mode4;
			led_display_run(Mode4);
			break;
		case 5:
			status = INIT;
			break;
	}
	if(count_button == 5)
	{
		count_button = 1;

	}
}
