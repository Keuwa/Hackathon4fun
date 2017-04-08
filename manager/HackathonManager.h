//
// Created by guillaume chieb bouares on 05/04/2017.
//

#ifndef HACKATHON4FUN_HACKATHONMANAGER_H
#define HACKATHON4FUN_HACKATHONMANAGER_H

#include "BaseManager.h"
#include "../model/Hackathon.h"
#include "../persistence/HackathonPersistenceManager.h"

namespace manager {
    class HackathonManager: public BaseManager<HackathonManager> {
        friend class BaseManager<HackathonManager>;

    private:

        persistence::HackathonPersistenceManager hackathonPersistenceManager;
        HackathonManager(const HackathonManager&){}
        HackathonManager();
        ~HackathonManager();
    public:
        std::vector<model::Hackathon> hackathons;
        model::Hackathon currentHackathon;

        virtual errorHandler::PersistenceErrorhandler loadAll() override;

        virtual errorHandler::PersistenceErrorhandler readOne() override;

        virtual errorHandler::PersistenceErrorhandler updateCurrentObject() override;

        virtual errorHandler::PersistenceErrorhandler removeCurrentObject() override;
    };
}


#endif //HACKATHON4FUN_HACKATHONMANAGER_H
