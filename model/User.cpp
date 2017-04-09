//
// Created by Vincent Durpoix on 31/03/2017.
//

#include "User.h"

namespace model {
    model::User::User() {

    }

    model::User::User(int id,
                      const std::string firstName,
                      const std::string lastname,
                      const std::string userState,
                      const std::string email) : PersistableObject(){
        this->id = id;
        this->firstName = firstName;
        this->lastname = lastname;
        this->userState = userState;
        this->email = email;

    }


    Json::Value model::User::objectToJson() const {
        Json::Value hackathonValue(Json::objectValue);
        hackathonValue["id"] = this->id;//generate it
        hackathonValue["firstName"] = this->firstName;
        hackathonValue["lastname"] = this->lastname;
        hackathonValue["userState"] = this->userState;
        hackathonValue["email"] = this->email;

        return hackathonValue;
    }

    int User::getId() const {
        return id;
    }

    void User::setId(int id) {
        User::id = id;
    }

    const std::string &User::getFirstName() const {
        return firstName;
    }

    void User::setFirstName(const std::string &firstName) {
        User::firstName = firstName;
    }

    const std::string &User::getLastname() const {
        return lastname;
    }

    void User::setLastname(const std::string &lastname) {
        User::lastname = lastname;
    }

    const std::string &User::getUserState() const {
        return userState;
    }

    void User::setUserState(const std::string &userState) {
        User::userState = userState;
    }

    const std::string &User::getEmail() const {
        return email;
    }

    void User::setEmail(const std::string &email) {
        User::email = email;
    }
}