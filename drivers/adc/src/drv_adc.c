#include "drv_adc.h"
#include <stdio.h>
#include "status.h"

status_t adc_driver_init()
{
    printf("%s\n", __func__);

    // Enable ADC
    //ADC1->CR |= ADC_CR_EN_Msk;

    return 0;
}

status_t adc_driver_start_conversion(uint8_t channel)
{
    printf("adc_driver_start_conversion\n");

    // Clear previous channel selection
    //ADC1->CR &= ~ADC_CR_CH_Msk;

    // Set new channel
    //ADC1->CR |= ((channel << ADC_CR_CH_Pos) & ADC_CR_CH_Msk);

    // Start conversion
    //ADC1->CR |= ADC_CR_START_Msk;

    return 0;
}

uint32_t adc_driver_read()
{
    printf("adc_driver_read\n");

    // Wait for end of conversion
    //while (!(ADC1->SR & ADC_SR_EOC_Msk))
    //{
    //    // busy wait
    //}

    return ADC1->DR;
}
