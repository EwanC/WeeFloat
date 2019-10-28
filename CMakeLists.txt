cmake_minimum_required(VERSION 3.5)
project(WeeFloat VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(googletest)

add_executable(wee_float_tests test.cpp)
target_compile_options(wee_float_tests PRIVATE
            $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:GNU>>:-Werror -Wall -Wextra>
            $<$<CXX_COMPILER_ID:MSVC>:/Wall /WX>)
target_include_directories(wee_float_tests PUBLIC ${GTEST_INCLUDE_DIR} ${CMAKE_SOURCE_DIR})
target_link_libraries(wee_float_tests gtest_main)
