//
// Created by Meryl Barantal on 06/04/2017.
//

#include "Team.h"

int model::Team::getId() const {
    return id;
}

void model::Team::setId(int id) {
    Team::id = id;
}

const std::string &model::Team::getName() const {
    return name;
}

void model::Team::setName(const std::string &name) {
    Team::name = name;
}

const std::vector<model::Mark> &model::Team::getMarks() const {
    return marks;
}

void model::Team::setMarks(const std::vector<model::Mark> &marks) {
    Team::marks = marks;
}

const std::vector<model::TeamMember> &model::Team::getTeamMembers() const {
    return teamMembers;
}

void model::Team::setTeamMembers(const std::vector<model::TeamMember> &teamMembers) {
    Team::teamMembers = teamMembers;
}

int model::Team::getMemberCount() const {
    return memberCount;
}

void model::Team::setMemberCount(int memberCount) {
    Team::memberCount = memberCount;
}

Json::Value model::Team::objectToJson() const {
    Json::Value jsonTeam(Json::objectValue);
    jsonTeam["id"] = this->getId();
    jsonTeam["name"] = this->getName();
    Json::Value marks_json(Json::arrayValue);
    for(auto iterator = marks.begin(); iterator != marks.end(); ++iterator) {
        marks_json.append((*iterator).objectToJson());
    }
    jsonTeam["marks"] = marks_json;

    Json::Value members_json(Json::arrayValue);
    for (auto iterator = teamMembers.begin(); iterator != teamMembers.end(); ++iterator) {
        members_json.append((*iterator).objectToJson());
    }
    jsonTeam["team_members"] = members_json;
    jsonTeam["member_count"] = this->getMemberCount();
    return jsonTeam;
}
