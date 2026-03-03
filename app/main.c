#include "hal_gpio.h"
#include "hal_pwm.h"
#include "hal_adc.h"
#include "hal_can.h"
#include "hal_spi.h"
#include "gate_driver.h"
#include "system_basis_chip.h"
#include "scheduler.h"
#include "tasks.h"

int main()
{
    // Board Setup
    //board_init();

    // Peripherals
    gpio_init();
    can_init();
    spi_init();
    adc_init();
    pwm_init();

    // Services
    gate_driver_init();
    system_basis_chip_init();

    // Scheduler/Tasks
    scheduler_init(timed_tasks, num_tasks);

    // Main Loop
    while (1)
    {
        scheduler_run();
    }
}
