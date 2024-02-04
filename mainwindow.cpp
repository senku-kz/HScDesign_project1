#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButtonHellow_clicked()
{
    ui->labelHellow->setText("Hello World!");
}

int firstNumber, secondNumber, result;

void MainWindow::on_pushButtonSum_clicked()
{
    firstNumber = ui->lineEditNum1->text().toInt();
    secondNumber = ui->lineEditNum2->text().toInt();
    result = firstNumber + secondNumber;
    ui->lineEditResults->setText(QString::number(result));
}


void MainWindow::on_pushButtonSubtraction_clicked()
{
    firstNumber = ui->lineEditNum1->text().toInt();
    secondNumber = ui->lineEditNum2->text().toInt();
    result = firstNumber - secondNumber;
    ui->lineEditResults->setText(QString::number(result));
}


void MainWindow::on_pushButtonMultiplication_clicked()
{
    firstNumber = ui->lineEditNum1->text().toInt();
    secondNumber = ui->lineEditNum2->text().toInt();
    result = firstNumber * secondNumber;
    ui->lineEditResults->setText(QString::number(result));
}


void MainWindow::on_pushButtonDivision_clicked()
{
    firstNumber = ui->lineEditNum1->text().toInt();
    secondNumber = ui->lineEditNum2->text().toInt();
    result = firstNumber / secondNumber;
    ui->lineEditResults->setText(QString::number(result));
}

