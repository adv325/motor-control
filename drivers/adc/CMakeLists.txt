add_library(drv_adc src/drv_adc.c)

target_include_directories(drv_adc PUBLIC inc)

target_link_libraries(drv_adc PUBLIC common)
