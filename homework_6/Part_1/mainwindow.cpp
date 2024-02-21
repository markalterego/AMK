#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_countButton_clicked()
{
    QString numString;
    int num;

    numString = ui->numberBox->text();

    if(!(numString.isEmpty()))
    {
        num = std::stoi(numString.toStdString());
        num++;
        numString = QString::number(num);
        ui->numberBox->setText(numString);
    }
}

void MainWindow::on_resetButton_clicked()
{
    ui->numberBox->clear();
}
