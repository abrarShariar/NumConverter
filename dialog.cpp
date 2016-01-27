#include "dialog.h"
#include "ui_dialog.h"
#include<QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Number Converter");
}

Dialog::~Dialog()
{
    delete ui;
}


//for decimal conversion
void Dialog::on_pushButton_clicked()
{
        QString text=ui->lineEdit->text();
        bool ok;
        long num=text.toLong(&ok,10);
        QString hex = QString::number(num, 16).toUpper();       //convert to hexadecimal
        QString octal=QString::number(num,8);                   //convert to octal
        QString bin=QString::number(num,2);

        ui->textBrowser->setText("Decimal[10] : "+text);
        ui->textBrowser->append("\nHexadecimal[16] : "+hex);
        ui->textBrowser->append("\nOctal[8] : " +octal);
        ui->textBrowser->append("\nBinary[2] : " +bin);
}

//for hexadecimal conversion
void Dialog::on_pushButton_2_clicked()
{
    QString text=ui->lineEdit_2->text();
    bool ok;
    long num=text.toLong(&ok,16);
    QString dec = QString::number(num,10);                 //convert to decimal
    QString octal=QString::number(num,8);                   //convert to octal
    QString bin=QString::number(num,2);

    ui->textBrowser->setText("Decimal[10] : "+dec);
    ui->textBrowser->append("\nHexadecimal[16] : "+text.toUpper());
    ui->textBrowser->append("\nOctal[8] : " +octal);
    ui->textBrowser->append("\nBinary[2] : " +bin);
}


//for octal conversion

void Dialog::on_pushButton_3_clicked()
{
    QString text=ui->lineEdit_3->text();
    bool ok;
    long num=text.toLong(&ok,8);
    QString dec = QString::number(num,10);                 //convert to decimal
    QString hex=QString::number(num,16).toUpper();                   //convert to octal
    QString bin=QString::number(num,2);

    ui->textBrowser->setText("Decimal[10] : "+dec);
    ui->textBrowser->append("\nHexadecimal[16] : "+hex);
    ui->textBrowser->append("\nOctal[8] : " +text);
    ui->textBrowser->append("\nBinary[2] : " +bin);
}

void Dialog::on_pushButton_4_clicked()
{
    QString text=ui->lineEdit_4->text();
    bool ok;
    long num=text.toLong(&ok,2);
    QString dec = QString::number(num,10);                 //convert to decimal
    QString hex=QString::number(num,16).toUpper();                   //convert to octal
    QString octal=QString::number(num,8);

    ui->textBrowser->setText("Decimal[10] : "+dec);
    ui->textBrowser->append("\nHexadecimal[16] : "+hex);
    ui->textBrowser->append("\nOctal[8] : " +octal);
    ui->textBrowser->append("\nBinary[2] : " +text);

}
