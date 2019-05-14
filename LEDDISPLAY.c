/*
 * GccApplication1.c
 *
 * Created: 09-05-2019 14:16:15
 * Author : Windows
 */ 


#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    /* Replace with your application code */
	DDRB= 0x80;
	DDRA=0x80;
	DDRC=0x80;
	DDRD=0x80;

    while (1) 
    {
		PORTB= 0x80;
		PORTA=0x80;
		PORTC=0x80;
		PORTD=0x80;
		_delay_ms(100);
		PORTB= 0x00;
		PORTA=0x00;
		PORTC=0x00;
		PORTD=0x00;;
		_delay_ms(100);
		
    }
}

