#include <avr/io.h>
#include <util/delay.h>



void light(short one);
void my_delay_ms(unsigned int t);
short button(int a);

int main(void) 
{
   
     // Corrected to configure DDD5 for output
    
    DDRD |= _BV(DDD5);

    
/**This while loop is where the program is checking whether the sensor
 * is being touched or not by another function
 * */
    while(1) 
    {
        
        if (button(PD7))
        {
            light(1);
        } else {
            light(0);
        }
    }
}

// This is where the code for checking whether a button is pressed is at


short button(int a)
{
    short b = 0; // Ensure b is initialized to 0

    if ((PIND & (1 << a)) != 0)
    {
        if ((PIND & (1 << a)) != 0)
        {
            b = 1;
        }
    }

    return b;
}

// This is where the code turns the Light on or off
void light(short one)
{
    if (one)
        PORTD |= _BV(PORTD5);
    else
        PORTD &= ~_BV(PORTD5);
}

