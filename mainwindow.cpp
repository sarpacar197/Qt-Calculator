#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

void MainWindow::on_But1_clicked()
{
    QString current = ui->ResultField->text();

    if(current == "+" || current == "-" || current == "x" || current == "/") {
        ui->ResultField->setText("1");
    }
    else {
        if(current == "0") ui->ResultField->setText("1");
        else ui->ResultField->setText(current + "1");
    }

}


void MainWindow::on_But0_clicked()
{
    QString current = ui->ResultField->text();

    if(current == "+" || current == "-" || current == "x" || current == "/") {
        ui->ResultField->setText("0");
    }
    else {
        
        if(current == "0") ui->ResultField->setText("0");
        else ui->ResultField->setText(current + "0");
    }

}


void MainWindow::on_But2_clicked()
{
    QString current = ui->ResultField->text();

    if(current == "+" || current == "-" || current == "x" || current == "/") {
        ui->ResultField->setText("2");
    }
    else {
        if(current == "0") ui->ResultField->setText("2");
        else ui->ResultField->setText(current + "2");
    }
}


void MainWindow::on_But3_clicked()
{
    QString current = ui->ResultField->text();

    if(current == "+" || current == "-" || current == "x" || current == "/") {
        ui->ResultField->setText("3");
    }
    else {
        if(current == "0") ui->ResultField->setText("3");
        else ui->ResultField->setText(current + "3");
    }
}


void MainWindow::on_But4_clicked()
{
    QString current = ui->ResultField->text();

    if(current == "+" || current == "-" || current == "x" || current == "/") {
        ui->ResultField->setText("4");
    }
    else {
        if(current == "0") ui->ResultField->setText("4");
        else ui->ResultField->setText(current + "4");
    }
}


void MainWindow::on_But5_clicked()
{
    QString current = ui->ResultField->text();

    if(current == "+" || current == "-" || current == "x" || current == "/") {
        ui->ResultField->setText("5");
    }
    else {
        if(current == "0") ui->ResultField->setText("5");
        else ui->ResultField->setText(current + "5");
    }
}


void MainWindow::on_But6_clicked()
{
    QString current = ui->ResultField->text();

    if(current == "+" || current == "-" || current == "x" || current == "/") {
        ui->ResultField->setText("6");
    }
    else {
        if(current == "0") ui->ResultField->setText("6");
        else ui->ResultField->setText(current + "6");
    }
}


void MainWindow::on_But7_clicked()
{
    QString current = ui->ResultField->text();

    if(current == "+" || current == "-" || current == "x" || current == "/") {
        ui->ResultField->setText("7");
    }
    else {
        if(current == "0") ui->ResultField->setText("7");
        else ui->ResultField->setText(current + "7");
    }
}


void MainWindow::on_But8_clicked()
{
    QString current = ui->ResultField->text();

    if(current == "+" || current == "-" || current == "x" || current == "/") {
        ui->ResultField->setText("8");
    }
    else {
        if(current == "0") ui->ResultField->setText("8");
        else ui->ResultField->setText(current + "8");
    }
}


void MainWindow::on_But9_clicked()
{
    QString current = ui->ResultField->text();

    if(current == "+" || current == "-" || current == "x" || current == "/") {
        ui->ResultField->setText("9");
    }
    else {
        if(current == "0") ui->ResultField->setText("9");
        else ui->ResultField->setText(current + "9");
    }
}


void MainWindow::on_ButComma_clicked()
{
    QString screen = ui->ResultField->text();
    if(screen.contains(",")){

    }
    else{
        ui->ResultField->setText(screen + ".");
    }
}


void MainWindow::on_ButAC_clicked()
{
    ui->ResultField->setText("0");
    first_num = 0.0;
    pendingOperation = "";

}


void MainWindow::on_ButPlusMinus_clicked()
{
    double val;
    QString new_label;

    val = ui->ResultField->text().toDouble();
    val = val * -1;
    new_label = QString::number(val,'g',15);
    ui->ResultField->setText(new_label);

}


void MainWindow::on_ButPerc_clicked()
{
    QString current_val= ui->ResultField->text();
    if(current_val != '0'){
        ui->ResultField->setText(current_val+'%');
    }
}


void MainWindow::on_ButPlu_clicked()
{
    first_num = ui->ResultField->text().toDouble();
    pendingOperation = "+";

    ui->ResultField->setText("+");

}


void MainWindow::on_ButMin_clicked()
{
    first_num = ui->ResultField->text().toDouble();
    pendingOperation = "-";

    ui->ResultField->setText("-");
}


void MainWindow::on_ButMult_clicked()
{
    first_num = ui->ResultField->text().toDouble();
    pendingOperation = "x";

    ui->ResultField->setText("x");
}


void MainWindow::on_ButDiv_clicked()
{
    first_num = ui->ResultField->text().toDouble();
    pendingOperation = "/";

    ui->ResultField->setText("/");
}



void MainWindow::on_ButEquals_clicked()
{
    double second_num, result = 0; 
    second_num = ui->ResultField->text().toDouble();

    if (pendingOperation == "+") {
        result = first_num + second_num;
    }
    else if (pendingOperation == "-") {
        result = first_num - second_num;
    }
    else if (pendingOperation == "x") { 
        result = first_num * second_num;
    }
    else if (pendingOperation == "/") {
        if (second_num != 0) {
            result = first_num / second_num;
        } else {
            ui->ResultField->setText("Hata!");
            return;
        }
    }

    ui->ResultField->setText(QString::number(result, 'g', 15));
    pendingOperation = ""; 
}

