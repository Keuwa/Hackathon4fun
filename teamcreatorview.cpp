#include "teamcreatorview.h"
#include "ui_teamcreator.h"

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
