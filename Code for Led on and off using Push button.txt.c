void setup() 
{
  DDRB |= (1 << DDB5);
  DDRD &= ~(1 << DDD2); 
  PORTD |= (1 << PORTD2);
}

void loop() 
{
  if (!(PIND & (1 << PIND2))) 
{
    delay(50);
    if (!(PIND & (1 << PIND2))) 
{
      PORTB |= (1 << PORTB5);  
      delay(300); 
      PORTB &= ~(1 << PORTB5); 
      while (!(PIND & (1 << PIND2))) 
{
        delay(50);
      }
    }
  }
}
