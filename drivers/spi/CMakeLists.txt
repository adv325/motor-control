add_library(drv_spi src/drv_spi.c)

target_include_directories(drv_spi PUBLIC inc)

target_link_libraries(drv_spi PUBLIC common)
