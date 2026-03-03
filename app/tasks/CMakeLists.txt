add_library(tasks src/tasks.c)

target_include_directories(tasks PUBLIC inc)

target_link_libraries(tasks PUBLIC common timer scheduler)
