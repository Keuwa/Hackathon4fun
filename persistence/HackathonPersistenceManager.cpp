//
// Created by guillaume chieb bouares on 01/04/2017.
//
#include <iostream>
#include <fstream>
#include "HackathonPersistenceManager.h"
#include "../utils/DirectoryHelper.h"
#include "../model/Hackathon.h"
#include "../manager/HackathonManager.h"

errorHandler::PersistenceErrorhandler persistence::HackathonPersistenceManager::create(model::PersistableObject& objectToCreate) {
    std::stringstream hackathonfilepath;
    model::Hackathon hackathonToWrite = dynamic_cast<model::Hackathon&>(objectToCreate);

    hackathonfilepath << utils::DirectoryHelper::BASE_STORAGE_PATH << "/" << hackathonToWrite.getId();

    utils::DirectoryHelper::createHackathonDirectory();
    std::ofstream writeHackathonFile(hackathonfilepath.str(),std::ofstream::out);
    Json::StyledStreamWriter styledStream;
    styledStream.write(writeHackathonFile, hackathonToWrite.objectToJson());
    utils::DirectoryHelper::addHackathonFile(hackathonToWrite.getId());
    writeHackathonFile.close();

    return errorHandler::SUCCESS;
}

errorHandler::PersistenceErrorhandler persistence::HackathonPersistenceManager::readOne(int objectID) {

    return errorHandler::NOT_FOUND;
}

errorHandler::PersistenceErrorhandler persistence::HackathonPersistenceManager::readAll() {
    Json::Value hackathons(Json::arrayValue);
    std::string idList = utils::DirectoryHelper::listAllFile();
    for(char& c : idList){
        std::string path = "bdd/";
        path += c;
        std::ifstream hackathonFile(path.c_str(), std::ifstream::binary);
        Json::Value hackathonValue;
        Json::Reader reader;
        bool b = reader.parse(hackathonFile, hackathonValue);
        if (!b)
            std::cout << "Error: " << reader.getFormattedErrorMessages() << std::endl;
        else
            hackathons.append(hackathonValue);
    }

    for(auto iterator = hackathons.begin();iterator != hackathons.end();iterator++) {
        manager::HackathonManager::getInstance().hackathons.push_back(model::Hackathon((*iterator)));
    }

    Json::Value hackathonValue;
    std::ifstream people_file("bdd/3",std::ios::in);
    Json::Reader reader;
    bool b = reader.parse(people_file, hackathonValue);

    if (!b)
        std::cout << "Error: " << reader.getFormattedErrorMessages() << std::endl;
    else
        std::cout<<hackathonValue;

    return errorHandler::SUCCESS;
}

errorHandler::PersistenceErrorhandler persistence::HackathonPersistenceManager::modify(
        model::PersistableObject& objectToModify) {
    std::stringstream hackathonfilepath;
    model::Hackathon hackathonToWrite = dynamic_cast<model::Hackathon&>(objectToModify);

    hackathonfilepath << utils::DirectoryHelper::BASE_STORAGE_PATH << "/" << hackathonToWrite.getId();

    std::ofstream ofs (hackathonfilepath.str(), std::ios::out | std::ios::trunc);

    Json::StyledStreamWriter styledStream;
    styledStream.write(ofs, hackathonToWrite.objectToJson());

    ofs.close();

    return errorHandler::SUCCESS;
}

errorHandler::PersistenceErrorhandler persistence::HackathonPersistenceManager::remove(
        model::PersistableObject objectToRemove) {
    return errorHandler::NOT_FOUND;
}
