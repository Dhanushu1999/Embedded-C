/**
 * @file project_main.c
 * @author Dhanush U (Dhanushu1999@gmail.com)
 * @brief Project to Blink an LED at 1000ms ON and 500 ms OFF Interval
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "project_config.h"

#include "user_utils.h"

/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void peripheral_init(void)
{
	/* Configure LED Pin */
	DDRB |=(1<<LED_PIN);
    DDRD &=~(1<<BUTTONSENSOR);
    DDRD &=~(1<<TEMPSENSOR);
    SENSOR|=(1<<BUTTONSENSOR);
    SENSOR|=(1<<TEMPSENSOR);
}


/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note PORTB0 is in sink config. i.e when pin is Low, the LED will turn OFF
 * @note PORTB0 is in sink config. i.e when pin is High, the LED will turn ON
 */
int main(void)
{
	/* Initialize Peripherals */
	peripheral_init();

	for(;;)
	{
        if((PIND&(1<<BUTTONSENSOR)) && (PIND&(1<<TEMPSENSOR)))
       {
           LED_PORT|=(1<< LED_PIN);
           delay_ms(200);
       }
       else
       {
           LED_PORT&=~(1<<LED_PIN);
           delay_ms(200);
       }	
	}
	return 0;
}
