//
// Created by guillaume chieb bouares on 02/04/2017.
//

#ifndef HACKATHON4FUN_DIRECTORYHELPER_H
#define HACKATHON4FUN_DIRECTORYHELPER_H

#include <iostream>
#include <string>
#include <dirent.h>
#include <vector>

namespace utils {
    class DirectoryHelper {

    public:
        static const std::string BASE_STORAGE_PATH;
        static void createHackathonDirectory();
        static std::string listAllFile();
        static void addHackathonFile(const int&id);

    };
}


#endif //HACKATHON4FUN_DIRECTORYHELPER_H
