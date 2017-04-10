#include "stepview.h"
#include "ui_step.h"

Step::Step(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Step)
{
    ui->setupUi(this);
}

Step::~Step()
{
    delete ui;
}
