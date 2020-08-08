/*
 * 1_7.c
 *
 * Created: 2/19/2020 6:14:10 AM
 * Author: MicroLAB
 */

#include <mega16a.h>

 flash unsigned char digit[] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};
 int number = 0;

void main(void)
{
       DDRD = 0xFF;
        DDRB = 0xFF;    
        PORTB = 0xFF;
        number = 5;
        while(1)       
        {
            PORTD = digit[number];
        }
}
