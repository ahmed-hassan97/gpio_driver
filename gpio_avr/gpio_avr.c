/*
 * gpio_avr.c
 *
 * Created: 11/13/2019 8:46:02 AM
 *  Author: Ahmed hassan
 */ 

/*
 * gpio_avr.c
 *
 * avr output 1
 * avr input 0
 *  Author: Ahmed hassan
 */ 
#include "macro.h"


int main(void)

{
	
	/*
    * o make pin input 
	* 1 make pin output
	
*/
	
	// this make bit output
	SET_BIT(DDRB,0);
	SET_BIT(DDRB,7);
	
	
	//this make porta pin4  0v
	CLEAR_BIT(PORTA,4);
	
    while(1)
    {
	   
        SET_BIT(PORTA,4);
    }
}
