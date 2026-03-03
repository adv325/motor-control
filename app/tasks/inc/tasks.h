#ifndef TASKS_H
#define TASKS_H

#include <stdint.h>
#include "scheduler.h"

extern timed_task_t timed_tasks[];
extern const uint8_t num_tasks;

void task_1ms();
void task_10ms();
void task_100ms();
void task_500ms();
void task_1s();


#endif /* TASKS_H */
