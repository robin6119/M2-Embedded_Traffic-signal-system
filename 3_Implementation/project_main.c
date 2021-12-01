#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

#define R1 PB0
#define Y1 PB1
#define G1 PB2

#define R2 PB3
#define Y2 PB4
#define G2 PB5

#define R3 PD5
#define Y3 PD4
#define G3 PD3

#define R4 PD2
#define Y4 PD1
#define G4 PD0

int main(void)
{
	DDRB = 0xff;
	DDRD = 0xff;
	DDRC = 0x00;
	
	PORTB = 0x00;
	PORTD = 0x00;
	
    while(1)
    {
		if((PINC&0x01) == 0x01)
		{
		PORTB |= (1<<G1);
		PORTB |= (1<<Y2);
		PORTD |= (1<<R3);
		PORTD |= (1<<R4);
		
		}
		else if((PINC&0x02) == 0x02)
		{
		PORTB |= (1<<R1);
		PORTB |= (1<<G2);
		PORTD |= (1<<Y3);
		PORTD |= (1<<R4);	
		
		}
		
		else if((PINC&0x04) == 0x04)
		{
		PORTB |= (1<<R1);
		PORTB |= (1<<R2);
		PORTD |= (1<<G3);
		PORTD |= (1<<Y4);
		
		}
		
		else if((PINC&0x08) == 0x08)
		{
		PORTB |= (1<<Y1);
		PORTB |= (1<<R2);
		PORTD |= (1<<R3);
		PORTD |= (1<<G4);
		
		}
		
		else
		{
			PORTB = 0x00;
		PORTD = 0x00;
			
		PORTB |= (1<<G1);
		PORTB |= (1<<Y2);
		PORTD |= (1<<R3);
		PORTD |= (1<<R4);
		_delay_ms(7000);
		
		PORTB = 0x00;
		PORTD = 0x00;
		
		PORTB |= (1<<R1);
		PORTB |= (1<<G2);
		PORTD |= (1<<Y3);
		PORTD |= (1<<R4);
		_delay_ms(7000);
		
		PORTB = 0x00;
		PORTD = 0x00;
		
		PORTB |= (1<<R1);
		PORTB |= (1<<R2);
		PORTD |= (1<<G3);
		PORTD |= (1<<Y4);
		_delay_ms(7000);
		
		PORTB = 0x00;
		PORTD = 0x00;
		PORTB |= (1<<Y1);
		PORTB |= (1<<R2);
		PORTD |= (1<<R3);
		PORTD |= (1<<G4);
		_delay_ms(7000);
		PORTB = 0x00;
		PORTD = 0x00;
		}		
    }
}
