/*
 * LED_03.cpp
 *
 * Created: 2018-05-02 오후 3:37:39
 * Author : stc_160
 */ 
#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>


int main(void)
{
    DDRD=0xff;
	PORTD=0xff;
    while (1) 
    {
		for(int i=0;i<7;i++)
		{
			PORTD=~(1<<i);
			_delay_ms(100);
		}
		for(int i=0;i<7;i++)
		{
			PORTD=~(0b10000000>>i);
			_delay_ms(100);
		}
    }
}

