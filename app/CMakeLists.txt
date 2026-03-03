add_subdirectory(scheduler)
add_subdirectory(tasks)
add_subdirectory(timer)

add_executable(motor_control main.c)

target_link_libraries(motor_control 
                PRIVATE 
                hal_adc 
                hal_gpio 
                hal_pwm 
                hal_spi 
                hal_can 
                gate_driver
                system_basis_chip
                scheduler
                tasks
            )
