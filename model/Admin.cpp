//
// Created by Vincent Durpoix on 31/03/2017.
//

#include "Admin.h"
namespace model{
    model::Admin::Admin(const std::string objectName,
                        int id,
                        const std::string &firstName,
                        const std::string &lastname,
                        const std::string &userState,
                        const std::string &email,
                        const std::string &login,
                        const std::string &password) : User(id,
                                                            firstName,
                                                            lastname,
                                                            userState,
                                                            email)
    {
        this->password = password;
        this->login = login;
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

    Json::Value model::Admin::objectToJson() const {
        Json::Value hackathonValue(Json::objectValue);
        hackathonValue["id"] = this->id;//generate it
        hackathonValue["firstName"] = this->firstName;
        hackathonValue["lastname"] = this->lastname;
        hackathonValue["userState"] = this->userState;
        hackathonValue["email"] = this->email;
        hackathonValue["password"] = this->password;
        hackathonValue["login"] = this->login;

        return hackathonValue;

    }



    }


