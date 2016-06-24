/*
 * delay.c
 *
 *  Created on: 24 de jun. de 2016
 *      Author: LCSR-AF
 */
#include <stdint.h>
#include "delay.h"


void delay(uint16_t delay) {
	uint8_t i;
	while (delay-- > 0) {
		for (i = 100; i > 0; i--)
			asm("nop");
	}
}
