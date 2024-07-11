#define LED_PIN PB5

int main(void) 
{
    DDRB |= (1 << LED_PIN);

    while (1) 
{
        PORTB |= (1 << LED_PIN);
        _delay_ms(400);
        PORTB &= ~(1 << LED_PIN);
        _delay_ms(400);
    }

    return 0;
}
