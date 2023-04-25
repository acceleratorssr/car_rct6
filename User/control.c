#include "control.h"

//Ö±×ß50%
void go_straight_50(void)
{
	HAL_GPIO_WritePin(ain1_GPIO_Port,ain1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(ain2_GPIO_Port,ain2_Pin,GPIO_PIN_SET);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_3,250);
	
	HAL_GPIO_WritePin(bin1_GPIO_Port,bin1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(bin2_GPIO_Port,bin2_Pin,GPIO_PIN_SET);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_4,250);
	
}
//×ó×ª
void turn_left_20(void)
{
	HAL_GPIO_WritePin(ain1_GPIO_Port,ain1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(ain2_GPIO_Port,ain2_Pin,GPIO_PIN_SET);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_3,100);
	
	
	HAL_GPIO_WritePin(bin1_GPIO_Port,bin1_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(bin2_GPIO_Port,bin2_Pin,GPIO_PIN_RESET);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_4,100);
	
}
//ÓÒ×ª
void turn_right_20(void)
{
	HAL_GPIO_WritePin(ain1_GPIO_Port,ain1_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(ain2_GPIO_Port,ain2_Pin,GPIO_PIN_RESET);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_3,100);
	
	HAL_GPIO_WritePin(bin1_GPIO_Port,bin1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(bin2_GPIO_Port,bin2_Pin,GPIO_PIN_SET);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_4,100);
	
}
//Æ«ÓÒ£¬Ïò×ó²¹³¥
void left_compensation(void)
{
	HAL_GPIO_WritePin(ain1_GPIO_Port,ain1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(ain2_GPIO_Port,ain2_Pin,GPIO_PIN_SET);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_3,300);
	
	HAL_GPIO_WritePin(bin1_GPIO_Port,bin1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(bin2_GPIO_Port,bin2_Pin,GPIO_PIN_SET);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_4,100);
	
}
//Æ«×ó£¬ÏòÓÒ²¹³¥
void right_compensation(void)
{
	HAL_GPIO_WritePin(ain1_GPIO_Port,ain1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(ain2_GPIO_Port,ain2_Pin,GPIO_PIN_SET);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_3,100);
	
	HAL_GPIO_WritePin(bin1_GPIO_Port,bin1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(bin2_GPIO_Port,bin2_Pin,GPIO_PIN_SET);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_4,300);
	
}

void stop(void)
{
	HAL_GPIO_WritePin(ain1_GPIO_Port,ain1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(ain2_GPIO_Port,ain2_Pin,GPIO_PIN_RESET);

	HAL_GPIO_WritePin(bin1_GPIO_Port,bin1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(bin2_GPIO_Port,bin2_Pin,GPIO_PIN_RESET);
	
/*
	
	HAL_GPIO_WritePin(ain1_GPIO_Port,ain1_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(ain2_GPIO_Port,ain2_Pin,GPIO_PIN_RESET);
	__HAL_TIM_SET_COMPARE(50);
	
	HAL_GPIO_WritePin(bin1_GPIO_Port,bin1_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(bin2_GPIO_Port,bin2_Pin,GPIO_PIN_RESET);
	__HAL_TIM_SET_COMPARE(50);
	
*/
	
}

