#ifndef __CONTROL_H
#define __CONTROL_H

#include "main.h"
#include "stm32f1xx.h"
#include "tim.h"

void go_straight_50(void);
void turn_left_20(void);
void turn_right_20(void);
void left_compensation(void);
void right_compensation(void);
void stop(void);

#endif
