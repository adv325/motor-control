#include "hal_can.h"

#include <stdio.h>

#include "drv_can.h"

int can_init()
{
    can_driver_init();
    printf("can_init\n");

    return 0;
}
