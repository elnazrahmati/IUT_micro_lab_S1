/*
 * 1_2.c
 *
 * Created: 2/19/2020 5:28:54 AM
 * Author: MicroLAB
 */

#include <mega16a.h>

void main(void)
{
    DDRB = 0xFF;
    PORTB = 0x55;
while (1);
}
