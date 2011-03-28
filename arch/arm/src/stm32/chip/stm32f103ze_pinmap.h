/************************************************************************************
 * arch/arm/src/stm32/chip/stm32f103ze_pinmap.h
 *
 *   Copyright (C) 2009, 2011 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <spudmonkey@racsa.co.cr>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ************************************************************************************/

#ifndef __ARCH_ARM_SRC_STM32_CHIP_STM32F103ZE_PINMAP_H
#define __ARCH_ARM_SRC_STM32_CHIP_STM32F103ZE_PINMAP_H

/************************************************************************************
 * Included Files
 ************************************************************************************/

#include <nuttx/config.h>

/************************************************************************************
 * Pre-processor Definitions
 ************************************************************************************/

/* Alternate Pin Functions: */

/* TIMERS */

#if defined(CONFIG_STM32_TIM1_FULL_REMAP)
#  define GPIO_TIM1_ETR     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTE|GPIO_PIN7)
#  define GPIO_TIM1_CH1IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTE|GPIO_PIN9)
#  define GPIO_TIM1_CH1OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN9)
#  define GPIO_TIM1_CH2IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTE|GPIO_PIN11)
#  define GPIO_TIM1_CH2OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN11)
#  define GPIO_TIM1_CH3IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTE|GPIO_PIN13)
#  define GPIO_TIM1_CH3OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN13)
#  define GPIO_TIM1_CH4IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTE|GPIO_PIN14)
#  define GPIO_TIM1_CH4OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN14)
#  define GPIO_TIM1_BKIN    (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTE|GPIO_PIN15)
#  define GPIO_TIM1_CH1N    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN8)
#  define GPIO_TIM1_CH2N    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN10)
#  define GPIO_TIM1_CH3N    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN12)
#elif defined(CONFIG_STM32_TIM1_PARTIAL_REMAP)
#  define GPIO_TIM1_ETR     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN12)
#  define GPIO_TIM1_CH1IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN8)
#  define GPIO_TIM1_CH1OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN8)
#  define GPIO_TIM1_CH2IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN9)
#  define GPIO_TIM1_CH2OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN9)
#  define GPIO_TIM1_CH3IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN10)
#  define GPIO_TIM1_CH3OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN10)
#  define GPIO_TIM1_CH4IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN11)
#  define GPIO_TIM1_CH4OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN11)
#  define GPIO_TIM1_BKIN    (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN6)
#  define GPIO_TIM1_CH1N    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN7)
#  define GPIO_TIM1_CH2N    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN0)
#  define GPIO_TIM1_CH3N    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN1)
#else
#  define GPIO_TIM1_ETR     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN12)
#  define GPIO_TIM1_CH1IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN8)
#  define GPIO_TIM1_CH1OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN8)
#  define GPIO_TIM1_CH2IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN9)
#  define GPIO_TIM1_CH2OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN9)
#  define GPIO_TIM1_CH3IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN10)
#  define GPIO_TIM1_CH3OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN10)
#  define GPIO_TIM1_CH4IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN11)
#  define GPIO_TIM1_CH4OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN11)
#  define GPIO_TIM1_BKIN    (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN12)
#  define GPIO_TIM1_CH1N    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN13)
#  define GPIO_TIM1_CH2N    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN14)
#  define GPIO_TIM1_CH3N    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN15)
#endif

