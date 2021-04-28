#include "project_config.h"
#include "user_utils.h"

#include "activity1.h"
#include "activity2.h"
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
 * @brief Decides whether the tempsensor is to be considered
 * 
 */
void tempbuttonSensor()
{
    uint16_t temp;
    if((PIND&(1<<PD0)) && (PIND&(1<<PD1)))/**< if both buttonsensor and tempsensor reads HIGH */
       {
           PORTB|=(1<<PB0);
           temp=Read_ADC(0);/**< Read tempsensor value */
           GeneratePWM(temp);
           delay_ms(200);
       }
       else
       {
           PORTB&=~(1<<PB0);
           delay_ms(200);
       }
}