#include "login.h"
#include "ui_login.h"
#include "hackathoncreator.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}




void Login::on_pushButton_clicked()
{
    //this->hide();
    HackathonCreator h;
    h.show();
}

void Login::on_pushButton_2_clicked()
{

}
