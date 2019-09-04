#ifndef DIALOG_H
#define DIALOG_H
#include "mylabel.h"
#include <QDialog>
#include <QCheckBox>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT


public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    MyLabel l;




private slots:
    void on_radioButton_3_toggled(bool checked);

    void on_radioButton_2_toggled(bool checked);

    void on_radioButton_toggled(bool checked);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
