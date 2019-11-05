/*
 * ex03_timer2.c
 *
 * Created: 2019. 11. 05. 15:32:11
 * Author : b_kemeny
 */ 

#include <avr/io.h>
#include <stdint.h>

void init()
{
	// Set the prescaler to 1024 division. See at the TC0 control register in the datasheet!
	// With this you also set the clock source to CLK_io and you will also turn on the timer!
	TCCR0B = 0b00000101;
	// Set the PB5 LED pin to output
	DDRB = 0b00100000;
}

int main(void)
{
	// Create a variable which will be a counter variable, initialize it with 0.
	volatile uint8_t cntr_current = 0;
	// This will be the maximal value of our counter
	const uint8_t cntr_max = 30;

	// Don't forget to call the init function!
	init();
	// Your task is to create about 1Hz flashing LED with the TC0 timer.
	// Use the counter variable, cntr_max and the overflow flag as a hint.
	
	while (1)
	{
		if ((TIFR0 & 0b00000001) == 0b00000001) {
			cntr_current++;
			TIFR0 = 0b00000001;
		}
		if (cntr_current == cntr_max) {
			PINB = 0b00100000;
			cntr_current = 0;
		}
	}
}
