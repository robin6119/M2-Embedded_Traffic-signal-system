#ifndef ADC_H_
#define ADC_H_

#include "traffic-signal-system.h"

/**
 * @brief Function to initialise the analog to digital converter (ADC)
 * 
 */
void adc_init();

/**
 * @brief Funciton to read analog pin and output it to a register ADC which has two 8 bit registers ADCL and ADCH.
 * 
 * @param channel ADC channel on which conversion must be done and value must be read
 * @return uint16_t ADC value
 */
uint16_t adc_read(uint8_t channel);

#endif
