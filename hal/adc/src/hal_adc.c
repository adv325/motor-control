#include "hal_adc.h"
#include <stdio.h>
#include "drv_adc.h"
#include "status.h"

status_t adc_init()
{
    adc_driver_init();
    printf("adc_init\n");

    return 0;
}
