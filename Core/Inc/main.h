/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32g4xx_hal.h"

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
#define LED_RUN_Pin GPIO_PIN_13
#define LED_RUN_GPIO_Port GPIOC
#define LCD_BLK_Pin GPIO_PIN_4
#define LCD_BLK_GPIO_Port GPIOC
#define LCD_RST_Pin GPIO_PIN_12
#define LCD_RST_GPIO_Port GPIOB
#define LCD_DC_Pin GPIO_PIN_13
#define LCD_DC_GPIO_Port GPIOB
#define LCD_CS_Pin GPIO_PIN_14
#define LCD_CS_GPIO_Port GPIOB
#define CODER_PIN3_Pin GPIO_PIN_10
#define CODER_PIN3_GPIO_Port GPIOA
#define CODER_PIN2_Pin GPIO_PIN_11
#define CODER_PIN2_GPIO_Port GPIOA
#define CODER_PIN1_Pin GPIO_PIN_12
#define CODER_PIN1_GPIO_Port GPIOA
#define KEY3_Pin GPIO_PIN_3
#define KEY3_GPIO_Port GPIOB
#define KEY2_Pin GPIO_PIN_4
#define KEY2_GPIO_Port GPIOB
#define KEY4_Pin GPIO_PIN_5
#define KEY4_GPIO_Port GPIOB
#define KEY1_Pin GPIO_PIN_6
#define KEY1_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */