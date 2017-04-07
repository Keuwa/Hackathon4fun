//
// Created by Meryl Barantal on 06/04/2017.
//

#include "Mark.h"

int model::Mark::getId() const {
    return id;
}

void model::Mark::setId(int id) {
    Mark::id = id;
}

double model::Mark::getValue() const {
    return value;
}

void model::Mark::setValue(double value) {
    Mark::value = value;
}

const model::Step &model::Mark::getStep() const {
    return step;
}

void model::Mark::setStep(const model::Step &step) {
    Mark::step = step;
}

model::Mark::Mark(int id, double value, model::Step step1)
        : PersistableObject(), step(step1) {
    this->id = id;
    this->value = value;
    this->step = Step(step);
}

Json::Value model::Mark::objectToJson() const {
    Json::Value jsonMark(Json::objectValue);
    jsonMark["id"] = this->getId();
    jsonMark["value"] = this->getValue();
    jsonMark["step"] = this->getStep().objectToJson();
    ;
    return jsonMark;
}
