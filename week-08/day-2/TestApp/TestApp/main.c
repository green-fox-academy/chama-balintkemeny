/*
 * TestApp.c
 *
 * Created: 2019. 11. 05. 12:16:12
 * Author : b_kemeny
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>
#include <avr/interrupt.h>


int main(void)
{
    //TCCR0B = 0b00000101;
	DDRD = 0b00000111;
	//uint8_t pressed_time = 0;
	/* Replace with your application code */
    while (1) 
    {
		//pressed_time = TCNT0;
		PORTD = 0b00000100;
		_delay_ms(250);
		PORTD = 0b00000001;
		_delay_ms(250);
		PORTD = 0b00000010;
		_delay_ms(250);
    }
}

