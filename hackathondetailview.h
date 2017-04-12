#ifndef HACKATHONDETAILVIEW_H
#define HACKATHONDETAILVIEW_H

#include <QWidget>

namespace Ui {
class HackathonDetailView;
}

class HackathonDetailView : public QWidget
{
    Q_OBJECT

public:
    explicit HackathonDetailView(QWidget *parent = 0);
    ~HackathonDetailView();

private slots:
    void on_teamListView_doubleClicked(const QModelIndex &index);

    void on_teamListView_clicked(const QModelIndex &index);

    void on_stepListView_activated(const QModelIndex &index);

    void on_stepListView_doubleClicked(const QModelIndex &index);

private:
    Ui::HackathonDetailView *ui;
};

#endif // HACKATHONDETAILVIEW_H
