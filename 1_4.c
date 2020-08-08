/*
 * 1_4.c
 *
 * Created: 2/19/2020 5:41:37 AM
 * Author: MicroLAB
 */

#include <io.h>

void main(void)
{
    char count=0; 
    DDRB.0 = 0;
    DDRD = 0xFF;
    PORTD = 0;
while (1)
    {  
delay_ms(1000);
    if(PINB.0)
    {
    count++;
    PORTD = count;      
    }

    }
}
