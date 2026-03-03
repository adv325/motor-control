#include "tasks.h"
#include <stdio.h>
#include "scheduler.h"
#include "timer.h"

// ================================
// Interrupt
// ================================

void timer_100us_isr(void)
{
    counter_100us++;
}

// ================================
// Timed Tasks
// ================================

void task_1ms()
{
    printf("task_1ms\n");
}

void task_10ms()
{
    printf("task_10ms\n");
}

void task_100ms()
{
    printf("task_100ms\n");
}

void task_500ms()
{
    printf("task_500ms\n");
}

void task_1s()
{
    printf("task_1s\n");
}

timed_task_t timed_tasks[] =
{
    { 10, 0, task_1ms },     // 10 * 100us = 1ms
    { 100, 0, task_10ms },
    { 1000, 0, task_100ms },
    { 5000, 0, task_500ms },
    { 10000, 0, task_1s },
};

const uint8_t num_tasks = sizeof(timed_tasks)/sizeof(timed_tasks[0]);
