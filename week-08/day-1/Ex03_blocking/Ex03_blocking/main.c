/*
 * Ex03_blocking.c
 *
 * Created: 2019. 11. 04. 14:35:41
 * Author : b_kemeny
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>


int main(void)
{
    DDRB = 0b00100000;
	uint8_t start_flag = 0;
	/* Replace with your application code */
    while (1) 
    {
		if (!(PINB & 0b10000000)) {
			start_flag = 1;
		}
		
		if (start_flag) {
			PORTB = 1 << 5;
			_delay_ms(250);
			PORTB = 0;
			_delay_ms(250);
		}
    }
}

