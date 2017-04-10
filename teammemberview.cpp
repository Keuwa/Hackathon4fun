#include "teammemberview.h"
#include "ui_teammember.h"

TeamMember::TeamMember(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TeamMember)
{
    ui->setupUi(this);
}

TeamMember::~TeamMember()
{
    delete ui;
}
