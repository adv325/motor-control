#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <stdint.h>
#include "status.h"

// ====================================
// Types
// ====================================

typedef struct
{
    uint32_t period_ticks;
    uint32_t last_run;
    void (*callback)(void);
}timed_task_t;

// ====================================
// Scheduler Api
// ====================================

status_t scheduler_init(timed_task_t *tasks, uint8_t num_tasks);
void scheduler_run();

#endif /* SCHEDULER_H */
