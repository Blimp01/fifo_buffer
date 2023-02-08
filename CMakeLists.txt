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
add_executable(check_buf_len_1 tests/check_buf_len_1.c fifo.c fifo.h)
#check if buffer len works with wrap around
add_executable(check_buf_len_2 tests/check_buf_len_2.c fifo.c fifo.h)
#check if null pointer returns error
add_executable(null_pointer_check tests/null_pointer_check.c fifo.c fifo.h)
#check is data is added to buffer, and increment of pointer 
add_executable(push_data tests/push_data.c fifo.c fifo.h)
#add data check the pointer decremented
add_executable(pop_data tests/pop_data.c fifo.c fifo.h)

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
add_test(
    NAME null_pointer_check
    COMMAND $<TARGET_FILE:null_pointer_check>
)
add_test(
    NAME push_data
    COMMAND $<TARGET_FILE:push_data>
)
add_test(
    NAME pop_data
    COMMAND $<TARGET_FILE:push_data>
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
