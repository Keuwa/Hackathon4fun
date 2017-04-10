#include "hackathon.h"
#include "ui_hackathon.h"

Hackathon::Hackathon(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Hackathon)
{
    ui->setupUi(this);
}

Hackathon::~Hackathon()
{
    delete ui;
}
