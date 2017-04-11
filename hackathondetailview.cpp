#include "hackathondetailview.h"
#include "ui_hackathondetailview.h"
#include "manager/HackathonManager.h"
#include "QLineEdit"

HackathonDetailView::HackathonDetailView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HackathonDetailView)
{
    ui->setupUi(this);
    manager::HackathonManager& manager = manager::HackathonManager::getInstance();
    model::Hackathon hackathon = manager.getCurrentHackathon();

    QLatin1String strName = QLatin1String(hackathon.getName().c_str());
    QLatin1String strAddress = QLatin1String(hackathon.getAddress().c_str());
    QLatin1String strReward = QLatin1String(hackathon.getReward().c_str());
    QLatin1String strSponsor = QLatin1String(hackathon.getSponsor().c_str());

    QMessageLogger log;

    QLineEdit* nameEdit = ui->nameLineEdit;
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
}

HackathonDetailView::~HackathonDetailView()
{
    delete ui;
}
