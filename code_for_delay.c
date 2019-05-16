/*
 * code_for_delay.c
 *
 * Created: 15-05-2019 10:44:43
 * Author : anand_000
 */ 

#include <avr/io.h>
#define LED PB0
int main()
{
	
	uint8_t timeroverflowcount=0;
	DDRB=0XFF; //configure PORTD as output
	TCNT0=0X00;
	TCCR0=(1<<CS00)|(1<<CS02);
	while(1)
	{
		while((TIFR&0X01)==0);
		TCNT0 = 0X00;
		TIFR = 0X01;//CLEAR TIMER1 OVERFLOW FLAG
		
		timeroverflowcount++;
		
		if(timeroverflowcount>=5)
		{
			PORTB^= (0X01<<LED);
			timeroverflowcount = 0;
		}
	}
}
		
		
	

