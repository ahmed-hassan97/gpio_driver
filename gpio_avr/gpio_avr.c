/*
 * gpio_avr.c
 *
 * Created: 11/13/2019 8:46:02 AM
 *  Author: A
 */ 


#include "macro.h"

int main(void)
{
	SET_BIT(DDRA,2);
	
    while(1)
    {
        SET_BIT(PORTA,2);
    }
}