//
// Created by guillaume chieb bouares on 01/04/2017.
//
/*#include <iostream>
#include <fstream>
#include "HackathonPersistenceManager.h"
#include "../utils/DirectoryHelper.h"
#include "../model/Hackathon.h"

errorHandler::PersistenceErrorhandler persistence::HackathonPersistenceManager::create(model::PersistableObject& objectToCreate) {
    std::stringstream hackathonfilepath;
    model::Hackathon hackathonToWrite = dynamic_cast<model::Hackathon&>(objectToCreate);

    hackathonfilepath << utils::DirectoryHelper::BASE_STORAGE_PATH << "/" << hackathonToWrite.getName();

    utils::DirectoryHelper::createHackathonDirectory(objectToCreate.getClassName());
    std::ofstream writeHackathonFile(hackathonfilepath.str(),std::ofstream::out);
    writeHackathonFile << hackathonToWrite.objectToJson();
    writeHackathonFile.close();

    return errorHandler::SUCCESS;
}

errorHandler::PersistenceErrorhandler persistence::HackathonPersistenceManager::readOne(int objectID) {
    return errorHandler::NOT_FOUND;
}

errorHandler::PersistenceErrorhandler persistence::HackathonPersistenceManager::readAll() {
    return errorHandler:: NOT_FOUND;
}

errorHandler::PersistenceErrorhandler persistence::HackathonPersistenceManager::modify(
        model::PersistableObject objectToModify) {
    return errorHandler::NOT_FOUND;
}

errorHandler::PersistenceErrorhandler persistence::HackathonPersistenceManager::remove(
        model::PersistableObject objectToRemove) {
    return errorHandler::NOT_FOUND;
}*/
