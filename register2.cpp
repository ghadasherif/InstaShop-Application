#include "register2.h"
#include "ui_register2.h"
#include "products2.h"

register2::register2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::register2)
{
    ui->setupUi(this);
    ui->labelErrorUsername_register2->setVisible(false);
    ui->labelErrorPassword_register2->setVisible(false);
    ui->labelErrorAge_register2->setVisible(false);
    ui->labelErrorEmail_register2->setVisible(false);
    ui->labelErrorPhone_register2->setVisible(false);
    ui->labelErrorAllFields_register2->setVisible(false);

}

register2::~register2()
{
    delete ui;
}

void register2::on_pushButton_SubmitRegisterSeller_clicked()
{
    QString name= ui->lineEdit_nameseller->text();
    QString password =ui->label_passseller->text();
    QString reenterpassword =ui->label_reenterpassseller->text();
    int age =ui->lineEdit_ageseller->text().toInt();

    if (age < 16) {
        ui->labelErrorAge_register2->setVisible(true);
        return;
    } else {
        ui->labelErrorAge_register2->setVisible(false);

    }

    QString phoneNumber=ui->lineEdit_numseller->text();
    if (phoneNumber.length() != 11) {
        ui->labelErrorPhone_register2->setVisible(true);
        return;
    } else {
        ui->labelErrorPhone_register2->setVisible(false);

    }
    QString email= ui->lineEdit_email_register2->text();
    if (!email.contains('@')) {

        ui->labelErrorEmail_register2->setVisible(true);
        return;
    } else {
        ui->labelErrorEmail_register2->setVisible(false);

    }
    if (name.isEmpty() || password.isEmpty() || reenterpassword.isEmpty() || email.isEmpty() || phoneNumber.isEmpty()) {
        ui->labelErrorAllFields_register2->setVisible(true);
        return;
    } else {
        ui->labelErrorAllFields_register2->setVisible(false);

    }

    hide();
    Products2* productsseller= new Products2(this);
    productsseller->show();
}

