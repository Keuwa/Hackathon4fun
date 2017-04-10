#include <iostream>
#include "model/Hackathon.h"
#include "persistence/HackathonPersistenceManager.h"
#include <fstream>
#include "manager/HackathonManager.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    time_t now = time(0);

    model::Hackathon test(3,"CoucouHackathon","une adresse","un sponsor","une récompense",now,now);
    model::Hackathon test2(4,"CoucouHackathon2","une adresse","un sponsor","une récompense",now,now);



    persistence::HackathonPersistenceManager hackathonPersistenceManager;
    errorHandler::PersistenceErrorhandler status = hackathonPersistenceManager.create(test);
    errorHandler::PersistenceErrorhandler status2 = hackathonPersistenceManager.create(test2);

    manager::HackathonManager::getInstance().setCurrentHackathon(test);
    std::cout << manager::HackathonManager::getInstance().getCurrentHackathon().getName() << std::endl;
    hackathonPersistenceManager.readAll();

    for(auto iterator = manager::HackathonManager::getInstance().hackathons.begin();
        iterator != manager::HackathonManager::getInstance().hackathons.end(); ++iterator) {
        std::cout << (*iterator).getName() << std::endl;
    }
    test.setName("update test");
    hackathonPersistenceManager.modify(test);

    return 0;
}