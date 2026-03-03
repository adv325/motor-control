add_library(drv_pwm src/drv_pwm.c)

target_include_directories(drv_pwm PUBLIC inc)

target_link_libraries(drv_pwm PUBLIC common)
