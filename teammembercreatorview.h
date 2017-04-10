#ifndef TEAMMEMBERCREATOR_H
#define TEAMMEMBERCREATOR_H

#include <QWidget>

namespace Ui {
class TeamMemberCreator;
}

class TeamMemberCreator : public QWidget
{
    Q_OBJECT

public:
    explicit TeamMemberCreator(QWidget *parent = 0);
    ~TeamMemberCreator();

private:
    Ui::TeamMemberCreator *ui;
};

#endif // TEAMMEMBERCREATOR_H
