cmake_minimum_required(VERSION 3.3)
project(Hackathon4fun)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp model/Hackathon.cpp model/Hackathon.h libs/jsoncpp/jsoncpp.cpp libs/jsoncpp/json/json.h libs/jsoncpp/json/json-forwards.h persistence/BasePersistenceManager.cpp persistence/BasePersistenceManager.h persistence/HackathonPersistenceManager.cpp persistence/HackathonPersistenceManager.h model/PersistableObject.cpp model/PersistableObject.h model/enum/PersistenceErrorHandler.h)
add_executable(Hackathon4fun ${SOURCE_FILES})