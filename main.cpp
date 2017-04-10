#include "loginview.h"
#include "model/Hackathon.h"
#include <QApplication>
#include <iostream>
#include "manager/HackathonManager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.show();

    QMessageLogger m;


    model::Hackathon h;
    h.setName("Hey");

    manager::HackathonManager& test = manager::HackathonManager::getInstance();
    test.setCurrentHackathon(h);
    std::cout << test.currentHackathon.getName();

    return a.exec();
}
