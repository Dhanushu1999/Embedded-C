#define F_CPU 16000000UL /**< Clock Frequency of MCU is 16 MHz */
#define USART_BAUDRATE 9600 /**< Baud rate for serial communication  */
#define UBRR_VALUE (((F_CPU / (USART_BAUDRATE * 16UL))) - 1) /**< Formula to calculate UBRR value */
#include "activity3.h"
#include "activity4.h"


void Init_USART()
{
    UBRR0H = (uint8_t)(UBRR_VALUE>>8);
    UBRR0L = (uint8_t)UBRR_VALUE;
    UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);
    UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}

int USARTRead()
{
    while(!(UCSR0A &(1<<RXC0)))
    {
        //Do nothing
    }
    return UDR0;
}
void UARTWrite(char data){
    while(!( UCSR0A & (1<<UDRE0))){

    }
    UDR0 = data;

}