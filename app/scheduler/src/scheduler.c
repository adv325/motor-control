#include "scheduler.h"
#include <stdio.h>
#include <stdint.h>
#include "timer.h"

static timed_task_t *timed_tasks_ptr;
static uint8_t timed_tasks_count;

status_t scheduler_init(timed_task_t *tasks, uint8_t num_tasks)
{
    timed_tasks_ptr = tasks;
    timed_tasks_count = num_tasks;
    return STATUS_OK;
}

void scheduler_run()
{
    //printf("%s\n", __func__);

    uint32_t now = counter_100us;

    for (uint8_t i = 0; i < timed_tasks_count; i++){
        if ((now - timed_tasks_ptr[i].last_run) >= timed_tasks_ptr[i].period_ticks){
            timed_tasks_ptr[i].last_run = now;
            timed_tasks_ptr[i].callback();
        }
    }
}
