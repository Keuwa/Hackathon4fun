#include "hackathondetailview.h"
#include "ui_hackathondetailview.h"
#include "manager/HackathonManager.h"
#include <QStringListModel>
#include "QLineEdit"

HackathonDetailView::HackathonDetailView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HackathonDetailView)
{
    ui->setupUi(this);
    manager::HackathonManager& manager = manager::HackathonManager::getInstance();
    model::Hackathon hackathon = manager.getCurrentHackathon();


/*
    model::Step step;
    step.setId(0);
    step.setName("Step1");
    model::Team team;
    team.setId(0);
    team.setName("Team1");

    hackathon.appendTeam(team);
    ackathon.appendStep(step);

    manager.updateHackathon(hackathon);

*/

    QLatin1String strName = QLatin1String(hackathon.getName().c_str());
    QLatin1String strAddress = QLatin1String(hackathon.getAddress().c_str());
    QLatin1String strReward = QLatin1String(hackathon.getReward().c_str());
    QLatin1String strSponsor = QLatin1String(hackathon.getSponsor().c_str());

    QMessageLogger log;

    QLineEdit* nameEdit = ui->nameLineEdit;
    nameEdit->setEnabled(false);
    QLineEdit* sponsorEdit = ui->sponsorLineEdit;
    QLineEdit* addressEdit = ui->adressLineEdit;
    QDateTimeEdit* endDateEdit = ui->endDateTimeEdit;
    QDateTimeEdit* startDateEdit = ui->startDateTimeEdit;

    time_t elapsedTime = hackathon.getBegin_date();
    QDateTime startDate;
    startDate.setTime_t(elapsedTime);

    time_t elapsedTime2 = hackathon.getEnded_date();
    QDateTime endDate;
    endDate.setTime_t(elapsedTime2);

    nameEdit->setText(QString(strName));
    sponsorEdit->setText(QString(strSponsor));
    addressEdit->setText(QString(strAddress));
    endDateEdit->setDateTime(endDate);
    startDateEdit->setDateTime(startDate);

    QStringList listTeam;
    QStringList listStep;

    for (auto it = hackathon.getTeams().begin();it != hackathon.getTeams().end(); ++it) {
        listTeam.append((*it).getName().c_str());
    }

    QStringListModel* modelTeam = new QStringListModel(listTeam);
    ui->stepListView->setModel(modelTeam);


    for (auto it = hackathon.getSteps().begin();it != hackathon.getSteps().end(); ++it) {
        listStep.append((*it).getName().c_str());
    }
    QStringListModel* modelStep = new QStringListModel(listStep);
    ui->teamListView->setModel(modelStep);



}

HackathonDetailView::~HackathonDetailView()
{
    delete ui;
}
