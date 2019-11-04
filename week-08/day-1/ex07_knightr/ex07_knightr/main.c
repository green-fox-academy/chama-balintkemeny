/*
 * ex07_knightr.c
 *
 * Created: 2019. 11. 04. 16:44:15
 * Author : b_kemeny
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>


int main(void)
{
	DDRD = 0b00001111;
	uint8_t direction = 0;
	PORTD = 1;
	/* Replace with your application code */
	while (1)
	{
		_delay_ms(100);
		if (!direction) {
			PORTD = PORTD << 1;
		} else {
			PORTD = PORTD >> 1;
		}
		
		if (PORTD == 0b00001000) {
			direction = 1;
		}
		if (PORTD == 0b00000001) {
			direction = 0;
		}
	}
}
