#include "TC74_driver.h"
#include "STDIO_lib.h"
#include <avr/io.h>
#include <stdio.h>
#include <avr/interrupt.h>

#define F_CPU 16000000
#include <avr/delay.h>

#define LED_DDR			DDRB
#define LED_DDR_POS		DDRB5
#define LED_PIN			PINB
#define LED_PIN_POS		PINB5
#define LED_PORT		PORTB
#define LED_PORT_POS	PORTB5

void system_init()
{
	//TODO
	// Call the TWI driver init function
	TWI_init();
	// SDIO lib is initialed with 115200 baud rate with 8N1 settings
	STDIO_init();
	// Interrupts must be enabled as STDIO lib uses interrupts for receive
	sei();
	// Set Port B5 as output for LED status indicator
	LED_DDR |= 1 << LED_DDR_POS;
}

int main(void)
{
	// Don't forget to call the init function :)
	system_init();

	printf("System initialized\n");
	
	volatile char temperature = 0;
	// Infinite loop
	while (1) {
		LED_PORT = 0;
		//TODO
		//Write the temperature frequently.
		TWCR = (1 << TWINT) | (1 << TWSTA) | (1 << TWEN);
		while(!(TWCR & 1 << TWINT));
		TWDR = 0b10010000;
		TWCR = (1 << TWINT) | (1 << TWEN);
		while(!(TWCR & 1 << TWINT));
		TWDR = 0;
		TWCR = (1 << TWINT) | (1 << TWEN);
		while(!(TWCR & 1 << TWINT));
		TWCR = (1 << TWINT) | (1 << TWSTA) | (1 << TWEN);
		while(!(TWCR & 1 << TWINT));
		TWDR = 0b10010001;
		TWCR = (1 << TWINT) | (1 << TWEN);
		while(!(TWCR & 1 << TWINT));
		TWCR |= 1 << TWINT;
		_delay_ms(100);
		temperature = TWDR;
		TWCR = (1 << TWINT) | (1 << TWEN) | ( 1 << TWSTO);
		TWCR |= 1 << TWINT;
		printf("%d\n", temperature);
		_delay_ms(1000);
		LED_PORT = 1 << LED_PORT_POS;
		_delay_ms(200);
		//TODO
		//Advanced: Don't use delay, use timer.

		//TODO
		//Blink the led to make sure the code is running
	}
}

