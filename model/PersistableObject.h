//
// Created by guillaume chieb bouares on 02/04/2017.
//

#ifndef HACKATHON4FUN_PERSISTABLEOBJECT_H
#define HACKATHON4FUN_PERSISTABLEOBJECT_H

#include <iostream>
#include <string>

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
    };
}

#endif //HACKATHON4FUN_PERSISTABLEOBJECT_H
