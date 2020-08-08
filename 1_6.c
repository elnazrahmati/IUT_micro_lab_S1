/*
 * 1_6.c
 *
 * Created: 2/19/2020 6:06:31 AM
 * Author: MicroLAB
 */

#include <io.h>
#include <delay.h>

void main(void)
{
char num = 1;
DDRD = 0xFF;
while (1)
    {    
        delay_ms(500);
        PORTD = num;
        num*=2;  
        if(num == 0)
        num = 1;
    }
}
