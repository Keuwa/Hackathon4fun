//
// Created by Vincent Durpoix on 31/03/2017.
//

#ifndef HACKATHON4FUN_ADMIN_H
#define HACKATHON4FUN_ADMIN_H

#include "User.h"

namespace model{
    class Admin :public User {
    public:
        Admin(const std::string objectName,int id, const std::string &firstName, const std::string &lastname, const std::string &userState,
              const std::string &email, const std::string &login, const std::string &password);

        Admin();

        const std::string &getLogin() const;

        void setLogin(const std::string &login);

        const std::string &getPassword() const;

        void setPassword(const std::string &password);

        Json::Value objectToJson() const;

    private:
        std::string login;
        std::string password;
    };
}



#endif //HACKATHON4FUN_ADMIN_H
