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

int model::Team::getMemberCount() const {
    return memberCount;
}

void model::Team::setMemberCount(int memberCount) {
    Team::memberCount = memberCount;
}

model::Team::Team(int id, std::string name, int memberCount) : PersistableObject(){
    this->id = id;
    this->name = name;
    this->memberCount = memberCount;
}

Json::Value model::Team::objectToJson() const {
    Json::Value jsonTeam(Json::objectValue);
    jsonTeam["id"] = this->getId();
    jsonTeam["name"] = this->getName();
    Json::Value marks_json(Json::arrayValue);
    for(auto iterator = marks.begin(); iterator != marks.end(); ++iterator) {
        marks_json.append((*iterator).objectToJson());
    }
    Json::Value members_json(Json::arrayValue);
    jsonTeam["marks"] = marks_json;
    jsonTeam["member_count"] = this->getMemberCount();
    return jsonTeam;
}

void model::Team::createMark(double note, model::Step step){
    int lastId = 0;
    if(!this->marks.empty()){
        lastId = this->marks.back().getId();
    }
    int id = ++lastId;

    double coef = 1;
    int count = this->memberCount;
    if(count > 5){
        while(count > 5){
            coef = coef + 0.05;
            count = count - 1;
        }
    }else if (count < 5){
        while(count < 5){
            coef = coef - 0.05;
            count = count + 1;
        }
    }

    note = note * coef;

    Mark newMark = model::Mark::Mark(id, note, step);
    this->marks.push_back(newMark);

}

model::Team::Team(const Json::Value &team) {
    this->id = team["id"].asInt();
    this->name = team["name"].asString();
    for(auto iterator = team["marks"].begin(); iterator != team["marks"].end(); ++iterator ) {
        this->marks.push_back(Mark((*iterator)));
    }
    //make teamsMember iterator
    this->memberCount = team["member_count"].asInt();
}

model::Team::Team() {}

