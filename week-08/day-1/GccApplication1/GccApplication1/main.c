/*
 * GccApplication1.c
 *
 * Created: 2019. 11. 04. 11:13:33
 * Author : b_kemeny
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>

int main(void)
{
	DDRB = 0b00100000;
	/* Replace with your application code */
    while (1) 
    {
		if (!(PINB & 1 << 7)) {
			PORTB = 1 << 5;
			_delay_ms(125);
			PORTB = 0;
			_delay_ms(125);
		}
    }
}

