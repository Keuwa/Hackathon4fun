//
// Created by guillaume chieb bouares on 04/04/2017.
//

#ifndef HACKATHON4FUN_STEP_H
#define HACKATHON4FUN_STEP_H

#include "PersistableObject.h"

namespace model {

    class Step: public PersistableObject {

    private:
        int id;
        std::string name;
        time_t begin_date;
        time_t ended_date;

    public:

        Step() { }

       // Step(const Json::Value& stepValue);

        Step(int id, const std::string &name, time_t begin_date, time_t ended_date);
        Step(const Step &step);

        int getId() const;

        void setId(int id);

        const std::string & getName() const;

        void setName(const std::string &name);

        time_t getBegin_date() const;

        void setBegin_date(time_t begin_date);

        time_t getEnded_date() const;

        void setEnded_date(time_t ended_date);

        virtual Json::Value objectToJson() const override;

        Step(const Json::Value& value);
    };
}

#endif //HACKATHON4FUN_STEP_H
