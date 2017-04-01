//
// Created by guillaume chieb bouares on 01/04/2017.
//

#ifndef HACKATHON4FUN_HACKATHON_H
#define HACKATHON4FUN_HACKATHON_H

#include <iostream>
#include <string>
#include <ctime>
// totu time_t : https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm
namespace model {
    class Hackathon {
    private:
        int id;
        std::string name;
        std::string address;
        std::string sponsor;
        std::string reward;
        time_t begin_date;
        time_t ended_date;

    public:

        //from FileManager
        Hackathon(int id, const std::string &name, const std::string &address, const std::string &sponsor,
                  const std::string &reward, time_t begin_date, time_t ended_date) : id(id), name(name),
                                                                                     address(address), sponsor(sponsor),
                                                                                     reward(reward),
                                                                                     begin_date(begin_date),
                                                                                     ended_date(ended_date) { }
        //from UIVersion
        Hackathon(const std::string &name, const std::string &address, const std::string &sponsor,
                  const std::string &reward, time_t begin_date, time_t ended_date) : name(name), address(address),
                                                                                     sponsor(sponsor), reward(reward),
                                                                                     begin_date(begin_date),
                                                                                     ended_date(ended_date) { }

        int getId() const {
            return id;
        }

        void setId(int id) {
            Hackathon::id = id;
        }

        const std::string &getName() const {
            return name;
        }

        void setName(const std::string &name) {
            Hackathon::name = name;
        }

        const std::string &getAddress() const {
            return address;
        }

        void setAddress(const std::string &address) {
            Hackathon::address = address;
        }

        const std::string &getSponsor() const {
            return sponsor;
        }

        void setSponsor(const std::string &sponsor) {
            Hackathon::sponsor = sponsor;
        }

        const std::string &getReward() const {
            return reward;
        }

        void setReward(const std::string &reward) {
            Hackathon::reward = reward;
        }

        time_t getBegin_date() const {
            return begin_date;
        }

        void setBegin_date(time_t begin_date) {
            Hackathon::begin_date = begin_date;
        }

        time_t getEnded_date() const {
            return ended_date;
        }

        void setEnded_date(time_t ended_date) {
            Hackathon::ended_date = ended_date;
        }
    };
}

#endif //HACKATHON4FUN_HACKATHON_H
