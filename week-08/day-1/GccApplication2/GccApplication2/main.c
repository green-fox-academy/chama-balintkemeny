/*
 * GccApplication2.c
 *
 * Created: 2019. 11. 04. 13:02:56
 * Author : b_kemeny
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>

int main(void)
{
	DDRB = 0b00100000;
	uint8_t led_toggle = 0b00000001;
	/* Replace with your application code */
	while (1)
	{
		if (!(PINB & (1 << 7))) {
			_delay_ms(200);
			led_toggle = led_toggle ^ 0b00000001;
		}
		
		if (led_toggle) {
			PORTB = PORTB ^ (1 << 5);
		} else {
			PORTB = 0;
		}
	}
}

