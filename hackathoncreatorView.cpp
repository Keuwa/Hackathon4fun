#include "hackathoncreatorview.h"
#include "ui_hackathoncreator.h"

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
