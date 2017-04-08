//
// Created by guillaume chieb bouares on 05/04/2017.
//

#ifndef HACKATHON4FUN_BASEMANAGER_H
#define HACKATHON4FUN_BASEMANAGER_H

#include <vector>
#include <iostream>
#include "../model/enum/PersistenceErrorHandler.h"

namespace manager {
    template<class T> class BaseManager {

    public:
        static T& getInstance();
        virtual errorHandler::PersistenceErrorhandler loadAll() = 0;
        virtual errorHandler::PersistenceErrorhandler readOne() = 0;
        virtual errorHandler::PersistenceErrorhandler updateCurrentObject() = 0;
        virtual errorHandler::PersistenceErrorhandler removeCurrentObject() = 0;
    protected:
        static T instance;

    private:
        T& operator= (const T&){}
    };

}

#endif //HACKATHON4FUN_BASEMANAGER_H
