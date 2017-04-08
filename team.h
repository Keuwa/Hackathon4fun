#ifndef TEAM_H
#define TEAM_H

#include <QWidget>

namespace Ui {
class Team;
}

class Team : public QWidget
{
    Q_OBJECT

public:
    explicit Team(QWidget *parent = 0);
    ~Team();

private:
    Ui::Team *ui;
};

#endif // TEAM_H
