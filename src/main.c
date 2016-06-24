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
#include "delay.h"
#include "bits.h"




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
