//
// Created by Vincent Durpoix on 31/03/2017.
//

#ifndef HACKATHON4FUN_TEAMMEMBER_H
#define HACKATHON4FUN_TEAMMEMBER_H

#include "User.h"

namespace model{

    class TeamMember: public User {
    public:
        TeamMember(const std::string objectName ,int id, const std::string &firstName, const std::string &lastname, const std::string &userState,
                   const std::string &email);

        TeamMember();
    };
}


#endif //HACKATHON4FUN_TEAMMEMBER_H
