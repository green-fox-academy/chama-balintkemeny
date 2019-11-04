/*
 * ex05_freqtest.c
 *
 * Created: 2019. 11. 04. 15:53:48
 * Author : b_kemeny
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>


int main(void)
{
    DDRB = 0b00100000;
	uint8_t cnt = 0;
	/* Replace with your application code */
	
	while (1) 
    {
		++cnt;
		if ((cnt / 3) % 6 == 0) {
			PORTB = 1 << 5;
			_delay_ms(1000);
			PORTB = 0;
			_delay_ms(1000);
		} else if ((cnt / 3) % 6 == 1 || (cnt / 3) % 6 == 5) {
			PORTB = 1 << 5;
			_delay_ms(500);
			PORTB = 0;
			_delay_ms(500);
		} else if ((cnt / 3) % 6 == 2 || (cnt / 3) % 6 == 4) {
			PORTB = 1 << 5;
			_delay_ms(250);
			PORTB = 0;
			_delay_ms(250);
		} else {
			PORTB = 1 << 5;
			_delay_ms(125);
			PORTB = 0;
			_delay_ms(125);
		}
    }
}

