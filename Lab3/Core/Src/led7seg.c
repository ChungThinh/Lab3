/*
 * led7seg.c
 *
 *  Created on: Nov 8, 2022
 *      Author: Chung Thinh
 */
#include "led7seg.h"

void display7SEG(int num)
{
	HAL_GPIO_WritePin ( GPIOA , g_Pin|f_Pin|e_Pin|d_Pin|c_Pin|b_Pin|a_Pin ,RESET );
	switch (num)
	{
	case 0:
		HAL_GPIO_WritePin ( GPIOA , g_Pin ,SET );
		break;
	case 1:
		HAL_GPIO_WritePin ( GPIOA , g_Pin|f_Pin|e_Pin|d_Pin|a_Pin ,SET );
		break;
	case 2:
		HAL_GPIO_WritePin ( GPIOA , f_Pin|c_Pin ,SET );
		break;
	case 3:
		HAL_GPIO_WritePin ( GPIOA , f_Pin|e_Pin ,SET );
		break;
	case 4:
		HAL_GPIO_WritePin ( GPIOA , e_Pin|d_Pin|a_Pin ,SET );
		break;
	case 5:
		HAL_GPIO_WritePin ( GPIOA , e_Pin|b_Pin ,SET );
		break;
	case 6:
		HAL_GPIO_WritePin ( GPIOA , b_Pin ,SET );
		break;
	case 7:
		HAL_GPIO_WritePin ( GPIOA , g_Pin|f_Pin|e_Pin|d_Pin ,SET );
		break;
	case 8:
		break;
	case 9:
		HAL_GPIO_WritePin ( GPIOA , e_Pin ,SET );
		break;
	}
}
void display7SEGOPERSITE(int num)
{
	HAL_GPIO_WritePin ( GPIOA , g1_Pin|f1_Pin|e1_Pin|d1_Pin|c1_Pin|b1_Pin|a1_Pin ,RESET );
	switch (num)
	{
	case 0:
		HAL_GPIO_WritePin ( GPIOA , g1_Pin ,SET );
		break;
	case 1:
		HAL_GPIO_WritePin ( GPIOA , g1_Pin|f1_Pin|e1_Pin|d1_Pin|a1_Pin ,SET );
		break;
	case 2:
		HAL_GPIO_WritePin ( GPIOA , f1_Pin|c1_Pin ,SET );
		break;
	case 3:
		HAL_GPIO_WritePin ( GPIOA , f1_Pin|e1_Pin ,SET );
		break;
	case 4:
		HAL_GPIO_WritePin ( GPIOA , e1_Pin|d1_Pin|a1_Pin ,SET );
		break;
	case 5:
		HAL_GPIO_WritePin ( GPIOA , e1_Pin|b1_Pin ,SET );
		break;
	case 6:
		HAL_GPIO_WritePin ( GPIOA , b1_Pin ,SET );
		break;
	case 7:
		HAL_GPIO_WritePin ( GPIOA , g1_Pin|f1_Pin|e1_Pin|d1_Pin ,SET );
		break;
	case 8:
		break;
	case 9:
		HAL_GPIO_WritePin ( GPIOA , e1_Pin ,SET );
		break;
	}
}

void two_led7SEG1()
{
	HAL_GPIO_WritePin(GPIOB, LINE0_Pin|LINE1_Pin, SET);
	switch(status_led1)
	 {
	 case 0:
		 HAL_GPIO_WritePin(GPIOB, LINE0_Pin, RESET);
		 display7SEG(count_led1/10);
		 status_led1++;
		 break;
	 case 1:
		 HAL_GPIO_WritePin(GPIOB, LINE1_Pin, RESET);
		 display7SEG(count_led1%10);
		 status_led1 = 0;
		 break;
	 }
}
void two_led7SEG2()
{
	HAL_GPIO_WritePin(GPIOB, ROW0_Pin|ROW1_Pin, SET);
	switch(status_led2)
	 {
	 case 0:
		 HAL_GPIO_WritePin(GPIOB, ROW0_Pin, RESET);
		 display7SEGOPERSITE(count_led2/10);
		 status_led2++;
		 break;
	 case 1:
		 HAL_GPIO_WritePin(GPIOB, ROW1_Pin, RESET);
		 display7SEGOPERSITE(count_led2%10);
		 status_led2 = 0;
		 break;
	 }
}
