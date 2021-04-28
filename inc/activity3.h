/**
 * @file activity3.h
 * @author Dhanush U
 * @brief header file for activity2
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY3_H__
#define __ACTIVITY3_H__
#include "activity1.h"
/**
 * @brief Generate PWM values for given digital Input
 * 
 */

void Init_PWM(void);
void GeneratePWM(uint16_t temp);


#endif  
