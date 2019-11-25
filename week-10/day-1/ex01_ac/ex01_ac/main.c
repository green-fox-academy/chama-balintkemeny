/*
 * ex01_ac.c
 *
 * Created: 2019. 11. 25. 12:02:25
 * Author : b_kemeny
 */ 

#include <avr/io.h>

void init()
{
	DDRB = 1 << 5;
	PORTB = 0 << 5;
}

int main(void)
{
    init();
    while (1) 
    {
		
	}
}

