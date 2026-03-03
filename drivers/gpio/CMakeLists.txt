add_library(drv_gpio src/drv_gpio.c)

target_include_directories(drv_gpio PUBLIC inc)

target_link_libraries(drv_gpio PUBLIC common)
