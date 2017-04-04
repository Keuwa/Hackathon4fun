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
    this->setClassName(this->objectName);
    this->id = id;
    this->name = name;
    this->address = address;
    this->sponsor = sponsor;
    this->reward = reward;
    this->begin_date = begin_date;
    this->ended_date = ended_date;
}

model::Hackathon::Hackathon(const std::string &name,
                            const std::string &address,
                            const std::string &sponsor,
                            const std::string &reward,
                            time_t begin_date,
                            time_t ended_date) : PersistableObject() {
    this->setClassName(this->objectName);
    this->name = name;
    this->address = address;
    this->sponsor = sponsor;
    this->reward = reward;
    this->begin_date = begin_date;
    this->ended_date = ended_date;
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
    hackathonValue["id"] = this->id;//generate it
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
    for(std::vector<Step>::iterator it = steps.begin(); it != steps.end(); ++it) {
        steps_json.append((*it).objectToJson());
    }
    hackathonValue["steps"] = steps_json;
    return hackathonValue;
}

std::vector<Step> model::Hackathon::getSteps() const {
    return steps;
}

void model::Hackathon::setSteps(std::vector<Step> steps) const {
    Hackathon::steps = steps;
}
