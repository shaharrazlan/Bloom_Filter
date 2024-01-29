cmake_minimum_required(VERSION 3.14)
project("Foobar-Social-Network") # Replace “MyCalc” with your repo name

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include(FetchContent)
set(FETCHCONTENT_DOWNLOAD_NAME_SUFFIX _${PROJECT_NAME})
FetchContent_Declare(
googletest
URL
https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
set(FETCHCONTENT_DOWNLOAD_EXTRACT_TIMESTAMP 1)

enable_testing()
set(SOURCE_FILES
src/InputOutput.cpp
src/InputValidation.cpp
src/BloomFilter.cpp
src/AddUrl.cpp
src/Application.cpp
src/checkUrl.cpp
src/ICommand.h
src/SetHashParam.cpp
src/UrLmanager.cpp
src/main.cpp
)
set(TEST_FILES
tests/test_main.cpp # this is the main for tests
tests/input_test.cpp
tests/bloomfilter_test.cpp # this file contain tests for bloomfilter class functions.
tests/command_test.cpp


)

# Create the main library that you want to test
add_library(${PROJECT_NAME}Lib ${SOURCE_FILES})

# Create the test executables
add_executable(bloomfilter_test tests/bloomfilter_test.cpp)
add_executable(input_test tests/input_test.cpp)
add_executable(command_test tests/command_test.cpp)


# Link Google Test to the test executables
target_link_libraries(input_test PRIVATE gtest gtest_main ${PROJECT_NAME}Lib)
target_link_libraries(bloomfilter_test PRIVATE gtest gtest_main ${PROJECT_NAME}Lib)
target_link_libraries(command_test PRIVATE gtest gtest_main ${PROJECT_NAME}Lib)


# Include the source directory for tests
target_include_directories(input_test PRIVATE src)
target_include_directories(bloomfilter_test PRIVATE src)
target_include_directories(command_test PRIVATE src)


include(GoogleTest)

# Add tests for each executable
gtest_discover_tests(input_test)
gtest_discover_tests(bloomfilter_test)
gtest_discover_tests(command_test)
