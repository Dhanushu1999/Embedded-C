#include "project_config.h"
#include "user_utils.h"

#include "activity1.h"
#include "activity3.h"
/**
 * @brief Initialize all the Peripherals and pin configurations for PWM
 * 
 */
void Init_PWM(void){
    TCCR1A=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B=(1<<CS11)|(1<<WGM12)|(1<<CS10);
    DDRB|=(1<<PB1);
}

/**
 * @brief perform PWM operations on ADC value
 * 
 * @param Temperature 
 */
void GeneratePWM(uint16_t Temperature){
    if(Temperature>=0 && Temperature<=200){
        OCR1A = 205;
        delay_ms(200);
    }
    else if(Temperature>=201 && Temperature<=500){
        OCR1A = 410;
        delay_ms(200);
    }
    else if(Temperature>=501 && Temperature<=700){
        OCR1A = 717;
        delay_ms(200);
    }
    else if(Temperature>=701 && Temperature<=1024){
        OCR1A = 973;
        delay_ms(200);
    }
    else{
        OCR1A = 0;
        delay_ms(200);
    }
}