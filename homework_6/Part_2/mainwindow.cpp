#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // N0 - N9 && add, sub, mul, div && clear, enter

    QString buttonName;
    const QStringList operationButtons = {"add", "sub", "mul", "div"};
    const QStringList otherButtons = {"clear", "enter"};
    QPushButton *numberButton;

    for(int i = 0; i <= 9; i++)
    {
        buttonName = "N" + QString::number(i); // N0 - N9
        numberButton = findChild<QPushButton*>(buttonName); // tries finding QPushButton with the name 'buttonName', then returns a pointer to it

        if(numberButton)
            connect(numberButton, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    }

    for(const QString& buttonName : operationButtons) // +, -, *, /
    {
        numberButton = findChild<QPushButton*>(buttonName); // tries finding QPushButton with the name 'buttonName', then returns a pointer to it

        if(numberButton)
            connect(numberButton, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    }

    for(const QString& buttonName : otherButtons) // clear, enter
    {
        numberButton = findChild<QPushButton*>(buttonName); // tries finding QPushButton with the name 'buttonName', then returns a pointer to it

        if(numberButton)
            connect(numberButton, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    qDebug() << "Button name: " << name;

    if(state == 1) // write on number 1
    {
        number1 += name.back();
        ui->num1->setText(number1);
        qDebug() << "Number 1: " << number1;
    }
    else if(state == 2) // write on number 2
    {
        number2 += name.back();
        ui->num2->setText(number2);
        qDebug() << "Number 2: " << number2;
    }
}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: " << name;

    if(name == "clear")
    {
        state = 1;
        number1 = "";
        number2 = "";
        resetLineEdits();
    }
    else if(name == "enter")
    {
        if(number1 == "" || number2 == "")
        {
            ui->result->setText("Cannot calculate");
        }
        else
        {
            switch(operand)
            {
            case 0:
                result = std::stoi(number1.QString::toStdString()) + std::stoi(number2.QString::toStdString());
                break;
            case 1:
                result = std::stoi(number1.QString::toStdString()) - std::stoi(number2.QString::toStdString());
                break;
            case 2:
                result = std::stoi(number1.QString::toStdString()) * std::stoi(number2.QString::toStdString());
                break;
            case 3:
                result = (float)std::stoi(number1.QString::toStdString()) / (float)std::stoi(number2.QString::toStdString());
                break;
            }
            ui->result->setText(QString::number(result));
        }
    }
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: " << name;

    if(name == "add") operand = 0, state = 2;
    else if(name == "sub") operand = 1, state = 2;
    else if(name == "mul") operand = 2, state = 2;
    else if(name == "div") operand = 3, state = 2;
}

void MainWindow::resetLineEdits()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}
