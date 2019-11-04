/*
 * ex05_freqplay.c
 *
 * Created: 2019. 11. 04. 14:57:36
 * Author : b_kemeny
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>

int main(void)
{
	DDRB = 0b00100000;
	uint8_t start_cnt = 0;
	/* Replace with your application code */
	while (1)
	{
		if (!(PINB & 0b10000000)) {
			_delay_ms(250);
			start_cnt++;
		}
		if ((start_cnt / 3) % 6 == 0) {
			PORTB = 1 << 5;
			_delay_ms(1000);
			PORTB = 0;
			_delay_ms(1000);
		} else if ((start_cnt / 3) % 6 == 1) {
			PORTB = 1 << 5;
			_delay_ms(500);
			PORTB = 0;
			_delay_ms(500);
		} else if ((start_cnt / 3) % 6 == 2) {
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