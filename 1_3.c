/*
 * 1_3.c
 *
 * Created: 2/19/2020 5:41:37 AM
 * Author: MicroLAB
 */

#include <io.h>

void main(void)
{
    char number; 
    DDRB = 0;
    DDRD = 0xFF;
while (1)
    {
    number = PINB;
    PORTD = number;

    }
}
