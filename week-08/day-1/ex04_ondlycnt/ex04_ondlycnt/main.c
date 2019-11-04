/*
 * ex04_ondlycnt.c
 *
 * Created: 2019. 11. 04. 14:44:43
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
		if (!(PINB & 0b10000000) && start_cnt < 5) {
			_delay_ms(250);
			start_cnt++;
		}
		if (start_cnt > 4) {
			PORTB = 1 << 5;
		}
    }
}

