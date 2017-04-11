#ifndef HACKATHON_H
#define HACKATHON_H

#include <QWidget>
#include <QtGui>
namespace Ui {
class Hackathon;
}

class Hackathon : public QWidget
{
    Q_OBJECT

public:
    explicit Hackathon(QWidget *parent = 0);
    ~Hackathon();

private:
    Ui::Hackathon *ui;
    QStringListModel *model;
private slots:
    void itemSelected();
};

#endif // HACKATHON_H
