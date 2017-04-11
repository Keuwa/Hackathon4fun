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
    void on_listView_doubleClicked(const QModelIndex &index);
    void on_listView_clicked(const QModelIndex &index);
};

#endif // HACKATHON_H