#if defined(CONFIG_STM32_TIM2_FULL_REMAP)
#  define GPIO_TIM2_ETR     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN15)
#  define GPIO_TIM2_CH1IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN15)
#  define GPIO_TIM2_CH1OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN15)
#  define GPIO_TIM2_CH2IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN3)
#  define GPIO_TIM2_CH2OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN3)
#  define GPIO_TIM2_CH3IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN10)
#  define GPIO_TIM2_CH3OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN10)
#  define GPIO_TIM2_CH4IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN11)
#  define GPIO_TIM2_CH4OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN11)
#elif defined(CONFIG_STM32_TIM2_PARTIAL_REMAP_1)
#  define GPIO_TIM2_ETR     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN15)
#  define GPIO_TIM2_CH1IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN15)
#  define GPIO_TIM2_CH1OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN15)
#  define GPIO_TIM2_CH2IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN3)
#  define GPIO_TIM2_CH2OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN3)
#  define GPIO_TIM2_CH3IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN2)
#  define GPIO_TIM2_CH3OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN2)
#  define GPIO_TIM2_CH4IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN3)
#  define GPIO_TIM2_CH4OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN3)
#elif defined(CONFIG_STM32_TIM2_PARTIAL_REMAP_2)
#  define GPIO_TIM2_ETR     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN0)
#  define GPIO_TIM2_CH1IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN0)
#  define GPIO_TIM2_CH1OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN0)
#  define GPIO_TIM2_CH2IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN1)
#  define GPIO_TIM2_CH2OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN1)
#  define GPIO_TIM2_CH3IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN10)
#  define GPIO_TIM2_CH3OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN10)
#  define GPIO_TIM2_CH4IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN11)
#  define GPIO_TIM2_CH4OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN11)
#else
#  define GPIO_TIM2_ETR     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN0)
#  define GPIO_TIM2_CH1IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN0)
#  define GPIO_TIM2_CH1OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN0)
#  define GPIO_TIM2_CH2IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN1)
#  define GPIO_TIM2_CH2OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN1)
#  define GPIO_TIM2_CH3IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN2)
#  define GPIO_TIM2_CH3OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN2)
#  define GPIO_TIM2_CH4IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN3)
#  define GPIO_TIM2_CH4OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN3)
#endif

#if defined(CONFIG_STM32_TIM3_FULL_REMAP)
#  define GPIO_TIM3_CH1IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN6)
#  define GPIO_TIM3_CH1OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTC|GPIO_PIN6)
#  define GPIO_TIM3_CH2IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN7)
#  define GPIO_TIM3_CH2OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTC|GPIO_PIN7)
#  define GPIO_TIM3_CH3IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN8)
#  define GPIO_TIM3_CH3OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTC|GPIO_PIN8)
#  define GPIO_TIM3_CH4IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN9)
#  define GPIO_TIM3_CH4OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTC|GPIO_PIN9)
#elif defined(CONFIG_STM32_TIM3_PARTIAL_REMAP)
#  define GPIO_TIM3_CH1IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN4)
#  define GPIO_TIM3_CH1OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN4)
#  define GPIO_TIM3_CH2IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN5)
#  define GPIO_TIM3_CH2OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN5)
#  define GPIO_TIM3_CH3IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN0)
#  define GPIO_TIM3_CH3OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN0)
#  define GPIO_TIM3_CH4IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN1)
#  define GPIO_TIM3_CH4OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN1)
#else
#  define GPIO_TIM3_CH1IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN6)
#  define GPIO_TIM3_CH1OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN6)
#  define GPIO_TIM3_CH2IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN7)
#  define GPIO_TIM3_CH2OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN7)
#  define GPIO_TIM3_CH3IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN0)
#  define GPIO_TIM3_CH3OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN0)
#  define GPIO_TIM3_CH4IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN1)
#  define GPIO_TIM3_CH4OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN1)
#endif

#if defined(CONFIG_STM32_TIM4_REMAP)
#  define GPIO_TIM4_CH1IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN12)
#  define GPIO_TIM4_CH1OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN12)
#  define GPIO_TIM4_CH2IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN13)
#  define GPIO_TIM4_CH2OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN13)
#  define GPIO_TIM4_CH3IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN14)
#  define GPIO_TIM4_CH3OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN14)
#  define GPIO_TIM4_CH4IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN15)
#  define GPIO_TIM4_CH4OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN15)
#else
#  define GPIO_TIM4_CH1IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN6)
#  define GPIO_TIM4_CH1OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN6)
#  define GPIO_TIM4_CH2IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN7)
#  define GPIO_TIM4_CH2OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN7)
#  define GPIO_TIM4_CH3IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN8)
#  define GPIO_TIM4_CH3OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN8)
#  define GPIO_TIM4_CH4IN   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN9)
#  define GPIO_TIM4_CH4OUT  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN9)
#endif

