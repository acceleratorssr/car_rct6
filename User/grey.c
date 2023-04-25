#include "grey.h"

uchar l1,m,r1,DO_medicine;
GPIO_PinState pin_state_f,pin_state_l;

void read_follow(void)
{
	pin_state_f = HAL_GPIO_ReadPin(l1_GPIO_Port,l1_Pin);
	l1 = (pin_state_f == GPIO_PIN_SET) ? 1 : 0;
	
	pin_state_f = HAL_GPIO_ReadPin(m_GPIO_Port,m_Pin);
	m = (pin_state_f == GPIO_PIN_SET) ? 1 : 0;
	
	pin_state_f = HAL_GPIO_ReadPin(r1_GPIO_Port, r1_Pin);
	r1 = (pin_state_f == GPIO_PIN_SET) ? 1 : 0;
}


void grey_go(void)
{
	go_straight_50();
	//正常
	if(!l1 && m && !r1)
	{
			go_straight_50();
	}
	//偏右
	if(l1 && !m && !r1)
	{
		left_compensation();
	}
	//偏左
	if(!l1 && !m && r1)
	{
		right_compensation();
	}
	//左转or右转
//	if((l1 && m && r1) && state)
//	{
//		switch(state)
//		{
//			case 1:turn_left_20();break;
//			case 2:turn_right_20();break;
//		}
//	}

//	为什么state说没找到定义
}

void led_red(char n)
{
	switch(n)
	{
		case 0:HAL_GPIO_WritePin(led_red_GPIO_Port,led_red_Pin,GPIO_PIN_RESET);
		case 1:HAL_GPIO_WritePin(led_red_GPIO_Port,led_red_Pin,GPIO_PIN_SET);
	}
}

void led_green(char n)
{
	switch(n)
	{
		case 0:	HAL_GPIO_WritePin(led_green_GPIO_Port,led_green_Pin,GPIO_PIN_RESET);
		case 1:	HAL_GPIO_WritePin(led_green_GPIO_Port,led_green_Pin,GPIO_PIN_SET);
	}

}



void load(void)
{
	pin_state_l = HAL_GPIO_ReadPin(DO_medicine_GPIO_Port,DO_medicine_Pin);
	DO_medicine = (pin_state_l == GPIO_PIN_SET) ? 1 : 0;

	switch(DO_medicine)
	{
		case 0:grey_go();led_red(1);break;
		case 1:led_red(0);break;
	}
}

