/*
 * button.h
 *
 *  Created on: Nov 1, 2022
 *      Author: Chung Thinh
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NUMBER_OF_BUTTON	3
#define NORMAL_STATE		GPIO_PIN_SET
#define PRESSED_STATE		GPIO_PIN_RESET

int isButtonPressed();

void getKeyInput();

#endif /* INC_BUTTON_H_ */
