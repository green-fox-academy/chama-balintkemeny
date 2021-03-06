/*
 * TestApp.c
 *
 * Created: 2019. 11. 11. 10:22:10
 * Author : b_kemeny
 */ 

#define F_CPU 16000000
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

typedef enum
{
	IDLE,
	POS,
	NEG	
} state_t;

volatile state_t main_state = NEG;
volatile uint8_t ir_flag = 0;
volatile uint8_t duty = 100;

void init()
{
	//Set OC0A as output
	DDRD = 0b01000000;
	DDRB = 0b00100000;
	//Set Timer0 control register A
	TCCR0A = 0b10000011;
	//Set Timer0 prescaler
	TCCR0B = 0b00000010;
	//Enable PC interrupts 0-7
	PCICR = 0b00000001;
	//Mask interrupt to PB7 only
	PCMSK0 = 0b10000000;
	//Enable interrupts globally
	sei();
}

void set_duty(uint8_t duty)
{
	OCR0A = (duty * 255) / 100;
}

ISR(PCINT0_vect)
{
	ir_flag = 1;
}

int main(void)
{
	init();
	
    while (1)
    {
		if (ir_flag) {
			if (main_state == IDLE) {
				duty = 100;
				main_state = NEG;
				PORTB = 0;
				} else {
				duty = 0;
				main_state = IDLE;
				PORTB = 0b00100000;
			}
			_delay_ms(500);
			ir_flag = 0;
		}
		
		set_duty(duty);
		_delay_ms(1000);
		
		if (duty >= 100 && main_state != IDLE) {
			main_state = NEG;
		}
		
		if (duty <= 40 && main_state != IDLE) {
			main_state = POS;
		}
		
		switch (main_state)
		{
		case IDLE:
			break;
		case POS:
			duty += 5;
			break;
		case NEG:
			duty -= 5;
			break;
		}
	}
}

