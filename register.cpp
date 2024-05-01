#include "register.h"
#include "ui_register.h"
#include "products1.h"

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    ui->labelErrorUsername->setVisible(false);
    ui->labelErrorPass->setVisible(false);
    ui->labelErrorAge_register->setVisible(false);
    ui->labelErrorEmail_register->setVisible(false);
    ui->labelErrorPhone_register->setVisible(false);
    ui->labelErrorAllFields_register->setVisible(false);



}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_SubmitRegisterBuyer_clicked()
{
    QString name= ui->lineEdit_nameregister->text();
    QString password =ui->label_passregister->text();
    QString reenterpassword =ui->label_reenterpass->text();
    int age =ui->lineEdit_age->text().toInt();

    if (age < 16) {
        ui->labelErrorAge_register->setVisible(true);
        return;
    }
    else {
        ui->labelErrorAge_register->setVisible(false);

    }

    QString phoneNumber=ui->lineEdit_num->text();
    if (phoneNumber.length() != 11) {
        ui->labelErrorPhone_register->setVisible(true);
        return;
    } else {
        ui->labelErrorPhone_register->setVisible(false);

    }
    QString email= ui->lineEdit_email->text();
    if (!email.contains('@')) {

        ui->labelErrorEmail_register->setVisible(true);
        return;
    }else {
        ui->labelErrorEmail_register->setVisible(false);

    }
    if (name.isEmpty() || password.isEmpty() || reenterpassword.isEmpty() || email.isEmpty() || phoneNumber.isEmpty()) {
        ui->labelErrorAllFields_register->setVisible(true);
        return;
    } else {
        ui->labelErrorAllFields_register->setVisible(false);

    }



    hide();
    Products1* productsBuyer= new Products1(this);
    productsBuyer->show();
}

