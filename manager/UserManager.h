//
// Created by Meryl Barantal on 09/04/2017.
//

#ifndef HACKATHON4FUN_USERMANAGER_H
#define HACKATHON4FUN_USERMANAGER_H


#include "BaseManager.h"
#include "../model/User.h"

namespace manager {
    class UserManager: public BaseManager<UserManager> {

    private:
        UserManager();
        ~UserManager();
    public:
        std::vector<model::User> users;
        model::User currentUser;

        errorHandler::PersistenceErrorhandler loadAll() override;

        errorHandler::PersistenceErrorhandler readOne() override;

        errorHandler::PersistenceErrorhandler updateCurrentObject() override;

        errorHandler::PersistenceErrorhandler removeCurrentObject() override;
    };
}



#endif //HACKATHON4FUN_USERMANAGER_H
