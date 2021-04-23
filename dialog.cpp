#include "dialog.h"
#include "ui_dialog.h"
#include<QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"confirmation","do you want to submit the form?",QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes)

    {
        QMessageBox::information(this,"confirmation","form successfully submitted");

    }
    else{
        QMessageBox::information(this,"confirmation","form not submitted");

    }
}

void Dialog::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"confirmation","do you want to cancel the form?",QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes)

    {
        QMessageBox::information(this,"confirmation","form successfully cancelled");

    }
    else{
        QMessageBox::information(this,"confirmation","form not cancelled");

    }
}



void Dialog::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"confirmation","do you want to Save the form?",QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes)

    {
        QMessageBox::information(this,"confirmation","form successfully Saved");

    }
    else{
        QMessageBox::information(this,"confirmation","form not Saved");

    }
}
