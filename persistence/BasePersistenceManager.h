//
// Created by guillaume chieb bouares on 01/04/2017.
//

#ifndef HACKATHON4FUN_BASEPERSISTENCEMANAGER_H
#define HACKATHON4FUN_BASEPERSISTENCEMANAGER_H

#include "../model/PersistableObject.h"
#include "../model/enum/PersistenceErrorHandler.h"

namespace persistence {
    class BasePersistenceManager {
    public:
        virtual errorHandler::PersistenceErrorhandler create(model::PersistableObject& objectToCreate) = 0;
        virtual errorHandler::PersistenceErrorhandler readOne(int objectID) = 0;
        virtual errorHandler::PersistenceErrorhandler readAll() = 0;
        virtual errorHandler::PersistenceErrorhandler modify(model::PersistableObject& objectToModify) = 0;
        virtual errorHandler::PersistenceErrorhandler remove(model::PersistableObject objectToRemove) = 0;
    };
}

#endif //HACKATHON4FUN_BASEPERSISTENCEMANAGER_H
