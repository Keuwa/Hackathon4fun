cmake_minimum_required(VERSION 3.3)
project(Hackathon4fun)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp model/Hackathon.cpp model/Hackathon.h)
add_executable(Hackathon4fun ${SOURCE_FILES})