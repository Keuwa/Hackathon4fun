#include "loginview.h"
#include "model/Hackathon.h"
#include <QApplication>
#include <iostream>
#include "manager/HackathonManager.h"
#include "persistence/HackathonPersistenceManager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Login w;
    w.show();

    QMessageLogger m;
    m.debug("heya");

    //test.getTeams().push_back(team);


    manager::HackathonManager::getInstance().loadAllHackathons();



    m.debug("heya");


    return a.exec();
}
