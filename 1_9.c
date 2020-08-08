/*
 * 1_8.c
 *
 * Created: 2/19/2020 6:14:10 AM
 * Author: MicroLAB
 */

#include <mega16a.h>
#include <delay.h>

 flash unsigned char digit[] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};

void main(void)
{                char count = 15;
        char red = 1, stop = 0;
       DDRD = 0xFF;
       DDRC = 0xFF;
        DDRB = 0xFF; 
        DDRA=0;   
        PORTB = 0;
       
        while(1)       
        {   
           //delay_ms(1000);
          int num = 100000000;
            while(num)
          {  PORTD = digit[count%10];
           PORTC.0=1;
           PORTC.0=0;
           PORTD = digit[count/10]; 
           PORTC.1=1;
           PORTC.1=0; 
           num--;     }
           
           
           
           if(PINA.1)
            stop = 1;
           else
            stop = 0; 
           if(!stop)
            count--;      
           if(PINA.0)
            count = 0; 
            
           
           
           if(count == 0)
           {
                count = 15;  
                red = !red;
                if(red)
                {
               PORTB=0xFF;  
                }    
                else
                {
                PORTB=0x0;
                }
                
           }
        }
}
