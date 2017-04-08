#include <iostream>
#include "model/Hackathon.h"
#include "persistence/HackathonPersistenceManager.h"
#include "model/enum/PersistenceErrorHandler.h"
#include "utils/DirectoryHelper.h"
#include <vector>
#include <fstream>
#include "libs/jsoncpp/json/json.h"


std::string GetStdoutFromCommand(std::string cmd) {

    std::string data;
    FILE * stream;
    const int max_buffer = 256;
    char buffer[max_buffer];
    cmd.append(" 2>&1");

    stream = popen(cmd.c_str(), "r");
    if (stream) {
        while (!feof(stream))
            if (fgets(buffer, max_buffer, stream) != NULL) {
            }

        pclose(stream);
    }
    return data;
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    time_t now = time(0);

    model::Hackathon test("CoucouHackathon","une adresse","un sponsor","une récompense",now,now);



    persistence::HackathonPersistenceManager hackathonPersistenceManager;
    errorHandler::PersistenceErrorhandler status = hackathonPersistenceManager.create(test);

    if (status == errorHandler::PersistenceErrorhandler::SUCCESS) {
        std::cout << "Object has been write into file " << std::endl;
    }
    Json::Value hackathonValue;
    std::ifstream people_file("bdd/CoucouHackathon",std::ios::in);
    Json::Reader reader;
    bool b = reader.parse(people_file, hackathonValue);

    if (!b)
        std::cout << "Error: " << reader.getFormattedErrorMessages() << std::endl;
    else
        std::cout<<hackathonValue;


    utils::DirectoryHelper::listAllFile();
    return 0;
}