#define GPIO_TIM5_CH1IN     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN0)
#define GPIO_TIM5_CH1OUT    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN0)
#define GPIO_TIM5_CH2IN     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN1)
#define GPIO_TIM5_CH2OUT    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN1)
#define GPIO_TIM5_CH3IN     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN2)
#define GPIO_TIM5_CH3OUT    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN2)
#define GPIO_TIM5_CH4IN     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN3)
#define GPIO_TIM5_CH4OUT    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN3)

#define GPIO_TIM8_ETR       (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN0)
#define GPIO_TIM8_CH1IN     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN6)
#define GPIO_TIM8_CH1OUT    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTC|GPIO_PIN6)
#define GPIO_TIM8_CH2IN     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN7)
#define GPIO_TIM8_CH2OUT    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTC|GPIO_PIN7)
#define GPIO_TIM8_CH3IN     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN8)
#define GPIO_TIM8_CH3OUT    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTC|GPIO_PIN8)
#define GPIO_TIM8_CH4IN     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN9)
#define GPIO_TIM8_CH4OUT    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTC|GPIO_PIN9)
#define GPIO_TIM8_BKIN      (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN6)
#define GPIO_TIM8_CH1N      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN7)
#define GPIO_TIM8_CH2N      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN0)
#define GPIO_TIM8_CH3N      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN1)

/* USART */

#if defined(CONFIG_STM32_USART1_REMAP)
#  define GPIO_USART1_TX    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN9)
#  define GPIO_USART1_RX    (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN10)
#else
#  define GPIO_USART1_TX    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN9)
#  define GPIO_USART1_RX    (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN10)
#endif

#if defined(CONFIG_STM32_USART2_REMAP)
#  define GPIO_USART2_CTS   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN3)
#  define GPIO_USART2_RTS   (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN4)
#  define GPIO_USART2_TX    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN5)
#  define GPIO_USART2_RX    (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN6)
#  define GPIO_USART2_CK    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN7)
#else
#  define GPIO_USART2_CTS   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN0)
#  define GPIO_USART2_RTS   (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN1)
#  define GPIO_USART2_TX    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN2)
#  define GPIO_USART2_RX    (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN3)
#  define GPIO_USART2_CK    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN4)
#endif

#if defined(CONFIG_STM32_USART3_FULL_REMAP)
#  define GPIO_USART3_TX    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN8)
#  define GPIO_USART3_RX    (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN9)
#  define GPIO_USART3_CK    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN10)
#  define GPIO_USART3_CTS   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN11)
#  define GPIO_USART3_RTS   (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN12)
#elif defined(CONFIG_STM32_USART3_PARTIAL_REMAP)
#  define GPIO_USART3_TX    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTC|GPIO_PIN10)
#  define GPIO_USART3_RX    (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN11)
#  define GPIO_USART3_CK    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTC|GPIO_PIN12)
#  define GPIO_USART3_CTS   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN13)
#  define GPIO_USART3_RTS   (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN14)
#else
#  define GPIO_USART3_TX    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN10)
#  define GPIO_USART3_RX    (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN11)
#  define GPIO_USART3_CK    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN12)
#  define GPIO_USART3_CTS   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN13)
#  define GPIO_USART3_RTS   (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN14)
#endif

/* SPI */

#if defined(CONFIG_STM32_SPI1_REMAP)
#  define GPIO_SPI1_NSS     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN15)
#  define GPIO_SPI1_SCK     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN3)
#  define GPIO_SPI1_MISO    (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN4)
#  define GPIO_SPI1_MOSI    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN5)
#else
#  define GPIO_SPI1_NSS     (GPIO_INPUT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN4)
#  define GPIO_SPI1_SCK     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN5)
#  define GPIO_SPI1_MISO    (GPIO_INPUT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN6)
#  define GPIO_SPI1_MOSI    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN7)
#endif

#if defined(CONFIG_STM32_SPI3_REMAP)
#  define GPIO_SPI3_NSS     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN4)
#  define GPIO_SPI3_SCK     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTC|GPIO_PIN10)
#  define GPIO_SPI3_MISO    (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN11)
#  define GPIO_SPI3_MOSI    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTC|GPIO_PIN12)
#else
#  define GPIO_SPI3_NSS     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN15)
#  define GPIO_SPI3_SCK     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN3)
#  define GPIO_SPI3_MISO    (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN4)
#  define GPIO_SPI3_MOSI    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN5)
#endif

