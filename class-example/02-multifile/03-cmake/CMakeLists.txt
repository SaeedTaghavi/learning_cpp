# this is a comment line
cmake_minimum_required(VERSION 2.8)
project(class_timer_example)

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# The following folder will be included
include_directories("${PROJECT_SOURCE_DIR}")

#set (CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

#Generate a list of files that match the <globbing-expressions> (here ./src/*.cpp) and store it into the <variable> (here project_SRC)
file(GLOB project_SRC 
     "./src/*.h"
     "./src/*.cpp"
)

# message (" ")
# message("${project_SRC}")
# message (" ")

add_executable(myApp ${project_SRC})
