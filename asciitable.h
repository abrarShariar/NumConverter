#ifndef ASCIITABLE_H
#define ASCIITABLE_H

#include <QDialog>

namespace Ui {
class asciiTable;
}

class asciiTable : public QDialog
{
    Q_OBJECT

public:
    explicit asciiTable(QWidget *parent = 0);
    ~asciiTable();

private:
    Ui::asciiTable *ui;
};

#endif // ASCIITABLE_H
