//
// Created by Meryl Barantal on 03/04/2017.
//

#include <string>
#include "Step.h"

model::Step::Step(const std::string objectName ,
                  std::string name,
                  int id,
                  time_t begin_date,
                  time_t end_date) {

}

Json::Value model::Step::objectToJson() const {
    Json::Value stepValue(Json::objectValue);
    stepValue["id"] = this->id;//generate it
    stepValue["name"] = this->name;//generate it
    std::stringstream dateStream;
    dateStream << this->begin_date;
    stepValue["begin_date"] = dateStream.str();
    dateStream.str("");
    dateStream << this->ended_date;
    stepValue["ended_date"] = dateStream.str();
    return stepValue;
}

const std::string &Step::getObjectName() const {
    return objectName;
}

int Step::getId() const {
    return id;
}

void Step::setId(int id) {
    Step::id = id;
}

const std::string &Step::getName() const {
    return name;
}

void Step::setName(const std::string &name) {
    Step::name = name;
}

time_t Step::getBegin_date() const {
    return begin_date;
}

void Step::setBegin_date(time_t begin_date) {
    Step::begin_date = begin_date;
}

time_t Step::getEnded_date() const {
    return ended_date;
}

void Step::setEnded_date(time_t ended_date) {
    Step::ended_date = ended_date;
}
