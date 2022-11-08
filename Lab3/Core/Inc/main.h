/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define a_Pin GPIO_PIN_0
#define a_GPIO_Port GPIOA
#define b_Pin GPIO_PIN_1
#define b_GPIO_Port GPIOA
#define c_Pin GPIO_PIN_2
#define c_GPIO_Port GPIOA
#define d_Pin GPIO_PIN_3
#define d_GPIO_Port GPIOA
#define e_Pin GPIO_PIN_4
#define e_GPIO_Port GPIOA
#define f_Pin GPIO_PIN_5
#define f_GPIO_Port GPIOA
#define g_Pin GPIO_PIN_6
#define g_GPIO_Port GPIOA
#define a1_Pin GPIO_PIN_7
#define a1_GPIO_Port GPIOA
#define BUTTON1_Pin GPIO_PIN_0
#define BUTTON1_GPIO_Port GPIOB
#define BUTTON2_Pin GPIO_PIN_1
#define BUTTON2_GPIO_Port GPIOB
#define BUTTON3_Pin GPIO_PIN_2
#define BUTTON3_GPIO_Port GPIOB
#define LINE1_Pin GPIO_PIN_10
#define LINE1_GPIO_Port GPIOB
#define ROW0_Pin GPIO_PIN_11
#define ROW0_GPIO_Port GPIOB
#define ROW1_Pin GPIO_PIN_12
#define ROW1_GPIO_Port GPIOB
#define b1_Pin GPIO_PIN_8
#define b1_GPIO_Port GPIOA
#define c1_Pin GPIO_PIN_9
#define c1_GPIO_Port GPIOA
#define d1_Pin GPIO_PIN_10
#define d1_GPIO_Port GPIOA
#define e1_Pin GPIO_PIN_11
#define e1_GPIO_Port GPIOA
#define f1_Pin GPIO_PIN_12
#define f1_GPIO_Port GPIOA
#define g1_Pin GPIO_PIN_13
#define g1_GPIO_Port GPIOA
#define RED_LINE_Pin GPIO_PIN_3
#define RED_LINE_GPIO_Port GPIOB
#define GREEN_LINE_Pin GPIO_PIN_4
#define GREEN_LINE_GPIO_Port GPIOB
#define YELLOW_LINE_Pin GPIO_PIN_5
#define YELLOW_LINE_GPIO_Port GPIOB
#define RED_ROW_Pin GPIO_PIN_6
#define RED_ROW_GPIO_Port GPIOB
#define GREEN_ROW_Pin GPIO_PIN_7
#define GREEN_ROW_GPIO_Port GPIOB
#define YELLOW_ROW_Pin GPIO_PIN_8
#define YELLOW_ROW_GPIO_Port GPIOB
#define LINE0_Pin GPIO_PIN_9
#define LINE0_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
