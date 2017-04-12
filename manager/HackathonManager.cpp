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
        this->currentHackathon = hackathonToCreate;
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

errorHandler::PersistenceErrorhandler manager::HackathonManager::loadAllHackathons(){
    errorHandler::PersistenceErrorhandler status = this->persistenceManager.readAll();
    if(status == errorHandler::SUCCESS) {
        return errorHandler::SUCCESS;
    }
    return errorHandler::NOT_FOUND;
}

errorHandler::PersistenceErrorhandler manager::HackathonManager::createStep(model::Step& step) {
    this->currentHackathon.appendStep(step);
    errorHandler::PersistenceErrorhandler status = persistenceManager.modify(this->currentHackathon);
    if(status == errorHandler::SUCCESS) {
        for(auto iterator = this->hackathons.begin();iterator != this->hackathons.end();++iterator){
            if((*iterator).getId() == this->currentHackathon.getId()) {
                *iterator = this->currentHackathon;
            }
        }
        return errorHandler::SUCCESS;
    }
    return errorHandler::FAILED;
}

errorHandler::PersistenceErrorhandler manager::HackathonManager::createTeam(model::Team& team) {
    this->currentHackathon.appendTeam(team);
    errorHandler::PersistenceErrorhandler status = persistenceManager.modify(this->currentHackathon);
    if(status == errorHandler::SUCCESS) {
        for(auto iterator = this->hackathons.begin();iterator != this->hackathons.end();++iterator){
            if((*iterator).getId() == this->currentHackathon.getId()) {
                *iterator = this->currentHackathon;
            }
        }
        return errorHandler::SUCCESS;
    }
    return errorHandler::FAILED;
}
