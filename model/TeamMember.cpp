//
// Created by Vincent Durpoix on 31/03/2017.
//

#include "TeamMember.h"

model::TeamMember::TeamMember(const std::string objectName,
                              int id,
                              const std::string &firstName,
                              const std::string &lastname,
                              const std::string &userState,
                              const std::string &email) : User(objectName,
                                                               id,
                                                               firstName,
                                                               lastname,
                                                               userState,
                                                               email) {

}

model::TeamMember::TeamMember() {}
