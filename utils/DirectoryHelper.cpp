//
// Created by guillaume chieb bouares on 02/04/2017.
//

#include "DirectoryHelper.h"
#include <sstream>

const std::string utils::DirectoryHelper::BASE_STORAGE_PATH = "bdd";


void utils::DirectoryHelper::createHackathonDirectory(const std::string &directoryName) {
    std::stringstream storageSystemCommand;
    storageSystemCommand << "mkdir" << " " << utils::DirectoryHelper::BASE_STORAGE_PATH;

    if(std::system(storageSystemCommand.str().c_str()) == 0) {
        std::cout << "Directory created" << std::endl;
    } else {
        std::cout << "Directory already created" << std::endl;
    }

    std::stringstream systemCommand;
    systemCommand << "mkdir" << " " << utils::DirectoryHelper::BASE_STORAGE_PATH << "/" << directoryName;

    std::system(systemCommand.str().c_str());
}
