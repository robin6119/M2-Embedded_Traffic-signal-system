#ifndef _USER_UTILS_H_
#define _USER_UTILS_H_
/**
 * @file user_utils.h
 * @author robin6119 ()
 * @brief User defined utilities used across the project
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "traffic-signal-system.h"
#include <util/delay.h>

/**
 * @brief Function to generate delay in micro seconds
 * 
 * @param[in] delay_time Delay in Micro seconds
 * 
 */
void delay_ms(uint32_t delay_time);

#endif /* _USER_UTILS_H_ */
