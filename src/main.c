#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>

int main( void ) {
	DDRB |= (1 << DDB6);
	while(1) {
		PORTB |= (1 << PB6);
		_delay_ms(1000);
		PORTB &= ~(1 << PB6);
		_delay_ms(1000);
	}
    
    return 0;
}
