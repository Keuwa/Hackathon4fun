#ifndef HACKATHON_H
#define HACKATHON_H

#include <QMainWindow>

namespace Ui {
class Hackathon;
}

class Hackathon : public QMainWindow
{
    Q_OBJECT

public:
    explicit Hackathon(QWidget *parent = 0);
    ~Hackathon();

private:
    Ui::Hackathon *ui;
};

#endif // HACKATHON_H
