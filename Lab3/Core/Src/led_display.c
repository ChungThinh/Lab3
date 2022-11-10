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
		case INIT1:
			HAL_GPIO_WritePin(RED_LINE_GPIO_Port,RED_LINE_Pin , SET);
			HAL_GPIO_WritePin(GREEN_LINE_GPIO_Port, GREEN_LINE_Pin, SET);
			HAL_GPIO_WritePin(YELLOW_LINE_GPIO_Port, YELLOW_LINE_Pin, SET);
			break;
		case INIT2:
			HAL_GPIO_WritePin(RED_ROW_GPIO_Port,RED_ROW_Pin , SET);
			HAL_GPIO_WritePin(GREEN_ROW_GPIO_Port, GREEN_ROW_Pin, SET);
			HAL_GPIO_WritePin(YELLOW_ROW_GPIO_Port, YELLOW_ROW_Pin, SET);
			break;
		case RED1:
			HAL_GPIO_WritePin(RED_LINE_GPIO_Port,RED_LINE_Pin , RESET);
			HAL_GPIO_WritePin(GREEN_LINE_GPIO_Port, GREEN_LINE_Pin, SET);
			HAL_GPIO_WritePin(YELLOW_LINE_GPIO_Port, YELLOW_LINE_Pin, SET);
			break;
		case YELLOW1:
			HAL_GPIO_WritePin(RED_LINE_GPIO_Port,RED_LINE_Pin , SET);
			HAL_GPIO_WritePin(GREEN_LINE_GPIO_Port, GREEN_LINE_Pin, SET);
			HAL_GPIO_WritePin(YELLOW_LINE_GPIO_Port, YELLOW_LINE_Pin, RESET);
			break;
		case GREEN1:
			HAL_GPIO_WritePin(RED_LINE_GPIO_Port,RED_LINE_Pin , SET);
			HAL_GPIO_WritePin(GREEN_LINE_GPIO_Port, GREEN_LINE_Pin, RESET);
			HAL_GPIO_WritePin(YELLOW_LINE_GPIO_Port, YELLOW_LINE_Pin, SET);
			break;
		case RED2:
			HAL_GPIO_WritePin(RED_ROW_GPIO_Port,RED_ROW_Pin , RESET);
			HAL_GPIO_WritePin(GREEN_ROW_GPIO_Port, GREEN_ROW_Pin, SET);
			HAL_GPIO_WritePin(YELLOW_ROW_GPIO_Port, YELLOW_ROW_Pin, SET);
			break;
		case YELLOW2:
			HAL_GPIO_WritePin(RED_ROW_GPIO_Port,RED_ROW_Pin , SET);
			HAL_GPIO_WritePin(GREEN_ROW_GPIO_Port, GREEN_ROW_Pin, SET);
			HAL_GPIO_WritePin(YELLOW_ROW_GPIO_Port, YELLOW_ROW_Pin, RESET);
			break;
		case GREEN2:
			HAL_GPIO_WritePin(RED_ROW_GPIO_Port,RED_ROW_Pin , SET);
			HAL_GPIO_WritePin(GREEN_ROW_GPIO_Port, GREEN_ROW_Pin, RESET);
			HAL_GPIO_WritePin(YELLOW_ROW_GPIO_Port, YELLOW_ROW_Pin, SET);
			break;
		case Mode2:
			HAL_GPIO_TogglePin(RED_LINE_GPIO_Port,RED_LINE_Pin);
			HAL_GPIO_WritePin(GREEN_LINE_GPIO_Port, GREEN_LINE_Pin, SET);
			HAL_GPIO_WritePin(YELLOW_LINE_GPIO_Port, YELLOW_LINE_Pin, SET);
			HAL_GPIO_TogglePin(RED_ROW_GPIO_Port,RED_ROW_Pin);
			HAL_GPIO_WritePin(GREEN_ROW_GPIO_Port, GREEN_ROW_Pin, SET);
			HAL_GPIO_WritePin(YELLOW_ROW_GPIO_Port, YELLOW_ROW_Pin, SET);
			break;
		case Mode3:
			HAL_GPIO_WritePin(RED_LINE_GPIO_Port,RED_LINE_Pin , SET);
			HAL_GPIO_WritePin(GREEN_LINE_GPIO_Port, GREEN_LINE_Pin, SET);
			HAL_GPIO_TogglePin(YELLOW_LINE_GPIO_Port, YELLOW_LINE_Pin);
			HAL_GPIO_WritePin(RED_ROW_GPIO_Port,RED_ROW_Pin , SET);
			HAL_GPIO_WritePin(GREEN_ROW_GPIO_Port, GREEN_ROW_Pin, SET);
			HAL_GPIO_TogglePin(YELLOW_ROW_GPIO_Port, YELLOW_ROW_Pin);
			break;
		case Mode4:
			HAL_GPIO_WritePin(RED_LINE_GPIO_Port,RED_LINE_Pin , SET);
			HAL_GPIO_TogglePin(GREEN_LINE_GPIO_Port, GREEN_LINE_Pin);
			HAL_GPIO_WritePin(YELLOW_LINE_GPIO_Port, YELLOW_LINE_Pin, SET);
			HAL_GPIO_WritePin(RED_ROW_GPIO_Port,RED_ROW_Pin , SET);
			HAL_GPIO_TogglePin(GREEN_ROW_GPIO_Port, GREEN_ROW_Pin);
			HAL_GPIO_WritePin(YELLOW_ROW_GPIO_Port, YELLOW_ROW_Pin, SET);
			break;
		default:
			break;
	}
}
