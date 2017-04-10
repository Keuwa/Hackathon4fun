cmake_minimum_required(VERSION 3.3)
project(Hackathon4fun)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp model/User.cpp model/User.h model/Admin.cpp model/Admin.h model/TeamMember.cpp model/TeamMember.h model/Hackathon.cpp model/Hackathon.h libs/jsoncpp/jsoncpp.cpp libs/jsoncpp/json/json.h libs/jsoncpp/json/json-forwards.h persistence/BasePersistenceManager.cpp persistence/BasePersistenceManager.h persistence/HackathonPersistenceManager.cpp persistence/HackathonPersistenceManager.h model/PersistableObject.cpp model/PersistableObject.h model/enum/PersistenceErrorHandler.h utils/DirectoryHelper.cpp utils/DirectoryHelper.h model/Step.cpp model/Step.h manager/HackathonManager.cpp manager/HackathonManager.h model/Mark.cpp model/Mark.h model/Team.h model/Team.cpp )

add_executable(Hackathon4fun ${SOURCE_FILES})