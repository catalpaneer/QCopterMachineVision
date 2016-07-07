/* #include "qCopterMV_bsp.h" */

#ifndef __QCOPTERMV_BSP_H
#define __QCOPTERMV_BSP_H

#include "drivers\stm32f4_system.h"
/*====================================================================================================*/
/*====================================================================================================*/
#define LED_R_PIN           GPIO_Pin_3
#define LED_R_GPIO_PORT     GPIOA
#define LED_R_Set()         __GPIO_SET(LED_R_GPIO_PORT, LED_R_PIN)
#define LED_R_Reset()       __GPIO_RST(LED_R_GPIO_PORT, LED_R_PIN)
#define LED_R_Toggle()      __GPIO_TOG(LED_R_GPIO_PORT, LED_R_PIN)

#define LED_G_PIN           GPIO_Pin_2
#define LED_G_GPIO_PORT     GPIOA
#define LED_G_Set()         __GPIO_SET(LED_G_GPIO_PORT, LED_G_PIN)
#define LED_G_Reset()       __GPIO_RST(LED_G_GPIO_PORT, LED_G_PIN)
#define LED_G_Toggle()      __GPIO_TOG(LED_G_GPIO_PORT, LED_G_PIN)

#define LED_B_PIN           GPIO_Pin_1
#define LED_B_GPIO_PORT     GPIOA
#define LED_B_Set()         __GPIO_SET(LED_B_GPIO_PORT, LED_B_PIN)
#define LED_B_Reset()       __GPIO_RST(LED_B_GPIO_PORT, LED_B_PIN)
#define LED_B_Toggle()      __GPIO_TOG(LED_B_GPIO_PORT, LED_B_PIN)

#define KEY_PIN             GPIO_Pin_2
#define KEY_GPIO_PORT       GPIOB
#define KEY_Read()          (__GPIO_READ(KEY_GPIO_PORT, KEY_PIN) == KEY_PIN)
/*====================================================================================================*/
/*====================================================================================================*/
void QMV_GPIO_Config( void );
void QMV_PWM_Config( void );
/*====================================================================================================*/
/*====================================================================================================*/
#endif
