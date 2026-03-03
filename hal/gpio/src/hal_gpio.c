#include "hal_gpio.h"

#include <stdio.h>

#include "drv_gpio.h"

int gpio_init()
{
    gpio_driver_init();
    printf("gpio_init\n");
    
    return 0;
}
