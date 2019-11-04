/*
 * ex08_knightr2.c
 *
 * Created: 2019. 11. 04. 17:22:05
 * Author : b_kemeny
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>


int main(void)
{
	DDRD = 0b00001111;
	PORTD = 1;
	/* Replace with your application code */
	while (1)
	{
		_delay_ms(100);
		PORTD = PORTD << 1;
		if (PORTD == 0b00010000) {
			PORTD = 0b00000001;
		}
	}
}