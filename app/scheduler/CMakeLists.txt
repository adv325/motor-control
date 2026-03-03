add_library(scheduler src/scheduler.c)

target_include_directories(scheduler PUBLIC inc)

target_link_libraries(scheduler PUBLIC common timer)
