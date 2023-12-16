cmake_minimum_required(VERSION 3.22.1)

project("sha256" VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_subdirectory(src)
add_subdirectory(test)
