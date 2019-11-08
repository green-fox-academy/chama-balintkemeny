/*
 * ex01_reac_sp.c
 *
 * Created: 2019. 11. 08. 10:07:32
 * Author : b_kemeny
 */ 

#define F_CPU 16000000
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

uint8_t run_flag = 0;

void init()
{
	DDRD = 0b00000001;
	//TCCR0B = 0b00000101;
	PCICR = 0b00000001;
	PCMSK0 = 0b00000001;
	sei();	
}

ISR(PCINT0_vect){
	if (run_flag) {
		run_flag = 0;
	} else {
		run_flag = 1;
	}
	cli();
	_delay_ms(500);
	sei();
}

void flash_status() {
	if (!run_flag) {
		PORTD = 0b00000001;
		_delay_ms(500);
		PORTD = 0b00000000;
		_delay_ms(500);
	} else {
		PORTD = 0b00000000;
	}
}

int main(void)
{
    init();
	
    while (1)
    {
		flash_status();
	}
}

