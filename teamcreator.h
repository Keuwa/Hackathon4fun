#ifndef TEAMCREATOR_H
#define TEAMCREATOR_H

#include <QWidget>

namespace Ui {
class TeamCreator;
}

class TeamCreator : public QWidget
{
    Q_OBJECT

public:
    explicit TeamCreator(QWidget *parent = 0);
    ~TeamCreator();

private:
    Ui::TeamCreator *ui;
};

#endif // TEAMCREATOR_H
