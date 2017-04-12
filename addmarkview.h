#ifndef ADDMARKVIEW_H
#define ADDMARKVIEW_H

#include <QWidget>

namespace Ui {
class AddMarkView;
}

class AddMarkView : public QWidget
{
    Q_OBJECT

public:
    explicit AddMarkView(QWidget *parent = 0);
    ~AddMarkView();

private slots:
    void on_pushButton_pressed();

private:
    Ui::AddMarkView *ui;
};

#endif // ADDMARKVIEW_H
