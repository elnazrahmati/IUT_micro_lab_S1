/*
 * 1_5.c
 *
 * Created: 2/19/2020 5:41:37 AM
 * Author: MicroLAB
 */

#include <io.h>

#include <delay.h>
void main(void)
{
    char count=0; 
    DDRB.0 = 0;
    DDRD = 0xFF;
    PORTD = 0;
while (1)
    {  
     delay_ms(500);
    if(PINB.0)
    {
    count++;
    PORTD = count;  
    }               
    else
    { 
             count--;
    PORTD = count; 
    }

    }
}
