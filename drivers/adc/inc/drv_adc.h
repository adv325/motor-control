#ifndef DRV_ADC_H
#define DRV_ADC_H

#include <stdint.h>
#include "status.h"

// ========================================
// Base Address
// ========================================

#define ADC1_BASE_ADDR (0x40000000U)
#define ADC2_BASE_ADDR (0x40008000U)

// ========================================
// Register Layout
// ========================================

typedef struct
{
    volatile uint32_t CR;     // Control Register
    volatile uint32_t SR;     // Status Register
    volatile uint32_t DR;     // Data Register
}ADC_TypeDef;

// ========================================
// Peripheral Instance Definition
// ========================================

#define ADC1      ((ADC_TypeDef*) ADC1_BASE_ADDR)

// ========================================
// Bit Definitions
// ========================================

// CR Resigter

#define ADC_CR_EN_Pos        (0U)
#define ADC_CR_EN_Msk        (1U << ADC_CR_EN_Pos)

#define ADC_CR_START_Pos     (1U)
#define ADC_CR_START_Msk     (1U << ADC_CR_START_Pos)

#define ADC_CR_CH_Pos        (4U)
#define ADC_CR_CH_Msk        (0x7U << ADC_CR_CH_Pos)

// SR Register

#define ADC_SR_EOC_Pos       (0U)
#define ADC_SR_EOC_Msk       (1U << ADC_SR_EOC_Pos)


// ========================================
// Driver Api
// ========================================

status_t adc_driver_init();
status_t adc_driver_start_conversion(uint8_t channel);
uint32_t adc_driver_read();



#endif /* DRV_ADC_H */
