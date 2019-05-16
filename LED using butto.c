/*
 * initial.c
 *
 * Created: 10-05-2019 11:22:13
 * Author : AMRUTHA
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	 DDRC |= 0XFF;
	 
	 DDRD &= ~0XFF;
	 
    /* Replace with your application code */
    while (1) 
    {
		if((PIND & (1<<PD0)) ==0)
        {
			PORTC |= 0XFF;
			_delay_ms(3000);
			PORTC &= ~0XFF;
		}
    }
}

