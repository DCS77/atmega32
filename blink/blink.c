#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    DDRC |= (1 << PC0); // Set PC0 as output
    while (1) {
        PORTC ^= (1 << PC0); // Toggle PC0
        _delay_ms(500);
    }
}