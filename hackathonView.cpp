#include "hackathonview.h"
#include "ui_hackathon.h"
#include "model/Hackathon.h"
#include <QMessageBox>
// http://stackoverflow.com/questions/11906324/binding-model-to-qt-tableview
Hackathon::Hackathon(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Hackathon)
{
    ui->setupUi(this);
    model::Hackathon test;
    test.setName("un test");
    test.setReward("1000e");
    test.setSponsor("Quelqu'un");
    model::Hackathon test2;
    test2.setName("un test2");
    test2.setReward("2000e");
    test2.setSponsor("Quelqu'un d'autre");

    model::Hackathon test3;
    test3.setName("un test3");
    test3.setReward("3000e");
    test3.setSponsor("Quelqu'un d'autre encore");
    QStringList list;
    list.append(test.getName().c_str());
    list.append(test2.getName().c_str());
    list.append(test3.getName().c_str());
    model = new QStringListModel(list);
    ui->listView->setModel(model);

    connect(this->ui->pushButton, SIGNAL(clicked()),this,SLOT(itemSelected()));
}

void Hackathon::itemSelected() {
    QMessageLogger m;
    QItemSelectionModel *selection = this->ui->listView->selectionModel();
    if(selection != nullptr) {
        QModelIndex indexElementSelectionne = selection->currentIndex();
        QVariant elementSelectionne = model->data(indexElementSelectionne, Qt::DisplayRole);
        m.info("Item selected");
        m.info(elementSelectionne.toString().toStdString().c_str());
    } else {
        m.info("No item selected");
    }
}

Hackathon::~Hackathon()
{
    delete ui;
}
