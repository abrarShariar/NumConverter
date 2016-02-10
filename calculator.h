#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QDialog>

namespace Ui {
class calculator;
}

class calculator : public QDialog
{
    Q_OBJECT

public:
    explicit calculator(QWidget *parent = 0);
    ~calculator();

private slots:
    void on_checkBox_clicked();
    void on_checkBox_2_clicked();
    void on_checkBox_3_clicked();
    void on_checkBox_4_clicked();

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

private:
    Ui::calculator *ui;
};

#endif // CALCULATOR_H
