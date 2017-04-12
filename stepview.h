#ifndef STEP_H
#define STEP_H

#include <QWidget>
#include "model/Step.h"

namespace Ui {
class Step;
}

class Step : public QWidget
{
    Q_OBJECT

public:
    explicit Step(QWidget *parent = 0);

    ~Step();

private:
    Ui::Step *ui;
};

#endif // STEP_H
