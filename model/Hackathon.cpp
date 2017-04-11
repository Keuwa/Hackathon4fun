//
// Created by guillaume chieb bouares on 01/04/2017.
//

#include "Hackathon.h"

model::Hackathon::Hackathon(int id,
                            const std::string &name,
                            const std::string &address,
                            const std::string &sponsor,
                            const std::string &reward,
                            time_t begin_date,
                            time_t ended_date) : PersistableObject() {
    this->id = id;
    this->name = name;
    this->address = address;
    this->sponsor = sponsor;
    this->reward = reward;
    this->begin_date = begin_date;
    this->ended_date = ended_date;
    this->steps.reserve(1);
}

model::Hackathon::Hackathon(const std::string &name,
                            const std::string &address,
                            const std::string &sponsor,
                            const std::string &reward,
                            time_t begin_date,
                            time_t ended_date) : PersistableObject() {
    this->name = name;
    this->address = address;
    this->sponsor = sponsor;
    this->reward = reward;
    this->begin_date = begin_date;
    this->ended_date = ended_date;
    this->steps.reserve(1);
}

void model::Hackathon::setId(int id) {
    Hackathon::id = id;
}

const std::string &model::Hackathon::getName() const {
    return name;
}

void model::Hackathon::setName(const std::string &name) {
    Hackathon::name = name;
}

const std::string &model::Hackathon::getAddress() const {
    return address;
}

void model::Hackathon::setAddress(const std::string &address) {
    Hackathon::address = address;
}

const std::string &model::Hackathon::getSponsor() const {
    return sponsor;
}

void model::Hackathon::setSponsor(const std::string &sponsor) {
    Hackathon::sponsor = sponsor;
}

const std::string &model::Hackathon::getReward() const {
    return reward;
}

void model::Hackathon::setReward(const std::string &reward) {
    Hackathon::reward = reward;
}

time_t model::Hackathon::getBegin_date() const {
    return begin_date;
}

void model::Hackathon::setBegin_date(time_t begin_date) {
    Hackathon::begin_date = begin_date;
}

time_t model::Hackathon::getEnded_date() const {
    return ended_date;
}

void model::Hackathon::setEnded_date(time_t ended_date) {
    Hackathon::ended_date = ended_date;
}

Json::Value model::Hackathon::objectToJson() const {
    Json::Value hackathonValue(Json::objectValue), steps_json(Json::arrayValue);
    hackathonValue["id"] = this->id;
    hackathonValue["name"] = this->name;
    hackathonValue["address"] = this->address;
    hackathonValue["sponsor"] = this->sponsor;
    hackathonValue["reward"] = this->reward;
    std::stringstream dateStream;
    dateStream << this->begin_date;
    hackathonValue["begin_date"] = dateStream.str();
    dateStream.str("");
    dateStream << this->ended_date;
    hackathonValue["ended_date"] = dateStream.str();
    for(auto iterator = steps.begin(); iterator != steps.end(); ++iterator) {
        steps_json.append((*iterator).objectToJson());
    }
    hackathonValue["steps"] = steps_json;
    Json::Value teams_json(Json::arrayValue);
    for (auto it = teams.begin(); it != teams.end() ; it++) {
        teams_json.append((*it).objectToJson());
    }
    hackathonValue["teams"] = teams_json;
    return hackathonValue;
}

std::vector<model::Step> model::Hackathon::getSteps() const {
    return steps;
}

void model::Hackathon::setSteps(const std::vector<Step, std::allocator<Step>> &steps) {
    Hackathon::steps = steps;
}

const std::vector<model::Team> &model::Hackathon::getTeams() const {
    return teams;
}

void model::Hackathon::setTeams(const std::vector<model::Team> &teams) {
    Hackathon::teams = teams;
}

model::Hackathon::Hackathon() { }

model::Hackathon::Hackathon(const Json::Value& value) {
    this->id = value["id"].asInt();
    this->name = value["name"].asString();
    this->address = value["address"].asString();
    this->sponsor = value["sponsor"].asString();
    this->reward = value["reward"].asString();
    struct tm begin_date;
    begin_date.tm_sec = std::stol(value["begin_date"].asString());
    this->begin_date = mktime(&begin_date);
    struct tm ended_date;
    ended_date.tm_sec = std::stol(value["ended_date"].asString());
    this->ended_date = mktime(&ended_date);
    for(auto iterator = value["steps"].begin();iterator != value["steps"].end(); ++iterator) {
        this->steps.push_back(Step((*iterator)));
    }

    for(auto iterator = value["teams"].begin();iterator != value["teams"].end(); ++iterator) {
        this->teams.push_back(Team((*iterator)));
    }
}
