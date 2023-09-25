/*
 * software_timer.c
 *
 *  Created on: Sep 25, 2023
 *      Author: Admin
 */

#include"software_timer.h"

int timer_flag[3]={0,0,0};
int timer_counter[3]={0,0,0};

void setTimer(int index, int duration){
	timer_flag[index]=0;
	timer_counter[index]=duration;
}

void timerRun(){
	if(timer_counter[0] > 0){
		timer_counter[0]--;
		if(timer_counter[0] <= 0){
			timer_flag[0]=1;
		}
	}
	if(timer_counter[1] > 0){
		timer_counter[1]--;
		if(timer_counter[1] <= 0){
			timer_flag[1]=1;
		}
	}
	if(timer_counter[2] > 0){
		timer_counter[2]--;
		if(timer_counter[2] <= 0){
			timer_flag[2]=1;
		}
	}
}
