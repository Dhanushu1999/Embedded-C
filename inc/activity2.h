/**
 * @file activity2.h
 * @author Dhanush U
 * @brief header file for activity2
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY2_H__
#define __ACTIVITY2_H__

/**
 * @brief potentiometer is used to indicate readings of temperature sensor and ADC value is stored in RAM Table
 * 
 */

void Init_ADC();
uint16_t Read_ADC(uint8_t ch);


#endif  
