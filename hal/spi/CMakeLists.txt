add_library(hal_spi src/hal_spi.c)

target_include_directories(hal_spi PUBLIC inc)

target_link_libraries(hal_spi PRIVATE drv_spi)
