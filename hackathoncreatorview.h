#ifndef HACKATHONCREATOR_H
#define HACKATHONCREATOR_H

#include <QWidget>

namespace Ui {
class HackathonCreator;
}

class HackathonCreator : public QWidget
{
    Q_OBJECT

public:
    explicit HackathonCreator(QWidget *parent = 0);
    ~HackathonCreator();

private slots:
    void on_creationButton_clicked();

private:
    Ui::HackathonCreator *ui;
};

#endif // HACKATHONCREATOR_H
