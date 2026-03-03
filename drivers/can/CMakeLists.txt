add_library(drv_can src/drv_can.c)

target_include_directories(drv_can PUBLIC inc)

target_link_libraries(drv_can PUBLIC common)
