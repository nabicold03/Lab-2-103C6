/*
 * software_timer.c
 *
 *  Created on: Sep 30, 2023
 *      Author: Admin
 */

#include"software_timer.h"
int timer1_flag=0;
int timer1_counter=0;
int TIMER_CYCLE=10;
void setTimer1(int duration){
	timer1_flag=0;
	timer1_counter=duration/TIMER_CYCLE;
}
void timerRun(){
	if(timer1_counter > 0){
		timer1_counter--;
		if(timer1_counter <= 0){
			timer1_flag=1;
		}
	}
}
