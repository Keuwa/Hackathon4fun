#include "stepcreatorview.h"
#include "ui_stepcreator.h"

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
