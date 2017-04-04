//
// Created by guillaume chieb bouares on 01/04/2017.
//

#ifndef HACKATHON4FUN_HACKATHON_H
#define HACKATHON4FUN_HACKATHON_H

#include "PersistableObject.h"
#include "Step.h"

// totu time_t : https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm
namespace model {
    class Hackathon : public PersistableObject {
    private:
        const std::string objectName = "Hackathon";
        int id;
        std::string name;
        std::string address;
        std::string sponsor;
        std::string reward;
        time_t begin_date;
        time_t ended_date;
        std::vector<Step> steps;

    public:

        Hackathon(int id,
                  const std::string &name,
                  const std::string &address,
                  const std::string &sponsor,
                  const std::string &reward,
                  time_t begin_date,
                  time_t ended_date
                );

        Hackathon(const std::string &name,
                  const std::string &address,
                  const std::string &sponsor,
                  const std::string &reward,
                  time_t begin_date,
                  time_t ended_date
                );

        int getId() const {
            return id;
        }

        void setId(int id);

        const std::string & getName() const;

        void setName(const std::string &name);

        const std::string & getAddress() const;

        void setAddress(const std::string &address);

        const std::string & getSponsor() const;

        void setSponsor(const std::string &sponsor);

        const std::string & getReward() const;

        void setReward(const std::string &reward);

        time_t getBegin_date() const;

        void setBegin_date(time_t begin_date);

        time_t getEnded_date() const;

        void setEnded_date(time_t ended_date);

        Json::Value objectToJson() const;

        std::vector<Step> getSteps() const;

        void setSteps(const std::vector<Step, std::allocator<Step>> &steps);
    };
}

#endif //HACKATHON4FUN_HACKATHON_H
