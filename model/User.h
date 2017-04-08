//
// Created by Vincent Durpoix on 31/03/2017.
//

#ifndef HACKATHON4FUN_USER_H
#define HACKATHON4FUN_USER_H


#include <string>
#include <iostream>
#include "PersistableObject.h"

namespace model{
    class User : public PersistableObject {
    protected:
        const std::string objectName = "Hackathon";
        int id;
        std::string firstName;
        std::string lastname;
        std::string userState;
        std::string email;

    public:
        User(const std::string objectName,
             int id,
             const std::string &firstName,
             const std::string &lastname,
             const std::string &userState,
             const std::string &email);

        User();

        int getId() const;

        void setId(int id);

        const std::string &getFirstName() const;

        void setFirstName(const std::string &firstName);

        const std::string &getLastname() const;

        void setLastname(const std::string &lastname);

        const std::string &getUserState() const;

        void setUserState(const std::string &userState);

        const std::string &getEmail() const;

        void setEmail(const std::string &email);

        const std::string &getObjectName() const;

        Json::Value objectToJson() const;

    };
}


#endif //HACKATHON4FUN_USER_H
