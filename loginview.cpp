#include "loginview.h"
#include "ui_login.h"
#include <iostream>
#include "Dashboard.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    QObject::connect(ui->loginButton, SIGNAL(clicked()), this, SLOT(showHackathon()));




}

Login::~Login()
{
    delete ui;
}

void Login::showHackathon()
{
    Hackathon* hack = new Hackathon();
    this->setCentralWidget(hack);
}

void Login::showHackathonCreator()
{
    HackathonCreator* hackCreator = new HackathonCreator();
    this->setCentralWidget(hackCreator);
}

void Login::on_createTeam_triggered()
{
    TeamCreator* teamCreator = new TeamCreator();
    this->setCentralWidget(teamCreator);
}


void Login::on_showTeam_triggered()
{
    Team* team = new Team();
    this->setCentralWidget(team);
}

void Login::on_createHachathon_triggered()
{
    HackathonCreator* creation = new HackathonCreator();
    this->setCentralWidget(creation);
}

void Login::on_createStep_triggered()
{
    StepCreator* creation = new StepCreator();
    this->setCentralWidget(creation);
}

void Login::on_showHackathons_triggered()
{
    Hackathon* hackathon = new Hackathon();
    this->setCentralWidget(hackathon);
}
