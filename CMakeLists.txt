cmake_minimum_required(VERSION 3.15)
project(shopping-list)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror -D_GLIBCXX_DEBUG")

enable_testing()
add_subdirectory(test)
add_test(
        NAME unit-test
        COMMAND tests
)

install(
        DIRECTORY ${PROJECT_SOURCE_DIR}/include/
        DESTINATION "include"
        FILES_MATCHING PATTERN "*.h"
)
