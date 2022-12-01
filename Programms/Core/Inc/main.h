/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#include "stm32g0xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define FWD_LMTR_PWM_Pin GPIO_PIN_1
#define FWD_LMTR_PWM_GPIO_Port GPIOC
#define PWR_STS_LED_Pin GPIO_PIN_3
#define PWR_STS_LED_GPIO_Port GPIOC
#define PWR_STS_ADC_Pin GPIO_PIN_0
#define PWR_STS_ADC_GPIO_Port GPIOA
#define REV_LMTR_PWM_Pin GPIO_PIN_1
#define REV_LMTR_PWM_GPIO_Port GPIOA
#define VCP_TX_Pin GPIO_PIN_2
#define VCP_TX_GPIO_Port GPIOA
#define VCP_RX_Pin GPIO_PIN_3
#define VCP_RX_GPIO_Port GPIOA
#define COLOR_OUT_Pin GPIO_PIN_6
#define COLOR_OUT_GPIO_Port GPIOA
#define SERVO_UART_Pin GPIO_PIN_4
#define SERVO_UART_GPIO_Port GPIOC
#define COLOR_S2_Pin GPIO_PIN_1
#define COLOR_S2_GPIO_Port GPIOB
#define COLOR_S3_Pin GPIO_PIN_2
#define COLOR_S3_GPIO_Port GPIOB
#define COLOR_EN1_Pin GPIO_PIN_10
#define COLOR_EN1_GPIO_Port GPIOB
#define COLOR_EN2_Pin GPIO_PIN_11
#define COLOR_EN2_GPIO_Port GPIOB
#define COLOR_LED1_Pin GPIO_PIN_13
#define COLOR_LED1_GPIO_Port GPIOB
#define COLOR_LED2_Pin GPIO_PIN_14
#define COLOR_LED2_GPIO_Port GPIOB
#define INFRA1_Pin GPIO_PIN_15
#define INFRA1_GPIO_Port GPIOB
#define INFRA1_EXTI_IRQn EXTI4_15_IRQn
#define ENC_L_A_Pin GPIO_PIN_8
#define ENC_L_A_GPIO_Port GPIOA
#define ENC_L_B_Pin GPIO_PIN_9
#define ENC_L_B_GPIO_Port GPIOA
#define ENC_R_A_Pin GPIO_PIN_6
#define ENC_R_A_GPIO_Port GPIOC
#define ENC_R_B_Pin GPIO_PIN_7
#define ENC_R_B_GPIO_Port GPIOC
#define TOF1_SDA_Pin GPIO_PIN_10
#define TOF1_SDA_GPIO_Port GPIOA
#define TOF2_SCL_Pin GPIO_PIN_11
#define TOF2_SCL_GPIO_Port GPIOA
#define TOF2_SDA_Pin GPIO_PIN_12
#define TOF2_SDA_GPIO_Port GPIOA
#define REV_RMTR_PWM_Pin GPIO_PIN_1
#define REV_RMTR_PWM_GPIO_Port GPIOD
#define INFRA2_Pin GPIO_PIN_2
#define INFRA2_GPIO_Port GPIOD
#define INFRA2_EXTI_IRQn EXTI2_3_IRQn
#define TOF1_SCL_Pin GPIO_PIN_6
#define TOF1_SCL_GPIO_Port GPIOB
#define FWD_RMTR_PWM_Pin GPIO_PIN_7
#define FWD_RMTR_PWM_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
