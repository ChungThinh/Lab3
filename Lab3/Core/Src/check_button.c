/*
 * check_button.c
 *
 *  Created on: Nov 8, 2022
 *      Author: Chung Thinh
 */
#include "check_button.h"

void check_button_run()
{
	if(isButtonPressed(0))
	{
		status = Mode1;
	}
}
