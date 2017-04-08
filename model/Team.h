//
// Created by Meryl Barantal on 06/04/2017.
//

#ifndef HACKATHON4FUN_TEAM_H
#define HACKATHON4FUN_TEAM_H


#include "PersistableObject.h"
#include "TeamMember.h"
#include "Mark.h"

namespace model {

    class Team: public PersistableObject {

    private:
        int id;
        std::string name;
        int memberCount;
        std::vector<Mark> marks;
        std::vector<TeamMember> teamMembers;

    public:

        Team(int id, std::string name, int memberCount);

        Team();

        int getId() const;

        void setId(int id);

        const std::string &getName() const;

        void setName(const std::string &name);

        const std::vector<Mark> &getMarks() const;

        void setMarks(const std::vector<Mark> &marks);

        const std::vector<TeamMember> &getTeamMembers() const;

        void setTeamMembers(const std::vector<TeamMember> teamMembers);

        int getMemberCount() const;

        void setMemberCount(int memberCount);

        Json::Value objectToJson() const override;
    };
}

#endif //HACKATHON4FUN_TEAM_H
