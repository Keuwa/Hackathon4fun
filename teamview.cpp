#include "teamview.h"
#include "ui_team.h"

Team::Team(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Team)
{
    ui->setupUi(this);
}

Team::~Team()
{
    delete ui;
}
