#include <avr/io.h>
#include <stdint.h>
#include <avr/interrupt.h>
#include "freq_meas.h"

uint16_t g_ovf_cnt = 0;
uint16_t timer_cnt_start = 0;
uint16_t timer_cnt_end = 0;
int64_t g_timer_diff = 0;

typedef enum {
	START,
	END
} cnt_state_t;
uint8_t g_timer_state = START;

// TODO:
// Write the interrupt handlers

ISR(TIMER1_OVF_vect)
{
	g_ovf_cnt++;
}

ISR(TIMER1_CAPT_vect)
{
	if (g_timer_state == START) {
		timer_cnt_start = ICR1;
		g_timer_state = END;
		} else {
		timer_cnt_end = ICR1;
		g_timer_diff = g_ovf_cnt * 65535 + timer_cnt_start - timer_cnt_end;
		g_timer_state = START;
	}
	g_ovf_cnt = 0;
}

void freq_meas_init()
{
	/**************
	 * TC1 CONFIG *
	 **************/
	// TODO:
	// Configure the TC1 timer properly :)
	TCCR1B |= 1 << ICNC1;
	TCCR1B |= 1 << ICES1;
	TCCR1B |= 0b00000101;
	TIMSK1 |= 1 << ICIE1;
	TIMSK1 |= 1 << TOIE1;
}

// TODO:
// Write this function. It returns the measured frequency in Hz
float get_freq()
{
	double period = 0.000064 * g_timer_diff;
	float freq = 1 / period;
	return freq;
}
