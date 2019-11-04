/*
 * ex06_ledtest.c
 *
 * Created: 2019. 11. 04. 16:19:14
 * Author : b_kemeny
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>


int main(void)
{
    DDRD = 0b00001111;
	/* Replace with your application code */
    while (1) 
    {
		PORTD = 0b00001111;
		_delay_ms(500);
		PORTD = 0;
		_delay_ms(500);
	}
}

