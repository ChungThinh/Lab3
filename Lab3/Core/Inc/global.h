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
#include "check_button.h"
#include "main.h"

#define INIT2	0
#define INIT1	1
#define RED1	2
#define YELLOW1	3
#define GREEN1	4
#define RED2	5
#define YELLOW2	6
#define GREEN2	7
#define MODE	8
#define Mode1	9
#define Mode2	10
#define Mode3	11
#define Mode4	12

#define MAN_RED		12
#define MAN_GREEN	13
#define MAN_YELLOW	14

extern int status1;
extern int status2;
extern int status_led;
extern int status_led1;
extern int status_led2;
extern int count_led1;
extern int count_led2;
extern int red_init;
extern int yellow_init;
extern int green_init;
extern int count_button;
#endif /* INC_GLOBAL_H_ */
