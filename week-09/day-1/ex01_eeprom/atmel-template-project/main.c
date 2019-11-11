#define F_CPU 16000000

#include <avr/io.h>
#include <stdio.h>
#include <util/delay.h>
#include "STDIO_lib.h"
#include <avr/interrupt.h>
#include <avr/eeprom.h>

#define READ_FROM_EEPROM
//#define WRITE_DEFAULTS_TO_EEPROM
#define loc_var_8_bit 0x02

uint8_t var_8bit = 8;
uint16_t var_16bit = 16;
uint32_t var_32bit = 32;
float var_float = 3.14;
uint8_t array[] = {1,2,3,4,5,6};
	
void init() {
	// Initialize the UART interface with 115200 baud/sec
	STDIO_init();
	sei();

	#ifdef WRITE_DEFAULTS_TO_EEPROM
	// TODO: write the default values of the variables to the EEPROM
	eeprom_update_byte((uint8_t*)loc_var_8_bit, 8);

	#endif

	#ifdef READ_FROM_EEPROM
	// TODO: read the values from the EEPROM to the variables
	var_8bit = eeprom_read_byte((uint8_t*)loc_var_8_bit);

	#endif
}

int main(void)
{
	init();
	char buffer[32];
	
	printf("System initialized\n");
	printf("var_8bit\t%d\n", var_8bit);
	/*
	printf("var_16bit\t%d\n", var_16bit);
	printf("var_32bit\t%ld\n", var_32bit);
	printf("var_float\t%f\n", var_float);
	printf("array\t");
	for(uint8_t i = 0; i < sizeof(array); i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
	*/
	
	while (1)
	{
		gets(buffer);
		puts(buffer);
	}
}