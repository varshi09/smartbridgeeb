/*
 * CODE_FOR_DELAY_FOR_PWM.c
 *-1
 * Created: 15-05-2019 11:40:17
 * Author : anand_000
 */ 
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

void PWM_init()
{
/*set fast PWM mode with non inveRted o/p	*/
TCCR0 = (1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
DDRB|= (1<<PB3);
//Set OC0 as o/p pin

}


int main(void)
{
unsigned char duty;
PWM_init();

    while (1) 
    {
        for(duty=0;duty<255;duty++)
		{
			OCR0 = duty; //Increase LED light intensity
			_delay_ms(20) ;
		}
		for(duty = 255;duty>1;duty--)
{
	OCR0 = duty;//decrease LED light intensity
	_delay_ms(20);
}

    }
}

