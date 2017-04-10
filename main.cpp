#include "loginview.h"
#include "model/Hackathon.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.show();

    QMessageLogger m;


    model::Hackathon h;
    h.setName("Hey");

    std::cout << h.getName();

    return a.exec();
}
