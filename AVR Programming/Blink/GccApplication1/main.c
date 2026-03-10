/*
 * GccApplication1.c
 *
 * Created: 3/9/2026 7:14:13 PM
 * Author : ASUS
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>


int main(void)
{
	DDRB=0b00100000; // register B
	
	
	while (1)
	{
		PORTB=0b00101010;
		_delay_ms(1000);
		PORTB=0b0000000;
		_delay_ms(1000);

	}
}

