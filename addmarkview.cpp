#include "addmarkview.h"
#include "ui_addmarkview.h"
#include "model/Hackathon.h"
#include "manager/HackathonManager.h"
#include <algorithm>
#include <QComboBox>

AddMarkView::AddMarkView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddMarkView)
{
    ui->setupUi(this);
    QComboBox* step = ui->stepComboBox;
    QComboBox* team = ui->teamComboBox;

    model::Hackathon hackathon = manager::HackathonManager::getInstance().getCurrentHackathon();

    for (auto it = hackathon.getTeams().begin();it != hackathon.getTeams().end(); ++it) {
        step->addItem((*it).getName().c_str());
    }



    for (auto it = hackathon.getSteps().begin();it != hackathon.getSteps().end(); ++it) {
        team->addItem((*it).getName().c_str());
    }


}

AddMarkView::~AddMarkView()
{
    delete ui;
}

void AddMarkView::on_pushButton_pressed()
{
    QComboBox* step = ui->stepComboBox;
    QComboBox* team = ui->teamComboBox;
    QSpinBox* mark = ui->markSpinBox;

    model::Hackathon hackathon = manager::HackathonManager::getInstance().getCurrentHackathon();
    model::Team teamModel = hackathon.getTeams()[team->currentIndex()];
    model::Step stepModel = hackathon.getSteps()[step->currentIndex()];
    teamModel.createMark((double)mark->value(),stepModel);

    std::vector<model::Team>vTeam = hackathon.getTeams();

    vTeam.at(team->currentIndex()) = teamModel;
    hackathon.setTeams(vTeam);

    manager::HackathonManager::getInstance().updateHackathon(hackathon);

}
