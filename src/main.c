/**
 ******************************************************************************
 * @file    main.c
 * @author  Ac6
 * @version V1.0
 * @date    01-December-2013
 * @brief   Default main function.
 ******************************************************************************
 */
#include "stm32f4xx.h"
#include "stm32f4_discovery.h"

#define BIT26 0x4000000
#define BIT13 0x2000

void delay(uint16_t delay);

void main(void) {

	//CONFIGURACION

	//Habilito el clk del bus GPIOD
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;

	GPIOD->MODER |= BIT26;

	while (1) {
		//APLICACION
		delay (5000);
		GPIOD->ODR ^= BIT13;
	}
}

void delay(uint16_t delay) {
	uint8_t i;
	while (delay-- > 0) {
		for (i = 100; i > 0; i--)
			asm("nop");
	}
}