/* I2C */

#if defined(CONFIG_STM32_I2C1_REMAP)
#  define GPIO_I2C1_SCL     (GPIO_ALT|GPIO_CNF_AFOD|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN8)
#  define GPIO_I2C1_SDA     (GPIO_ALT|GPIO_CNF_AFOD|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN9)
#else
#  define GPIO_I2C1_SCL     (GPIO_ALT|GPIO_CNF_AFOD|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN6)
#  define GPIO_I2C1_SDA     (GPIO_ALT|GPIO_CNF_AFOD|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN7)
#endif

#define GPIO_I2C1_SMBA    (GPIO_ALT|GPIO_CNF_INFLOAT|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN5)

#define GPIO_I2C2_SCL     (GPIO_ALT|GPIO_CNF_AFOD|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN10)
#define GPIO_I2C2_SDA     (GPIO_ALT|GPIO_CNF_AFOD|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN11)
#define GPIO_I2C2_SMBA    (GPIO_ALT|GPIO_CNF_INFLOAT|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN12)

/* CAN */

#if defined(CONFIG_STM32_CAN1_REMAP1)
#  define GPIO_CAN1_TX      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN8)
#  define GPIO_CAN1_RX      (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN9)
#elif defined(CONFIG_STM32_CAN1_REMAP2)
#  define GPIO_CAN1_TX      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN0)
#  define GPIO_CAN1_RX      (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN1)
#else
#  define GPIO_CAN1_TX      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTA|GPIO_PIN11)
#  define GPIO_CAN1_RX      (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN12)
#endif

/* FSMC: CF */

#define GPIO_CF_A0        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN0)
#define GPIO_CF_A1        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN1)
#define GPIO_CF_A2        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN2)
#define GPIO_CF_A3        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN3)
#define GPIO_CF_A4        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN4)
#define GPIO_CF_A5        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN5)
#define GPIO_CF_A6        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN12)
#define GPIO_CF_A7        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN13)
#define GPIO_CF_A8        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN14)
#define GPIO_CF_A9        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN15)
#define GPIO_CF_A10       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN0)
#define GPIO_CF_D0        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN14)
#define GPIO_CF_D1        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN15)
#define GPIO_CF_D2        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN0)
#define GPIO_CF_D3        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN1)
#define GPIO_CF_D4        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN7)
#define GPIO_CF_D5        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN8)
#define GPIO_CF_D6        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN9)
#define GPIO_CF_D7        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN10)
#define GPIO_CF_D8        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN11)
#define GPIO_CF_D9        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN12)
#define GPIO_CF_D10       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN13)
#define GPIO_CF_D11       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN14)
#define GPIO_CF_D12       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN15)
#define GPIO_CF_D13       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN8)
#define GPIO_CF_D14       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN9)
#define GPIO_CF_D15       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN10)
#define GPIO_CF_NIORD     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN6)
#define GPIO_CF_NREG      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN7)
#define GPIO_CF_NIOWR     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN8)
#define GPIO_CF_CD        (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTF|GPIO_PIN9)
#define GPIO_CF_INTR      (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTF|GPIO_PIN10)
#define GPIO_CF_NIOS16    (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTF|GPIO_PIN11)
#define GPIO_CF_NOE       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN4)
#define GPIO_CF_NWE       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN5)
#define GPIO_CF_NWAIT     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN6)
#define GPIO_CF_NCE41     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN10)
#define GPIO_CF_NCE42     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN11)

/* FSMC: CF/IDE */

