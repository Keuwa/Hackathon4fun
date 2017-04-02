//
// Created by guillaume chieb bouares on 01/04/2017.
//

#include "HackathonPersistenceManager.h"
#include "../libs/jsoncpp/json/json.h"
errorHandler::PersistenceErrorhandler persistence::HackathonPersistenceManager::create(
        model::PersistableObject objectToCreate) {



    return errorHandler::NOT_FOUND;
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
}
