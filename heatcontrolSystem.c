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

#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"


/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note PORTB0 is in sink config. i.e when pin is Low, the LED will turn OFF
 */
int main(void)
{
	/* Initialize Peripherals */
	peripheral_init();
    Init_ADC();
	Init_PWM();
	Init_USART();

	for(;;)
	{
       tempbuttonSensor();
	}
	return 0;
}
