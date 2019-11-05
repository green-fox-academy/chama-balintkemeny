/*
 * ex01_btn_interrupt.c
 *
 * Created: 2019. 11. 05. 14:34:48
 * Author : b_kemeny
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>
#include <avr/interrupt.h>

ISR(PCINT0_vect){
	// Toggle the LED
	PIND = 0b00000010;
}

// This is an init function, which initializes the MCU for the rest of the program.
// It is common in embedded C programs to set port direction (input/output), pull-ups and pull-downs,
// and everything that is needed at the start of your program.

void init(){
	// The button is connected to PB7 pin, which is the PCINT7 pin (PinChangeINTerrupt7 pin)
	// If we enable this interrupt on every pin state changes the interrupt handler will be fired.
	// So when the button is pressed OR released the interrupt handler will run.
	PCICR = 0b00000001;
	PCMSK0 = 0b10000000;
	// Set the PCINT7 bit of PCMSK0 register. This will enable the interrupts from the button (PB7=PCINT7)

	// Enable pin interrupt on change 0 interrupts. This will enable PCINT0, PCINT1, PCINT2 ... PCINT7 interrupts.


	// Finally, enable the interrupts globally
	sei();
	// Set PB5 as output, this is the LED pin
	DDRD = 0b00000111;
	PORTD = 0b00000000;
}

int main(void)
{
	// Never forget to call the init function if you have it :)
	init();
	while (1) {

	}
}