cmake_minimum_required(VERSION 3.6)
project(Hackathon4fun)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp model/User.cpp model/User.h model/Admin.cpp model/Admin.h model/TeamMember.cpp model/TeamMember.h)
add_executable(Hackathon4fun ${SOURCE_FILES})