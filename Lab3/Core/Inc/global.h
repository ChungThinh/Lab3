/*
 * global.h
 *
 *  Created on: Nov 1, 2022
 *      Author: Chung Thinh
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "led_display.h"
#include "led7seg.h"
#include "led7seg_run.h"
#include "main.h"

#define INIT				1
#define AUTO_RED_GREEN 		2
#define AUTO_YELLOW_ROW 	3
#define AUTO_GREEN_RED		4
#define AUTO_YELLOW_LINE	5
#define Mode1				6
#define Mode2				7
#define Mode3				8
#define Mode4				9

#define MAN_RED		12
#define MAN_GREEN	13
#define MAN_YELLOW	14

extern int status;
extern int status_led1;
extern int status_led2;
extern int count_led1;
extern int count_led2;

#endif /* INC_GLOBAL_H_ */