#include "register2.h"
#include "ui_register2.h"
#include "products2.h"
#include "user.h"
#include "UsersData.h"

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
    }

    QString phoneNumber=ui->lineEdit_numseller->text();
    if (phoneNumber.length() != 11) {
        ui->labelErrorPhone_register2->setVisible(true);
    }
    QString email= ui->lineEdit_email_register2->text();
    if (!email.contains('@')||(!email.contains(".com"))) {

        ui->labelErrorEmail_register2->setVisible(true);
    }
    if (name.isEmpty() || password.isEmpty() || reenterpassword.isEmpty() || email.isEmpty() || phoneNumber.isEmpty()) {
        ui->labelErrorAllFields_register2->setVisible(true);
    }
    for (auto i=0;i<Users_Seller.size();i++)
    {
        if(name==(Users_Seller[i].Get_Name()))
        {
            break;
            ui->labelErrorUsername_register2->setVisible(true);
        }
    }
    if (password==reenterpassword)
    {
        ui->labelErrorPassword_register2->setVisible(true);
    }
    User objectseller(name,age,email,phoneNumber,password);
    Users_Seller.push_back(objectseller);
    hide();
    Products2* productsseller= new Products2(this);
    productsseller->show();
}

