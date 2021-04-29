#include "project_config.h"
#include "user_utils.h"

#include "activity1.h"
#include "activity3.h"
#include "activity4.h"
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
        unsigned char data1[]="Temperature: 20 C\n";
        int i=0;
        while(data1[i]!='\0'){
            UARTWrite(data1[i]);
            i++;
        }
        delay_ms(200);
    }
    else if(Temperature>=201 && Temperature<=500){
        OCR1A = 410;
        unsigned char data1[]="Temperature: 25 degree C\n";
        int i=0;
        while(data1[i]!='\0'){
            UARTWrite(data1[i]);
            i++;
        }
        delay_ms(200);
    }
    else if(Temperature>=501 && Temperature<=700){
        OCR1A = 717;
        unsigned char data1[]="Temperature: 29 degree C\n";
        int i=0;
        while(data1[i]!='\0'){
            UARTWrite(data1[i]);
            i++;
        }
        delay_ms(200);
    }
    else if(Temperature>=701 && Temperature<=1024){
        OCR1A = 973;
        unsigned char data1[]="Temperature: 33 degree C\n";
        int i=0;
        while(data1[i]!='\0'){
            UARTWrite(data1[i]);
            i++;
        }
        delay_ms(200);
    }
    else{
        OCR1A = 0;
        unsigned char data1[]="Temperature: 0 degree C\n";
        int i=0;
        while(data1[i]!='\0'){
            UARTWrite(data1[i]);
            i++;
        }
        delay_ms(200);
    }
}