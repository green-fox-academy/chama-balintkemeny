#include <avr/io.h>
#include <string.h>
#include <stdint.h>
#include "TC74_driver.h"

void TWI_init(void)
{
	// TODO:
	// Set Prescaler to 4
	TWSR |= 0b00000011;

	// TODO:
	// Set SCL frequency = 16000000 / (16 + 2 * 48 * 4) = 40Khz
	//So set the correct register to 0x30
	TWBR = 0x30;

	// TODO
	//Enable TWI
	TWCR |= 1 << TWEN;
}

void TWI_start(void)
{
	//TODO
	//Send start signal
	TWCR |= 1 << TWSTA;
	TWCR |= 1 << TWINT;

	// TODO:
	// Wait for TWINT Flag set. This indicates that
	//the START condition has been transmitted.
	while (!(TWCR & (1 << TWINT))) {
		;
	}
	TWCR |= 1 << TWINT;
}

void TWI_stop(void)
{
	//TODO
	//Send stop signal
	TWCR = (1 << TWSTO | 1 << TWINT | 1 << TWEN);
}

uint8_t TWI_read_ack(void)
{
	//TODO
	//Read byte with ACK
	//Wait for TWINT Flag set. This indicates that
	//the DATA has been transmitted, and ACK/
	//NACK has been received.
	while (!(TWCR & (1 << TWINT))) {
		;
	}
	
	uint8_t status_id = TWSR & 0b11111000;
	uint8_t ack_flag = 0;
	if (status_id == 0x18 || status_id == 0x28) {
		ack_flag = 1;
	}
	TWCR |= 1 << TWINT;
	return ack_flag;
}


uint8_t TWI_read_nack(void)
{
	//TODO
	//Read byte with NACK
	//Wait for TWINT Flag set. This indicates that
	//the DATA has been transmitted, and ACK/
	//NACK has been received.
	while (!(TWCR & (1 << TWINT))) {
		;
	}
	TWCR |= 1 << TWINT;
	return 0;
}

void TWI_write(uint8_t u8data)
{
	//TODO
	//Load DATA into TWDR Register. Clear TWINT
	//bit in TWCR to start transmission of data.
	//Wait for TWINT Flag set. This indicates that
	//the DATA has been transmitted, and ACK/
	//NACK has been received.
	TWDR = u8data;
	TWCR |= 1 << TWINT;
	while (!(TWCR & (1 << TWINT))) {
		;
	}
}

//TODO
//Write a function that communicates with the TC74A0.
//The function need to be take the address of the ic as a parameter.
//datasheet: http://ww1.microchip.com/downloads/en/DeviceDoc/21462D.pdf
//And returns with the temperature.

uint8_t read_temp (uint8_t slv_address) {
	TWI_start();
	TWI_write(0b10011010);
	TWI_stop();
	return 0;
}

//TODO Advanced:
//Calculate the average of the last 16 data, and returns with that.
//TODO Advanced+:
//Select the outstanding (false data) before average it.
//These data don't needed, mess up your datas, get rid of it.
