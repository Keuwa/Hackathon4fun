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

private:
    Ui::HackathonDetailView *ui;
};

#endif // HACKATHONDETAILVIEW_H
