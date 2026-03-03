#include "hal_spi.h"

#include <stdio.h>

#include "drv_spi.h"

int spi_init()
{
    spi_driver_init();
    printf("spi_init\n");

    return 0;
}
