//
// Created by guillaume chieb bouares on 05/04/2017.
//

#ifndef HACKATHON4FUN_HACKATHONMANAGER_H
#define HACKATHON4FUN_HACKATHONMANAGER_H

#include "../model/Hackathon.h"
#include "../persistence/HackathonPersistenceManager.h"
#include <algorithm>
#include "model/Team.h"

namespace manager {
    class HackathonManager {
    public:
        std::vector<model::Hackathon> hackathons;
        model::Hackathon currentHackathon;
        model::Step currentStep;
        static HackathonManager& getInstance();
        errorHandler::PersistenceErrorhandler createHackathon(model::Hackathon hackathonToCreate);
        errorHandler::PersistenceErrorhandler updateHackathon(model::Hackathon hackathonToUpdate);
        errorHandler::PersistenceErrorhandler loadAllHackathons();
        errorHandler::PersistenceErrorhandler createStep(model::Step& step);
        errorHandler::PersistenceErrorhandler createTeam(model::Team& team);
        const model::Hackathon &getCurrentHackathon() const {
            return currentHackathon;
        }

        void setCurrentHackathon(const model::Hackathon &currentHackathon) {
            HackathonManager::currentHackathon = currentHackathon;
        }

        static void setInstance(const HackathonManager &instance) {
            HackathonManager::instance = instance;
        }

    private :
        persistence::HackathonPersistenceManager persistenceManager;
        static HackathonManager instance;
        HackathonManager(){}
        ~HackathonManager(){}

    };
}


#endif //HACKATHON4FUN_HACKATHONMANAGER_H
