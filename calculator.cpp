#include "calculator.h"
#include "ui_calculator.h"
#include<QDebug>

int numsys=0;

calculator::calculator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calculator)
{
    ui->setupUi(this);
    this->setModal(false);
    this->setWindowTitle("My Calculator");
}

calculator::~calculator()
{
    delete ui;
}

//decimal checkbox
void calculator::on_checkBox_clicked()
{
    if(ui->checkBox->isChecked()){
        numsys=10;
    }
}

//binary checkbox
void calculator::on_checkBox_2_clicked()
{
    if(ui->checkBox_2->isChecked()){
        numsys=2;
    }
}

//hexa checkbox
void calculator::on_checkBox_3_clicked()
{
    if(ui->checkBox_3->isChecked()){
         numsys=16;
    }
}

//octal checkbox
void calculator::on_checkBox_4_clicked()
{
    if(ui->checkBox_4->isChecked()){
         numsys=8;
    }
}

//[+] sum
void calculator::on_pushButton_clicked()
{
        //input
        QString text=ui->lineEdit->text();
        QString text2=ui->lineEdit_2->text();
        bool ok;

        if(numsys==2){
            long long num1=text.toLongLong(&ok,numsys);
            long long num2=text2.toLongLong(&ok,numsys);
                QString bin=QString::number(num1+num2,numsys);
                ui->textBrowser->setText("ANSWER: ");
                ui->textBrowser->append("\n"+text+" + "+ text2+" = " + bin);
        }
        else if(numsys==16){
            long long num1=text.toLongLong(&ok,numsys);
            long long num2=text2.toLongLong(&ok,numsys);
                QString hex=QString::number(num1+num2,numsys);
                ui->textBrowser->setText("ANSWER: ");
                ui->textBrowser->append("\n"+text+" + "+ text2+" = " + hex.toUpper());
        }
        else if(numsys==8){
            long long num1=text.toLongLong(&ok,numsys);
            long long num2=text2.toLongLong(&ok,numsys);
            QString oct=QString::number(num1+num2,numsys);
            ui->textBrowser->setText("ANSWER: ");
            ui->textBrowser->append("\n"+text+" + "+ text2+" = " + oct);
        }
        else if(numsys==10){
            double num1=text.toDouble(&ok);
            double num2=text2.toDouble(&ok);
            QString dec=QString::number(num1+num2,'g',10);
            ui->textBrowser->setText("ANSWER: ");
            ui->textBrowser->append("\n"+text+" + "+ text2+" = " + dec);
        }
}

//[-] subtract
void calculator::on_pushButton_3_clicked()
{
    //input
    QString text=ui->lineEdit->text();
    QString text2=ui->lineEdit_2->text();
    bool ok;

    if(numsys==2){
        long long num1=text.toLongLong(&ok,numsys);
        long long num2=text2.toLongLong(&ok,numsys);
            QString bin=QString::number(num1-num2,numsys);
            ui->textBrowser->setText("ANSWER: ");
            ui->textBrowser->append("\n"+text+" - "+ text2+" = " + bin);
    }
    else if(numsys==16){
        long long num1=text.toLongLong(&ok,numsys);
        long long num2=text2.toLongLong(&ok,numsys);
            QString hex=QString::number(num1-num2,numsys);
            ui->textBrowser->setText("ANSWER: ");
            ui->textBrowser->append("\n"+text+" - "+ text2+" = " + hex.toUpper());
    }
    else if(numsys==8){
        long long num1=text.toLongLong(&ok,numsys);
        long long num2=text2.toLongLong(&ok,numsys);
        QString oct=QString::number(num1-num2,numsys);
        ui->textBrowser->setText("ANSWER: ");
        ui->textBrowser->append("\n"+text+" - "+ text2+" = " + oct);
    }
    else if(numsys==10){
        double num1=text.toDouble(&ok);
        double num2=text2.toDouble(&ok);
        QString dec=QString::number(num1-num2,'g',10);
        ui->textBrowser->setText("ANSWER: ");
        ui->textBrowser->append("\n"+text+" - "+ text2+" = " + dec);
    }
}


//[*] multiplication
void calculator::on_pushButton_2_clicked()
{
    //input
    QString text=ui->lineEdit->text();
    QString text2=ui->lineEdit_2->text();
    bool ok;

    if(numsys==2){
        long long num1=text.toLongLong(&ok,numsys);
        long long num2=text2.toLongLong(&ok,numsys);
            QString bin=QString::number(num1*num2,numsys);
            ui->textBrowser->setText("ANSWER: ");
            ui->textBrowser->append("\n"+text+" * "+ text2+" = " + bin);
    }
    else if(numsys==16){
        long long num1=text.toLongLong(&ok,numsys);
        long long num2=text2.toLongLong(&ok,numsys);
            QString hex=QString::number(num1*num2,numsys);
            ui->textBrowser->setText("ANSWER: ");
            ui->textBrowser->append("\n"+text+" * "+ text2+" = " + hex.toUpper());
    }
    else if(numsys==8){
        long long num1=text.toLongLong(&ok,numsys);
        long long num2=text2.toLongLong(&ok,numsys);
        QString oct=QString::number(num1*num2,numsys);
        ui->textBrowser->setText("ANSWER: ");
        ui->textBrowser->append("\n"+text+" * "+ text2+" = " + oct);
    }
    else if(numsys==10){
        double num1=text.toDouble(&ok);
        double num2=text2.toDouble(&ok);
        QString dec=QString::number(num1*num2,'g',10);
        ui->textBrowser->setText("ANSWER: ");
        ui->textBrowser->append("\n"+text+" * "+ text2+" = " + dec);
    }
}

//[/] division
void calculator::on_pushButton_4_clicked()
{
    //input
    QString text=ui->lineEdit->text();
    QString text2=ui->lineEdit_2->text();
    bool ok;

    if(numsys==2){
        long long num1=text.toLongLong(&ok,numsys);
        long long num2=text2.toLongLong(&ok,numsys);
            QString bin=QString::number(num1/num2,numsys);
            ui->textBrowser->setText("ANSWER: ");
            ui->textBrowser->append("\n"+text+" / "+ text2+" = " + bin);
    }
    else if(numsys==16){
        long long num1=text.toLongLong(&ok,numsys);
        long long num2=text2.toLongLong(&ok,numsys);
            QString hex=QString::number(num1/num2,numsys);
            ui->textBrowser->setText("ANSWER: ");
            ui->textBrowser->append("\n"+text+" / "+ text2+" = " + hex.toUpper());
    }
    else if(numsys==8){
        long long num1=text.toLongLong(&ok,numsys);
        long long num2=text2.toLongLong(&ok,numsys);
        QString oct=QString::number(num1/num2,numsys);
        ui->textBrowser->setText("ANSWER: ");
        ui->textBrowser->append("\n"+text+" / "+ text2+" = " + oct);
    }
    else if(numsys==10){
        double num1=text.toDouble(&ok);
        double num2=text2.toDouble(&ok);
        QString dec=QString::number(num1/num2,'g',10);
        ui->textBrowser->setText("ANSWER: ");
        ui->textBrowser->append("\n"+text+" / "+ text2+" = " + dec);
    }
}
