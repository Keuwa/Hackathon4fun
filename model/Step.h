//
// Created by Meryl Barantal on 03/04/2017.
//

#ifndef HACKATHON4FUN_STEP_H
#define HACKATHON4FUN_STEP_H


#include "PersistableObject.h"

namespace model{

    class Step: public PersistableObject {

    private:

        const std::string objectName = "Step";
        int id;
        std::string name;
        time_t begin_date;
        time_t ended_date;

    public:

        Step(const std::string objectName,
             std::string name,
             int id,
             time_t begin_date,
             time_t end_date);

        const std::string &getObjectName() const;

        int getId() const;

        void setId(int id);

        const std::string &getName() const;

        void setName(const std::string &name);

        time_t getBegin_date() const;

        void setBegin_date(time_t begin_date);

        time_t getEnded_date() const;

        void setEnded_date(time_t ended_date);
        Json::Value objectToJson() const;


    };

}



#endif //HACKATHON4FUN_STEP_H
