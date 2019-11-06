/*
 * ex06_buttontriggeredtimer.c
 *
 * Created: 2019. 11. 05. 17:28:50
 * Author : b_kemeny
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

// Create an application which flashes the LED in every second.
// The LED flashing should be enabled/disabled with the pushbutton.
// Interrupts must be used for button release event detection and for
// LED blinking as well. The main function should be untouched.

void init()
{
	TCCR0B = 0b00000101;
	TIMSK0 = 0b00000011;
	sei();
}

int main(void)
{
	init();
	while (1)
	{
		
	}
}