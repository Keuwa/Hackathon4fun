#include "stepcreatorview.h"
#include "ui_stepcreator.h"
#include "model/Step.h"
#include "manager/HackathonManager.h"
#include <QMessageBox>
StepCreator::StepCreator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StepCreator)
{
    ui->setupUi(this);
}

StepCreator::~StepCreator()
{
    delete ui;
}

void StepCreator::on_pushButton_clicked()
{
    if(this->ui->ordreSpinBox->value() != 0 && !this->ui->stepName->text().isEmpty()) {
        model::Step stepToCreate;
        stepToCreate.setName(this->ui->stepName->text().toStdString());
        stepToCreate.setOrderNumber(this->ui->ordreSpinBox->value());
        manager::HackathonManager::getInstance().createStep(stepToCreate);
        //log success
    } else {
        //log error
    }
}
