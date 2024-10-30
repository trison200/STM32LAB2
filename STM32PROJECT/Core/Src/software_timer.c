/*
 * software_timer.c
 *
 *  Created on: Oct 30, 2024
 *      Author: ADMIN
 */

#include "software_timer.h"

int timer1_counter = 0;
int timer1_flag = 0;

void setTimer1(int duration){
	timer1_counter = duration;
	timer1_flag = 2;
}

void timerRun(){
	if(timer1_counter > 0){
		timer1_counter--;
	}
	if(timer1_counter <= 0){
		timer1_flag = 1;
	}
	if(timer1_counter==100){
		timer1_flag = 2;
	}
}
