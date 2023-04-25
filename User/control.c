#include "control.h"

//ֱ��50%
void go_straight_50(void)
{
	HAL_GPIO_WritePin(ain1_GPIO_Port,ain1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(ain2_GPIO_Port,ain2_Pin,GPIO_PIN_SET);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_3,250);
	
	HAL_GPIO_WritePin(bin1_GPIO_Port,bin1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(bin2_GPIO_Port,bin2_Pin,GPIO_PIN_SET);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_4,250);
	
}
//��ת
void turn_left_20(void)
{
	HAL_GPIO_WritePin(ain1_GPIO_Port,ain1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(ain2_GPIO_Port,ain2_Pin,GPIO_PIN_SET);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_3,100);
	
	
	HAL_GPIO_WritePin(bin1_GPIO_Port,bin1_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(bin2_GPIO_Port,bin2_Pin,GPIO_PIN_RESET);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_4,100);
	
}
//��ת
void turn_right_20(void)
{
	HAL_GPIO_WritePin(ain1_GPIO_Port,ain1_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(ain2_GPIO_Port,ain2_Pin,GPIO_PIN_RESET);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_3,100);
	
	HAL_GPIO_WritePin(bin1_GPIO_Port,bin1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(bin2_GPIO_Port,bin2_Pin,GPIO_PIN_SET);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_4,100);
	
}
//ƫ�ң����󲹳�
void left_compensation(void)
{
	HAL_GPIO_WritePin(ain1_GPIO_Port,ain1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(ain2_GPIO_Port,ain2_Pin,GPIO_PIN_SET);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_3,300);
	
	HAL_GPIO_WritePin(bin1_GPIO_Port,bin1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(bin2_GPIO_Port,bin2_Pin,GPIO_PIN_SET);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_4,100);
	
}
//ƫ�����Ҳ���
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

