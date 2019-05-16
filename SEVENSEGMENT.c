
#define F_CPU 1000000UL  
#include <avr/io.h>
#include <util/delay.h>
#define PORT_7_SEGMENT PORTB
#define DDR_7_SEGMENT DDRB

void SevenSegment(uint8_t count, uint8_t dec_hex)
{
	
	if(count <dec_hex)
	{
		switch (count)
		{
			case 0:
			PORT_7_SEGMENT=0x77;
			break;

			case 1:
			PORT_7_SEGMENT=0b01000001;
			break;

			case 2:
			PORT_7_SEGMENT=0b11100110;
			break;

			case 3:
			PORT_7_SEGMENT=0b11100011;
			break;

			case 4:
			PORT_7_SEGMENT=0b11010001;
			break;

			case 5:
			PORT_7_SEGMENT=0b10110011;
			break;

			case 6:
			PORT_7_SEGMENT=0b10110111;
			break;

			case 7:
			PORT_7_SEGMENT=0b01000011;
			break;

			case 8:
			PORT_7_SEGMENT=0b11110111;
			break;

			case 9:
			PORT_7_SEGMENT=0b11110011;
			break;
			//hex only
			case 10:
			PORT_7_SEGMENT=0b11010111;  //A
			break;
			case 11:
			PORT_7_SEGMENT=0b10110101;  //b
			break;
			case 12:
			PORT_7_SEGMENT=0b00110110;  //C
			break;
			case 13:
			PORT_7_SEGMENT=0b11100101;  //d
			break;
			case 14:
			PORT_7_SEGMENT=0b10110110;  //E
			break;
			case 15:
			PORT_7_SEGMENT=0b10010110;  //F
			break;
		}
	
}
}


int main()
{
	
	DDR_7_SEGMENT=0xFF;    //All output
	PORT_7_SEGMENT=0xFF;   //All segments off

	uint8_t count=0;
	uint8_t dec_hex=16; //change to 10 for decimal

	while(1)  //loop forever
	{
		SevenSegment(count, dec_hex);

		count++;
		if(count==dec_hex)
		{
			count=0;
		}
		_delay_ms(10000);
	}
}
