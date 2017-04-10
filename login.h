#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "hackathon.h"
#include "hackathoncreator.h"
#include "step.h"
#include "stepcreator.h"
#include "team.h"
#include "teamcreator.h"
#include "teammember.h"
#include "teammembercreator.h"


namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void showHackathon();
    void showHackathonCreator();

    void on_createHachathon_triggered();

    void on_createTeam_triggered();

    void on_showTeam_triggered();

private:
    Ui::Login *ui;
 };

#endif // LOGIN_H
