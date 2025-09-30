/*
 * main.c
 *
 * Created: 9/21/2025 11:00:34 PM
 *  Author: ASUS
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
	DDRB=0b00100000;
    while(1)
    {
        PORTB=0b00100000;
		_delay_ms(1000);
		PORTB=0b00000000;
		_delay_ms(1000);
    }
}