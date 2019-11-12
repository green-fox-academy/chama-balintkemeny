#define F_CPU 16000000
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/eeprom.h>
#include <util/delay.h>
#include <stdio.h>
#include <string.h>
#include "STDIO_lib.h"

// TODO:
/* Create an enum type which represents the following program states:
	- LED blinker mode
	- LED-Pushbutton mode
	- LED on mode
	- LED off mode
*/

typedef enum {
	BLINKER,
	PUSH_BTN,
	ON,
	OFF
} led_mode_t;

volatile uint8_t btn_flag = 0;
volatile uint8_t cmd_flag = 0;

void init() {
    // Initialize the UART interface with 115200 baud/sec
    STDIO_init();

    // Initialize the LED pin
    DDRB |= 1 << DDRB5;

    // Enable interrupts globally
    PCICR = 0b00000001;
	PCMSK0 = 0b10000000;
	sei();
}

ISR(PCINT0_vect)
{
	btn_flag = 1;
}

int main(void) {
    // Don't forget to call the Init() function :)
    init();

    // TODO:
    // Create a variable with your custom program state type enum
	led_mode_t led_mode = BLINKER;
	char buffer[8];
    // TODO:
    // Initialize the state to LED blinker mode

    // Infinite loop
    while (1) {
        // TODO:
        // Check the UART input buffer. If it's not empty process the string in it,
        // maybe it is a command!

        // TODO:
        // Do the tasks based on the state, hint: use switch-case
		if (!cmd_flag) {
			
		}
		
		switch (led_mode) {
		case OFF:
			PORTB &= 0b11011111;
			break;
		case ON:
			PORTB |= 0b00100000;
			break;
		case BLINKER:
			PORTB &= 0b11011111;
			_delay_ms(250);
			PORTB |= 0b00100000;
			_delay_ms(250);
			break;
		case PUSH_BTN:
			if (btn_flag) {
				PINB = 0b00100000; 
				_delay_ms(500);
				btn_flag = 0;
			}
			break;
		}
    }
}