#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , counter (0)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bntCount_clicked()
{
    counter++; // Laskurin kasvatus
    QString s = QString::number(counter); // int -> QString

    ui->txtResult->setText(s);       // "Tuloksen" päivitys
    ui->labelInfo->setText("Painiketta Count painettu " + s + " kertaa");    // Tekstin päivitys

    qDebug() << "Klikattu Count"; // Tulostus
}


void MainWindow::on_btnReset_clicked()
{
    counter = 0;
    QString s = QString::number(counter);

    ui->txtResult->setText(s);
    ui->labelInfo->setText("Painiketta Count painettu 0 kertaa");

    qDebug() << "Klikattu Reset";
}

