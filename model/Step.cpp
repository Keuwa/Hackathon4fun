//
// Created by guillaume chieb bouares on 04/04/2017.
//

#include "Step.h"



Json::Value model::Step::objectToJson() const {
    Json::Value jsonStep(Json::objectValue);
    jsonStep["id"] = this->getId();
    jsonStep["name"] = this->getName();
    std::stringstream dateStream;
    dateStream << this->begin_date;
    jsonStep["begin_date"] = dateStream.str();
    dateStream.str("");
    dateStream << this->ended_date;
    jsonStep["ended_date"] = dateStream.str();
    return jsonStep;
}

void model::Step::setEnded_date(time_t ended_date) {
    Step::ended_date = ended_date;
}

time_t model::Step::getEnded_date() const {
    return ended_date;
}

void model::Step::setBegin_date(time_t begin_date) {
    Step::begin_date = begin_date;
}

time_t model::Step::getBegin_date() const {
    return begin_date;
}

void model::Step::setName(const std::string &name) {
    Step::name = name;
}

const std::string &model::Step::getName() const {
    return name;
}

void model::Step::setId(int id) {
    Step::id = id;
}

int model::Step::getId() const {
    return id;
}

model::Step::Step(int id, const std::string &name, time_t begin_date, time_t ended_date) : PersistableObject() {
    this->id = id;
    this->name = name;
    this->begin_date = begin_date;
    this->ended_date = ended_date;
    this->setClassName("Step");
}

model::Step::Step(const Step &step){
    this->id = step.getId();
    this->name = step.getName();
    this->begin_date = step.getBegin_date();
    this->ended_date = step.getEnded_date();
}

model::Step::Step(const Json::Value &stepValue) {
    this->id = stepValue["id"].asInt();
    this->name = stepValue["name"].asString();
    struct tm begin_date;
    begin_date.tm_sec = std::stol(stepValue["begin_date"].asString());
    this->begin_date = mktime(&begin_date);
    struct tm ended_date;
    ended_date.tm_sec = std::stol(stepValue["ended_date"].asString());
    this->ended_date = mktime(&ended_date);
}
void model::Step::setOrderNumber(int number) {
    this->orderNumber = number;
}
int model::Step::getOrderNumber() const{
    return this->orderNumber;
}
