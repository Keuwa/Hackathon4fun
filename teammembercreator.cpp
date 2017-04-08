#include "teammembercreator.h"
#include "ui_teammembercreator.h"

TeamMemberCreator::TeamMemberCreator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TeamMemberCreator)
{
    ui->setupUi(this);
}

TeamMemberCreator::~TeamMemberCreator()
{
    delete ui;
}
