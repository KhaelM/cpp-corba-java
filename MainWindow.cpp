#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    vector<Etudiant*> etudiants = parseEtudiants();
    for(unsigned int i = 0; i < etudiants.size(); i++) {
        ui->tableWidget->insertRow(0);
        ui->tableWidget->setItem(0, 0, new QTableWidgetItem(QString::fromStdString(etudiants.at(i)->getNom())));
        ui->tableWidget->setItem(0, 1, new QTableWidgetItem(QString::number(etudiants.at(i)->getMoyenne())));
        ui->tableWidget->setItem(0, 2, new QTableWidgetItem(QString::fromStdString(etudiants.at(i)->getAffichageAfaka())));
        ui->tableWidget->setItem(0, 3, new QTableWidgetItem(QString::fromUtf8(etudiants.at(i)->getMention().c_str())));
    }
}
