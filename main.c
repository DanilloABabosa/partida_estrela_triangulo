#define F_CPU 16000000L
#include <avr/io.h>
#include <util/delay.h>
int main(void) 
{   
    DDRB = 0b00110000;
    PORTB = 0;
    while (1)
    {
       
        {
            PORTB |= (1<<PORTB4);
            PORTB &= ~(1<<PORTB5);
            _delay_ms(500);
            PORTB ^= (1<<PORTB4 | 1<<PORTB5);
            _delay_ms(500);
        }
       
    }
}