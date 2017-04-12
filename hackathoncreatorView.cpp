#include "hackathoncreatorview.h"
#include "ui_hackathoncreator.h"
#include "model/Hackathon.h"
#include "manager/HackathonManager.h"
#include<QMessageLogger>
HackathonCreator::HackathonCreator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HackathonCreator)
{
    ui->setupUi(this);
}

HackathonCreator::~HackathonCreator()
{
    delete ui;
}
void HackathonCreator::on_creationButton_clicked() {
    if(!this->ui->nameLineEdit->text().isEmpty() && !this->ui->adressLineEdit->text().isEmpty()
       && !this->ui->sponsorLineEdit->text().isEmpty() && !this->ui->rewardLineEdit->text().isEmpty()) {
        model::Hackathon hackathonToCreate;
        if (manager::HackathonManager::getInstance().hackathons.size() != 0) {
            int lastID = manager::HackathonManager::getInstance().hackathons.back().getId();
            hackathonToCreate.setId(++lastID);
        } else {
            hackathonToCreate.setId(0);
        }
        hackathonToCreate.setName(this->ui->nameLineEdit->text().toStdString());
        hackathonToCreate.setAddress(this->ui->adressLineEdit->text().toStdString());
        hackathonToCreate.setSponsor(this->ui->sponsorLineEdit->text().toStdString());
        hackathonToCreate.setReward(this->ui->rewardLineEdit->text().toStdString());

        manager::HackathonManager::getInstance().createHackathon(hackathonToCreate);
    } else {
        //TODO Message Log need to fill all fields
    }
}
