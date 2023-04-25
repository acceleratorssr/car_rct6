/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */



/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ain1_Pin GPIO_PIN_0
#define ain1_GPIO_Port GPIOC
#define ain2_Pin GPIO_PIN_1
#define ain2_GPIO_Port GPIOC
#define bin1_Pin GPIO_PIN_2
#define bin1_GPIO_Port GPIOC
#define bin2_Pin GPIO_PIN_3
#define bin2_GPIO_Port GPIOC
#define l1_Pin GPIO_PIN_0
#define l1_GPIO_Port GPIOB
#define m_Pin GPIO_PIN_1
#define m_GPIO_Port GPIOB
#define r1_Pin GPIO_PIN_2
#define r1_GPIO_Port GPIOB
#define state_Pin GPIO_PIN_6
#define state_GPIO_Port GPIOC
#define DO_medicine_Pin GPIO_PIN_3
#define DO_medicine_GPIO_Port GPIOB
#define led_green_Pin GPIO_PIN_5
#define led_green_GPIO_Port GPIOB
#define led_red_Pin GPIO_PIN_6
#define led_red_GPIO_Port GPIOB
#define pwma_Pin GPIO_PIN_8
#define pwma_GPIO_Port GPIOB
#define pwmb_Pin GPIO_PIN_9
#define pwmb_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

#define uchar unsigned char
#define uint unsigned int

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
