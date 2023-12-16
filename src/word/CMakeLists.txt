add_library(word STATIC word.cpp)

target_include_directories(word INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