#define GPIO_CFIDE_A0     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN0)
#define GPIO_CFIDE_A1     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN1)
#define GPIO_CFIDE_A2     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN2)
#define GPIO_CFIDE_D0     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN14)
#define GPIO_CFIDE_D1     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN15)
#define GPIO_CFIDE_D2     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN0)
#define GPIO_CFIDE_D3     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN1)
#define GPIO_CFIDE_D4     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN7)
#define GPIO_CFIDE_D5     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN8)
#define GPIO_CFIDE_D6     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN9)
#define GPIO_CFIDE_D7     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN10)
#define GPIO_CFIDE_D8     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN11)
#define GPIO_CFIDE_D9     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN12)
#define GPIO_CFIDE_D10    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN13)
#define GPIO_CFIDE_D11    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN14)
#define GPIO_CFIDE_D12    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN15)
#define GPIO_CFIDE_D13    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN8)
#define GPIO_CFIDE_D14    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN9)
#define GPIO_CFIDE_D15    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN10)
#define GPIO_CFIDE_NIORD  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN6)
#define GPIO_CFIDE_NREG   (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN7)
#define GPIO_CFIDE_NIOWR  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN8)
#define GPIO_CFIDE_CD     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTF|GPIO_PIN9)
#define GPIO_CFIDE_INTR   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTF|GPIO_PIN10)
#define GPIO_CFIDE_NIOS16 (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTF|GPIO_PIN11)
#define GPIO_CFIDE_NOE    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN4)
#define GPIO_CFIDE_NWE    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN5)
#define GPIO_CFIDE_NWAIT  (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN6)
#define GPIO_CFIDE_NCE41  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN10)
#define GPIO_CFIDE_NCE42  (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN11)

/* SDIO */

#define GPIO_SDIO_D0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTC|GPIO_PIN8)

#ifndef CONFIG_SDIO_WIDTH_D1_ONLY
#  define GPIO_SDIO_D1    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTC|GPIO_PIN9)
#  define GPIO_SDIO_D2    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTC|GPIO_PIN10)
#  define GPIO_SDIO_D3    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTC|GPIO_PIN11)
#  define GPIO_SDIO_D4    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN8)
#  define GPIO_SDIO_D5    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTB|GPIO_PIN9)
#  define GPIO_SDIO_D6    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTC|GPIO_PIN6)
#  define GPIO_SDIO_D7    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTC|GPIO_PIN7)
#endif

#define GPIO_SDIO_CK      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTC|GPIO_PIN12)
#define GPIO_SDIO_CMD     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN2)

/* FSMC: NOR/PSRAM/SRAM (NPS) */

#define GPIO_NPS_A0       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN0)
#define GPIO_NPS_A1       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN1)
#define GPIO_NPS_A2       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN2)
#define GPIO_NPS_A3       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN3)
#define GPIO_NPS_A4       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN4)
#define GPIO_NPS_A5       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN5)
#define GPIO_NPS_A6       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN12)
#define GPIO_NPS_A7       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN13)
#define GPIO_NPS_A8       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN14)
#define GPIO_NPS_A9       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTF|GPIO_PIN15)
#define GPIO_NPS_A10      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN0)
#define GPIO_NPS_A11      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN1)
#define GPIO_NPS_A12      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN2)
#define GPIO_NPS_A13      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN3)
#define GPIO_NPS_A14      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN4)
#define GPIO_NPS_A15      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN5)
#define GPIO_NPS_A16      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN11)
#define GPIO_NPS_A17      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN12)
#define GPIO_NPS_A18      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN13)
#define GPIO_NPS_A19      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN3)
#define GPIO_NPS_A20      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN4)
#define GPIO_NPS_A21      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN5)
#define GPIO_NPS_A22      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN6)
#define GPIO_NPS_A23      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN2)
#define GPIO_NPS_A24      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN13)
#define GPIO_NPS_A25      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN14)
#define GPIO_NPS_D0       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN14)
#define GPIO_NPS_D1       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN15)
#define GPIO_NPS_D2       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN0)
#define GPIO_NPS_D3       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN1)
#define GPIO_NPS_D4       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN7)
#define GPIO_NPS_D5       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN8)
#define GPIO_NPS_D6       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN9)
#define GPIO_NPS_D7       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN10)
#define GPIO_NPS_D8       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN11)
#define GPIO_NPS_D9       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN12)
#define GPIO_NPS_D10      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN13)
#define GPIO_NPS_D11      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN14)
#define GPIO_NPS_D12      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN15)
#define GPIO_NPS_D13      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN8)
#define GPIO_NPS_D14      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN9)
#define GPIO_NPS_D15      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN10)
#define GPIO_NPS_CLK      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN3)
#define GPIO_NPS_NOE      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN4)
#define GPIO_NPS_NWE      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN5)
#define GPIO_NPS_NWAIT    (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN6)
#define GPIO_NPS_NE1      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN7)
#define GPIO_NPS_NE2      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN9)
#define GPIO_NPS_NE3      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN10)
#define GPIO_NPS_NE4      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN12)
#define GPIO_NPS_NBL0     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN0)
#define GPIO_NPS_NBL1     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN1)

