add_library(hal_pwm src/hal_pwm.c)

target_include_directories(hal_pwm PUBLIC inc)

target_link_libraries(hal_pwm PRIVATE drv_pwm)
