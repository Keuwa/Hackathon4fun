#include <iostream>
#include "model/Step.h"
#include <vector>

int main() {
    std::cout << "Hello, World!" << std::endl;

    time_t now = time(0);

    std::vector<int> intarrays;
    intarrays.reserve(5);
    intarrays.push_back(1);
    intarrays.push_back(1);
    intarrays.push_back(10);
    intarrays.push_back(20);

    for (std::vector<int>::iterator it = intarrays.begin(); it != intarrays.end(); it++) {
        std::cout << *it << std::endl;
    }

    std::vector<model::Step> steps;
    steps.reserve(1);
    steps.push_back(model::Step());
    steps.push_back(model::Step());
    steps.push_back(model::Step());
    steps.push_back(model::Step());

    for (std::vector<model::Step>::iterator iterator  = steps.begin(); iterator != steps.end(); ++iterator) {
        (*iterator).setName("test");
    }

    for (std::vector<model::Step>::iterator iterator  = steps.begin(); iterator != steps.end(); ++iterator) {
        std::cout << (*iterator).getName() << std::endl;
    }

    //model::Hackathon test("name","une adresse","un sponsor","une récompense",now,now);

    //persistence::HackathonPersistenceManager hackathonPersistenceManager;
    //errorHandler::PersistenceErrorhandler status = hackathonPersistenceManager.create(test);

   // if (status == errorHandler::PersistenceErrorhandler::SUCCESS) {
     //   cout << "Object has been write into file " << endl;
    //}

    return 0;
}