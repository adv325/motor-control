#include "hal_pwm.h"

#include <stdio.h>

#include "drv_pwm.h"

int pwm_init()
{
    pwm_driver_init();
    printf("pwm_init\n");

    return 0;
}
