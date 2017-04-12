#include "hackathondetailview.h"
#include "stepview.h"
#include "teamview.h"

#include "ui_hackathondetailview.h"
#include "manager/HackathonManager.h"
#include <QStringListModel>
#include <QMainWindow>
#include "QLineEdit"

HackathonDetailView::HackathonDetailView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HackathonDetailView)
{
    ui->setupUi(this);
    manager::HackathonManager& manager = manager::HackathonManager::getInstance();
    model::Hackathon hackathon = manager.getCurrentHackathon();



    /*model::Step step;
    step.setId(1);
    step.setName("Step2");
    model::Team team;
    team.setId(1);
    team.setName("Team2");

    hackathon.appendTeam(team);
    hackathon.appendStep(step);

    manager.updateHackathon(hackathon);*/


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



    for (auto it = hackathon.getSteps().begin();it != hackathon.getSteps().end(); ++it) {
        listStep.append((*it).getName().c_str());
    }


    QStringListModel* modelStep = new QStringListModel(listStep);
    QStringListModel* modelTeam = new QStringListModel(listTeam);

    ui->teamListView->setModel(modelTeam);
    ui->stepListView->setModel(modelStep);



}

HackathonDetailView::~HackathonDetailView()
{
    delete ui;
}

void HackathonDetailView::on_teamListView_doubleClicked(const QModelIndex &index)
{
    /*manager::HackathonManager& man = manager::HackathonManager::getInstance();
    man.currentStep = man.currentHackathon.getSteps()[index.row()];

    Team* teamView = new Team();
    QMainWindow* win = qobject_cast<QMainWindow*>(QApplication::activeWindow());
    win->setCentralWidget(teamView);*/
}

void HackathonDetailView::on_teamListView_clicked(const QModelIndex &index)
{

}

void HackathonDetailView::on_stepListView_activated(const QModelIndex &index)
{

}

void HackathonDetailView::on_stepListView_doubleClicked(const QModelIndex &index)
{
    manager::HackathonManager& man = manager::HackathonManager::getInstance();
    man.currentStep = man.currentHackathon.getSteps()[index.row()];

    Step* stepView = new Step();
    QMainWindow* win = qobject_cast<QMainWindow*>(QApplication::activeWindow());
    win->setCentralWidget(stepView);
}
