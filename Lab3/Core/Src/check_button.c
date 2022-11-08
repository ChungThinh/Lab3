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
		count_button++;
	}
	switch(count_button)
	{
		case 2:
			status = Mode2;
			break;
		case 3:
			status = Mode3;
			break;
		case 4:
			status = Mode4;
			break;
	}
}
