/*
 * led_display.c
 *
 *  Created on: Oct 26, 2022
 *      Author: Chung Thinh
 */
#include "led_display.h"

void led_display_run(int led_status)
{
	switch(led_status)
	{
		case INIT:
			HAL_GPIO_WritePin(RED_LINE_GPIO_Port,RED_LINE_Pin , SET);
			HAL_GPIO_WritePin(GREEN_LINE_GPIO_Port, GREEN_LINE_Pin, SET);
			HAL_GPIO_WritePin(YELLOW_LINE_GPIO_Port, YELLOW_LINE_Pin, SET);
			HAL_GPIO_WritePin(RED_ROW_GPIO_Port,RED_ROW_Pin , SET);
			HAL_GPIO_WritePin(GREEN_ROW_GPIO_Port, GREEN_ROW_Pin, SET);
			HAL_GPIO_WritePin(YELLOW_ROW_GPIO_Port, YELLOW_ROW_Pin, SET);
			break;
		case AUTO_RED_GREEN:
			HAL_GPIO_WritePin(RED_LINE_GPIO_Port,RED_LINE_Pin , RESET);
			HAL_GPIO_WritePin(GREEN_ROW_GPIO_Port, GREEN_ROW_Pin, RESET);
			break;
		case AUTO_YELLOW_ROW:
			HAL_GPIO_WritePin(GREEN_ROW_GPIO_Port, GREEN_ROW_Pin, SET);
			HAL_GPIO_WritePin(YELLOW_ROW_GPIO_Port, YELLOW_ROW_Pin, RESET);
			break;
		case AUTO_GREEN_RED:
			HAL_GPIO_WritePin(RED_LINE_GPIO_Port,RED_LINE_Pin, SET);
			HAL_GPIO_WritePin(GREEN_LINE_GPIO_Port, GREEN_LINE_Pin, RESET);
			HAL_GPIO_WritePin(RED_ROW_GPIO_Port,RED_ROW_Pin , RESET);
			HAL_GPIO_WritePin(YELLOW_ROW_GPIO_Port, YELLOW_ROW_Pin, SET);
			break;
		case AUTO_YELLOW_LINE:
			HAL_GPIO_WritePin(GREEN_LINE_GPIO_Port, GREEN_LINE_Pin, SET);
			HAL_GPIO_WritePin(YELLOW_LINE_GPIO_Port, YELLOW_LINE_Pin, RESET);
			break;
		case Mode2:
			HAL_GPIO_WritePin(RED_LINE_GPIO_Port,RED_LINE_Pin , RESET);
			HAL_GPIO_WritePin(GREEN_LINE_GPIO_Port, GREEN_LINE_Pin, SET);
			HAL_GPIO_WritePin(YELLOW_LINE_GPIO_Port, YELLOW_LINE_Pin, SET);
			HAL_GPIO_WritePin(RED_ROW_GPIO_Port,RED_ROW_Pin , RESET);
			HAL_GPIO_WritePin(GREEN_ROW_GPIO_Port, GREEN_ROW_Pin, SET);
			HAL_GPIO_WritePin(YELLOW_ROW_GPIO_Port, YELLOW_ROW_Pin, SET);
			break;
		default:
			break;
	}
}
