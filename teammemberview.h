#ifndef TEAMMEMBER_H
#define TEAMMEMBER_H

#include <QWidget>

namespace Ui {
class TeamMember;
}

class TeamMember : public QWidget
{
    Q_OBJECT

public:
    explicit TeamMember(QWidget *parent = 0);
    ~TeamMember();

private:
    Ui::TeamMember *ui;
};

#endif // TEAMMEMBER_H
