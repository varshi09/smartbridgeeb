/*
* even.c
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
PORTC |= (1<<PC0);
_delay_ms(100);
PORTC &= ~(1<<PC0);
//PORTC |= (1<<PC1);
//_delay_ms(100);
//PORTC &= ~(1<<PC1);
PORTC |= (1<<PC2);
_delay_ms(100);
PORTC &= ~(1<<PC2);
//PORTC |= (1<<PC3);
//_delay_ms(100);
//PORTC &= ~(1<<PC3);
PORTC |= (1<<PC4);
_delay_ms(100);
PORTC &= ~(1<<PC4);
//PORTC |= (1<<PC5);
//_delay_ms(100);
//PORTC &= ~(1<<PC5);
PORTC |= (1<<PC6);
_delay_ms(100);
PORTC &= ~(1<<PC6);
//PORTC |= (1<<PC7);
//_delay_ms(100);
//PORTC &= ~(1<<PC7);
}
if((PIND & (1<<PD1)) ==0)
{
PORTC |= (1<<PC7);
_delay_ms(100);
PORTC &= ~(1<<PC7);
//PORTC |= (1<<PC6);
//_delay_ms(100);
//PORTC &= ~(1<<PC6);
PORTC |= (1<<PC5);
_delay_ms(100);
PORTC &= ~(1<<PC5);
//PORTC |= (1<<PC4);
//_delay_ms(100);
//PORTC &= ~(1<<PC4);
PORTC |= (1<<PC3);
_delay_ms(100);
PORTC &= ~(1<<PC3);
//PORTC |= (1<<PC2);
//_delay_ms(100);
//PORTC &= ~(1<<PC2);
PORTC |= (1<<PC1);
_delay_ms(100);
PORTC &= ~(1<<PC1);
//PORTC |= (1<<PC0);
//_delay_ms(100);
//PORTC &= ~(1<<PC0);
}

}
}




