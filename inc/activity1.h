/**
 * @file activity1.h
 * @author your Dhanush U
 * @brief header file for activity1
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY1_H__
#define __ACTIVITY1_H__

#include "project_config.h"
#include "user_utils.h"
#include "activity2.h"

/**
 * @brief sets LED pin to high when both buttonsensor and tempsensor are activated
 * 
 */
void peripheral_init(void);/**< Inotialize MCU */
void tempbuttonSensor();/**< Decides whether the tempsensor is to be considered */


#endif  
