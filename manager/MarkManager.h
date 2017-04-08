//
// Created by Meryl Barantal on 09/04/2017.
//

#ifndef HACKATHON4FUN_MARKMANAGER_H
#define HACKATHON4FUN_MARKMANAGER_H


#include "../model/Mark.h"
#include "BaseManager.h"

namespace manager {
    class MarkManager: public BaseManager<MarkManager> {

    private:
        MarkManager();
        ~MarkManager();
    public:
        std::vector<model::Mark> marks;
        model::Mark currentMark;

        errorHandler::PersistenceErrorhandler loadAll() override;

        errorHandler::PersistenceErrorhandler readOne() override;

        errorHandler::PersistenceErrorhandler updateCurrentObject() override;

        errorHandler::PersistenceErrorhandler removeCurrentObject() override;
    };
}



#endif //HACKATHON4FUN_MARKMANAGER_H
