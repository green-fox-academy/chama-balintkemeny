/*
 * ex02_timer1.c
 *
 * Created: 2019. 11. 05. 15:02:17
 * Author : b_kemeny
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>

void init()
{
	// Set the pre-scaler to 1024 division. See at the TC0 control register in the data sheet!
	// With this you also set the clock source to CLK_io and you will also turn on the timer!
	TCCR0B = 0b00000101;
	// Set the PB5 LED pin to output
	DDRB = 1 << 5;
}

int main(void)
{
	// Don't forget to call the init function!
	init();

	while (1)
	{
		// If TC0 counter overflow occurred (TOV0 flag is set) toggle the LED and write "1" to that flag
		PINB = 0b00100000;
		TIFR0 = 0b00000001;
		//_delay_ms(200);
		// (this will clear it, it's confusing, but this is how it works)
	}
}

