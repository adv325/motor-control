add_library(hal_gpio src/hal_gpio.c)

target_include_directories(hal_gpio PUBLIC inc)

target_link_libraries(hal_gpio PRIVATE drv_gpio)
