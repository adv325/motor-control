add_library(hal_can src/hal_can.c)

target_include_directories(hal_can PUBLIC inc)

target_link_libraries(hal_can PRIVATE drv_can)
