#include "dialog.h"
#include "ui_dialog.h"
#include <iostream>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->radioButton_3->setChecked(1);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_radioButton_3_toggled(bool checked)
{
    ui->label->setPixmap(QPixmap::fromImage(l.getColor1()));
    l.setImgChoice(l.getColor1());
    l.setImageChoice(l.getColor1());
    ui->label->show();
}

void Dialog::on_radioButton_2_toggled(bool checked)
{
    ui->label->setPixmap(QPixmap::fromImage(l.getColor2()));
    l.setImageChoice(l.getColor2());
    ui->label->show();

}

void Dialog::on_radioButton_toggled(bool checked)
{
    ui->label->setPixmap(QPixmap::fromImage(l.getimage3()));
    l.setImageChoice(l.getimage3());
    ui->label->show();
}


