//
// Created by Meryl Barantal on 09/04/2017.
//

#ifndef HACKATHON4FUN_STEPMANAGER_H
#define HACKATHON4FUN_STEPMANAGER_H


#include "../model/Step.h"
#include "BaseManager.h"

namespace manager {
    class StepManager: public BaseManager<StepManager> {

    private:
        //persistence::BasePersistenceManager teamPersistenceManager;
        StepManager();
        ~StepManager();
    public:
        std::vector<model::Step> steps;
        model::Step currentStep;

        errorHandler::PersistenceErrorhandler loadAll() override;

        errorHandler::PersistenceErrorhandler readOne() override;

        errorHandler::PersistenceErrorhandler updateCurrentObject() override;

        errorHandler::PersistenceErrorhandler removeCurrentObject() override;
    };
}


#endif //HACKATHON4FUN_STEPMANAGER_H
