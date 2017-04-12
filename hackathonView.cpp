#include "hackathonview.h"
#include "hackathondetailview.h"
#include "loginview.h"
#include "ui_hackathon.h"
#include "model/Hackathon.h"
#include "manager/HackathonManager.h"
#include <QMessageBox>
#include <QMainWindow>
#include <iostream>


// http://stackoverflow.com/questions/11906324/binding-model-to-qt-tableview
Hackathon::Hackathon(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Hackathon)
{
    int i = 0;
    ui->setupUi(this);
    manager::HackathonManager& man = manager::HackathonManager::getInstance();

    /*model::Hackathon test;
    test.setName("un test");
    test.setReward("1000e");
    test.setSponsor("Quelqu'un");
    test.setId(1);
    model::Hackathon test2;
    test2.setName("un test2");
    test2.setReward("2000e");
    test2.setSponsor("Quelqu'un d'autre");
    test2.setId(2);
*/

    QMessageLogger m;
    m.debug("heya");

    QStringList list;
    for(i = 0;i<man.hackathons.size();i++){
        list.append(man.hackathons[i].getName().c_str());
    }
    QStringListModel* model = new QStringListModel(list);

    /*manager::HackathonManager::getInstance().createHackathon(test);
    manager::HackathonManager::getInstance().createHackathon(test2);*/


    ui->listView->setModel(model);
}

    void Hackathon::on_listView_clicked(QModelIndex const& indexElementSelectionne ){

    }

void Hackathon::on_listView_doubleClicked(const QModelIndex &index){
    HackathonDetailView* hackCreator = new HackathonDetailView();
    manager::HackathonManager& man = manager::HackathonManager::getInstance();
    man.setCurrentHackathon(man.hackathons[index.row()]);

    QMainWindow* parent = (Login*) this->parentWidget();
    parent->setCentralWidget(hackCreator);
}

Hackathon::~Hackathon()
{
    delete ui;
}
