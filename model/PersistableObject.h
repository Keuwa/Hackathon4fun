//
// Created by guillaume chieb bouares on 02/04/2017.
//

#ifndef HACKATHON4FUN_PERSISTABLEOBJECT_H
#define HACKATHON4FUN_PERSISTABLEOBJECT_H

#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
#include "../libs/jsoncpp/json/json.h"

namespace model {
    class PersistableObject {
    protected:
        std::string classname;

        void setClassName(const std::string& className) {
            this->classname = className;
        }
    public:
        PersistableObject() { }


        const std::string &getClassName() const {
            return classname;
        }
        virtual Json::Value objectToJson() const = 0;
    };
}

#endif //HACKATHON4FUN_PERSISTABLEOBJECT_H
