//
// Created by guillaume chieb bouares on 05/04/2017.
//

#include "HackathonManager.h"

manager::HackathonManager manager::HackathonManager::instance = HackathonManager();

manager::HackathonManager &manager::HackathonManager::getInstance() {
    return instance;
}

errorHandler::PersistenceErrorhandler manager::HackathonManager::createHackathon(model::Hackathon hackathonToCreate) {
    errorHandler::PersistenceErrorhandler status = persistenceManager.create(hackathonToCreate);
    if (status == errorHandler::SUCCESS) {
        this->hackathons.push_back(hackathonToCreate);
        return errorHandler::SUCCESS;
    }
    return errorHandler::NOT_FOUND;
}

errorHandler::PersistenceErrorhandler manager::HackathonManager::updateHackathon(model::Hackathon hackathonToUpdate) {
    errorHandler::PersistenceErrorhandler status = persistenceManager.modify(hackathonToUpdate);
    if(status == errorHandler::SUCCESS) {
        this->currentHackathon = hackathonToUpdate;
        return errorHandler::SUCCESS;
    }
    return errorHandler::NOT_FOUND;
}
