//
// Created by Vincent Durpoix on 31/03/2017.
//

#include "TeamMember.h"

model::TeamMember::TeamMember(const std::string objectName,
                              int id,
                              const std::string &firstName,
                              const std::string &lastname,
                              const std::string &userState,
                              const std::string &email) : User(id,
                                                               firstName,
                                                               lastname,
                                                               userState,
                                                               email) {

}

model::TeamMember::TeamMember() {}

model::TeamMember::TeamMember(const Json::Value &teamMember) {
    this->id = teamMember["id"].asInt();
    this->firstName = teamMember["firstName"].asString();
    this->lastname = teamMember["lastName"].asString();
    this->userState = teamMember["userState"].asString();
    this->email = teamMember["email"].asString();
}