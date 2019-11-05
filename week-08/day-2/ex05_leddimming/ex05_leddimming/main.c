/*
 * ex05_leddimming.c
 *
 * Created: 2019. 11. 05. 16:18:34
 * Author : b_kemeny
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

// Create an application which changes the LED brightness by switching it on/off
// regularly for different length of time.
// How does it work? Let's say that you turn on the LED for 100us and off for
// 900us and you repeat this pattern. Your eyes are not so fast, so it will
// perceive that on average the LED is turned on for 10% of the time, so it is
// 10% bright.

// To achieve this behavior you should configure the timer to overflow with
// about 240Hz frequency. You should use the Output Compare A Match Interrupt
// and the Overflow Interrupt to implement the behavior!

void init()
{
	//Set prescaler to 256x
	TCCR0B = 0b00000100;
	TIMSK0 = 0b00000011;
	OCR0A = 200;
	DDRD = 0b00000111;
	sei();
}

ISR(TIMER0_OVF_vect)
{
	//Common anode RGB led, off at 0b00000111
	PORTD = 0b00000111;
	TIFR0 = 0b00000001;
}

ISR(TIMER0_COMPA_vect)
{
	//Common anode RGB led, off at 0b00000111
	PORTD = 0b00000010;
}

int main(void)
{
	init();
	while (1)
	{
		if ((TIFR0 & 0b00000001) == 0b00000001) {
			PORTB = 0b00100000;
			TIFR0 = 0b00000001;
		} else {
			PORTB = 0;
		}
	}
}