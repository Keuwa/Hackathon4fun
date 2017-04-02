#include <iostream>
#include <fstream>
#include "model/Hackathon.h"
#include "utils/DirectoryHelper.h"
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    //const std::string &name, const std::string &address,
    //const std::string &sponsor, const std::string &reward, time_t begin_date, time_t ended_date
    time_t now = time(0);
    model::Hackathon test("name","une adresse","un sponsor","une récompense",now,now);
    cout << test.objectToJson() << endl;
    utils::DirectoryHelper::createHackathonDirectory(test.getName());
    ofstream out("test.json",ofstream::out);
    out << test.objectToJson();
    out.close();
    return 0;
}