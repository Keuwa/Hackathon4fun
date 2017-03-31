//
// Created by Vincent Durpoix on 31/03/2017.
//

#include "User.h"
namespace model {
    model::User::User() {

    }

    model::User::User(int id, const std::string &firstName, const std::string &lastname, const std::string &userState,
                      const std::string &email) : id(id), firstName(firstName), lastname(lastname),
                                                  userState(userState),
                                                  email(email) {

    }

    void model::User::setId(int id) {
        User::id = id;
    }

    const std::string &model::User::getFirstName() const {
        return firstName;
    }

    void model::User::setFirstName(const std::string &firstName) {
        User::firstName = firstName;
    }

    const std::string &model::User::getLastname() const {
        return lastname;
    }

    void model::User::setLastname(const std::string &lastname) {
        User::lastname = lastname;
    }

    const std::string &model::User::getUserState() const {
        return userState;
    }

    void model::User::setUserState(const std::string &userState) {
        User::userState = userState;
    }

    const std::string &model::User::getEmail() const {
        return email;
    }

    void model::User::setEmail(const std::string &email) {
        User::email = email;
    }
}