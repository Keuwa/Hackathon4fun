//
// Created by Meryl Barantal on 09/04/2017.
//

#ifndef HACKATHON4FUN_TEAMMANAGER_H
#define HACKATHON4FUN_TEAMMANAGER_H


#include "../persistence/BasePersistenceManager.h"
#include "BaseManager.h"
#include "../model/Team.h"

namespace manager {
    class TeamManager: public BaseManager<TeamManager> {

    private:
        TeamManager();
        ~TeamManager();
    public:
        std::vector<model::Team> teams;
        model::Team currentTeam;

        errorHandler::PersistenceErrorhandler loadAll() override;

        errorHandler::PersistenceErrorhandler readOne() override;

        errorHandler::PersistenceErrorhandler updateCurrentObject() override;

        errorHandler::PersistenceErrorhandler removeCurrentObject() override;
    };
}


#endif //HACKATHON4FUN_TEAMMANAGER_H
