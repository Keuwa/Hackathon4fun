#ifndef STEPCREATOR_H
#define STEPCREATOR_H

#include <QWidget>

namespace Ui {
class StepCreator;
}

class StepCreator : public QWidget
{
    Q_OBJECT

public:
    explicit StepCreator(QWidget *parent = 0);
    ~StepCreator();

private:
    Ui::StepCreator *ui;
};

#endif // STEPCREATOR_H
