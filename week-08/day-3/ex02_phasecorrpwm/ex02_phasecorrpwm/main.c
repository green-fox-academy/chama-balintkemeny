/*
 * ex02_phasecorrpwm.c
 *
 * Created: 2019. 11. 06. 15:26:39
 * Author : b_kemeny
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>

void init()
{
	//Set OC0A (Timer0 compare) as output
	DDRD = 0b01000000;
	//Set Timer0 control register A - phase correct pwm
	TCCR0A = 0b10000001;
	//Set Timer0 pre-scaler
	TCCR0B = 0b00000010;
}

void set_duty(uint8_t duty)
{
	OCR0A = (duty * 255) / 100;
}

int main(void)
{
	/* Replace with your application code */
	init();
	uint8_t duty = 0;
	
	while (1)
	{
		set_duty(duty);
		_delay_ms(100);
		duty += 5;
		if (duty > 100) {
			duty = 0;
		}
	}
}
