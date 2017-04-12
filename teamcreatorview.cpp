#include "teamcreatorview.h"
#include "ui_teamcreator.h"
#include "model/Team.h"
#include "manager/HackathonManager.h"
TeamCreator::TeamCreator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TeamCreator)
{
    ui->setupUi(this);
}

TeamCreator::~TeamCreator()
{
    delete ui;
}



void TeamCreator::on_pushButton_clicked()
{
    if(!this->ui->lineEdit->text().isEmpty() && this->ui->nombreDeMembreSpinBox->value() != 0) {
        model::Team team;
        if(manager::HackathonManager::getInstance().currentHackathon.getTeams().size() > 0) {
            int lastId = manager::HackathonManager::getInstance().currentHackathon.getTeams().back().getId();
            team.setId(++lastId);
        } else {
            team.setId(0);
        }
        team.setName(this->ui->lineEdit->text().toStdString());
        team.setMemberCount(this->ui->nombreDeMembreSpinBox->value());
        manager::HackathonManager::getInstance().createTeam(team);
    }
}
