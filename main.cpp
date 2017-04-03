#include <iostream>
#include "model/Hackathon.h"
#include "persistence/HackathonPersistenceManager.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    time_t now = time(0);

    model::Hackathon test("name","une adresse","un sponsor","une récompense",now,now);

    persistence::HackathonPersistenceManager hackathonPersistenceManager;
    errorHandler::PersistenceErrorhandler status = hackathonPersistenceManager.create(test);

    if (status == errorHandler::PersistenceErrorhandler::SUCCESS) {
        cout << "Object has been write into file " << endl;
    }

    return 0;
}