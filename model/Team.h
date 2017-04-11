//
// Created by Meryl Barantal on 06/04/2017.
//

#ifndef HACKATHON4FUN_TEAM_H
#define HACKATHON4FUN_TEAM_H


#include "PersistableObject.h"
#include "TeamMember.h"
#include "Mark.h"
#include <list>
namespace model {

    class Team: public PersistableObject {

    private:
        int id;
        std::string name;
        int memberCount;
        std::vector<Mark> marks;

    public:

        Team(const Json::Value& teamJson);

        Team(int id, std::string name, int memberCount);

        Team();

        int getId() const;

        void setId(int id);

        const std::string &getName() const;

        void setName(const std::string &name);

        const std::vector<Mark> &getMarks() const;

        void setMarks(const std::vector<Mark> &marks);

        int getMemberCount() const;

        void setMemberCount(int memberCount);

        void createMark(int markValue,Step step);

        Json::Value objectToJson() const override;
    };
}

#endif //HACKATHON4FUN_TEAM_H
