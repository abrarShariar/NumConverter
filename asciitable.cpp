#include "asciitable.h"
#include "ui_asciitable.h"
#include<QLabel>
#include<QDebug>

asciiTable::asciiTable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::asciiTable)
{


}

asciiTable::~asciiTable()
{
    delete ui;
}
