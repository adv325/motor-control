add_library(hal_adc src/hal_adc.c)

target_include_directories(hal_adc PUBLIC inc)

target_link_libraries(hal_adc PRIVATE drv_adc)

target_link_libraries(hal_adc PUBLIC common)
