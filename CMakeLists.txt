cmake_minimum_required(VERSION 3.0.0)
project(fifo_buffer VERSION 0.1.0)

include(CTest)
enable_testing()

#Check Init Functions is correct 
add_executable(init tests/init_test.c fifo.c fifo.h)
#check wp increment by one 
add_executable(simple_increment tests/increment_by_1_test.c fifo.c fifo.h)
#check wrap around works 
add_executable(check_wrap_around tests/check_wrap_around.c fifo.c fifo.h)
#Check buffer full flag works 
add_executable(check_buffer_full tests/check_buffer_full.c fifo.c fifo.h)
#check if buffer len works with simple no wrap around
add_executable(check_buf_len_1 tests/check_buffer_full.c fifo.c fifo.h)
#check if buffer len works with wrap around
add_executable(check_buf_len_2 tests/check_buffer_full.c fifo.c fifo.h)


add_test(
    NAME init
    COMMAND $<TARGET_FILE:init>
)
add_test(
    NAME simple_increment
    COMMAND $<TARGET_FILE:simple_increment>
)
add_test(
    NAME check_wrap_around
    COMMAND $<TARGET_FILE:check_wrap_around>
)
add_test(
    NAME check_buffer_full
    COMMAND $<TARGET_FILE:check_wrap_around>
)
add_test(
    NAME check_buf_len_1
    COMMAND $<TARGET_FILE:check_buf_len_1>
)
add_test(
    NAME check_buf_len_2
    COMMAND $<TARGET_FILE:check_buf_len_2>
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