/* FSMC: NOR/PSRAM Multiplex (NPM) */

#define GPIO_NPM_A16      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN11)
#define GPIO_NPM_A17      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN12)
#define GPIO_NPM_A18      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN13)
#define GPIO_NPM_A19      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN3)
#define GPIO_NPM_A20      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN4)
#define GPIO_NPM_A21      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN5)
#define GPIO_NPM_A22      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN6)
#define GPIO_NPM_A23      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN2)
#define GPIO_NPM_DA0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN14)
#define GPIO_NPM_DA1      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN15)
#define GPIO_NPM_DA2      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN0)
#define GPIO_NPM_DA3      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN1)
#define GPIO_NPM_DA4      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN7)
#define GPIO_NPM_DA5      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN8)
#define GPIO_NPM_DA6      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN9)
#define GPIO_NPM_DA7      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN10)
#define GPIO_NPM_DA8      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN11)
#define GPIO_NPM_DA9      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN12)
#define GPIO_NPM_DA10     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN13)
#define GPIO_NPM_DA11     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN14)
#define GPIO_NPM_DA12     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN15)
#define GPIO_NPM_DA13     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN8)
#define GPIO_NPM_DA14     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN9)
#define GPIO_NPM_DA15     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN10)
#define GPIO_NPM_CLK      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN3)
#define GPIO_NPM_NOE      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN4)
#define GPIO_NPM_NWE      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN5)
#define GPIO_NPM_NWAIT    (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN6)
#define GPIO_NPM_NE1      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN7)
#define GPIO_NPM_NE2      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN9)
#define GPIO_NPM_NE3      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN10)
#define GPIO_NPM_NE4      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN12)
#define GPIO_NPM_A24      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN13)
#define GPIO_NPM_A25      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN14)
#define GPIO_NPM_NBL0     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN0)
#define GPIO_NPM_NBL1     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN1)

/* FSMC: NAND */

#define GPIO_NAND_D4      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN7)
#define GPIO_NAND_D5      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN8)
#define GPIO_NAND_D6      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN9)
#define GPIO_NAND_D7      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN10)
#define GPIO_NAND_D8      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN11)
#define GPIO_NAND_D9      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN12)
#define GPIO_NAND_D10     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN13)
#define GPIO_NAND_D11     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN14)
#define GPIO_NAND_D12     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTE|GPIO_PIN15)
#define GPIO_NAND_D13     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN8)
#define GPIO_NAND_D14     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN9)
#define GPIO_NAND_D15     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN10)
#define GPIO_NAND_CLE     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN11)
#define GPIO_NAND_ALE     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN12)
#define GPIO_NAND_D0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN14)
#define GPIO_NAND_D1      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN15)
#define GPIO_NAND_INT2    (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTG|GPIO_PIN6)
#define GPIO_NAND_INT3    (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTG|GPIO_PIN7)
#define GPIO_NAND_D2      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN0)
#define GPIO_NAND_D3      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN1)
#define GPIO_NAND_NOE     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN4)
#define GPIO_NAND_NWE     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN5)
#define GPIO_NAND_NWAIT   (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN6)
#define GPIO_NAND_NCE2    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTD|GPIO_PIN7)
#define GPIO_NAND_NCE3    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_50MHz|GPIO_PORTG|GPIO_PIN9)

#endif /* __ARCH_ARM_SRC_STM32_CHIP_STM32F103ZE_PINMAP_H */

