#ifndef __GREY_H
#define __GREY_H

#include "control.h"
#include "main.h"

extern uchar state;

void read_follow(void);
void grey_go(void);
void led_red(char n);
void led_green(char n);
void load(void);

#endif
