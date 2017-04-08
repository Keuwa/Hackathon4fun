//
// Created by guillaume chieb bouares on 02/04/2017.
//

#include "DirectoryHelper.h"
#include <sstream>
#include <fstream>

const std::string utils::DirectoryHelper::BASE_STORAGE_PATH = "bdd";


void utils::DirectoryHelper::createHackathonDirectory() {
    std::stringstream storageSystemCommand;
    storageSystemCommand << "mkdir" << " " << utils::DirectoryHelper::BASE_STORAGE_PATH;

    if(std::system(storageSystemCommand.str().c_str()) == 0) {
        std::cout << "Directory created" << std::endl;
    } else {
        std::cout << "Directory already created" << std::endl;
    }

    std::stringstream systemCommand;

    std::system(systemCommand.str().c_str());


}

std::string utils::DirectoryHelper::listAllFile() {
    std::string hackathonID;
    std::ifstream file("bdd/index");
    while(getline(file,hackathonID)) {
    }
    file.close();
    return hackathonID;

}

void utils::DirectoryHelper::addHackathonFile(const int &id) {
    std::ifstream f("bdd/index");
    if (!f) {
        f.close();
        std::ofstream writeIn("bdd/index");
        writeIn << id;
        writeIn.close();
    } else {
        std::ofstream writeIn("bdd/index",std::ios::app);
        writeIn << id;
        writeIn.close();
    }
}
