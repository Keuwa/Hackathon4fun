//
// Created by Vincent Durpoix on 31/03/2017.
//

#include "TeamMember.h"

model::TeamMember::TeamMember(int id, const std::string &firstName, const std::string &lastname,
                              const std::string &userState, const std::string &email) : User(id, firstName, lastname,
                                                                                             userState, email) {

}

model::TeamMember::TeamMember() {}
