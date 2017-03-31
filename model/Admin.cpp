//
// Created by Vincent Durpoix on 31/03/2017.
//

#include "Admin.h"
namespace model{
    model::Admin::Admin(int id, const std::string &firstName, const std::string &lastname, const std::string &userState,
                        const std::string &email, const std::string &login, const std::string &password) : User(id,
                                                                                                                firstName,
                                                                                                                lastname,
                                                                                                                userState,
                                                                                                                email),
                                                                                                           login(login),
                                                                                                           password(
                                                                                                                   password) {

    }


    model::Admin::Admin() {}

    const std::string &model::Admin::getLogin() const {
        return login;
    }

    void model::Admin::setLogin(const std::string &login) {
        Admin::login = login;
    }

    const std::string &model::Admin::getPassword() const {
        return password;
    }

    void model::Admin::setPassword(const std::string &password) {
        Admin::password = password;
    }
}


