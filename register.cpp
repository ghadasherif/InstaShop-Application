#include "register.h"
#include "ui_register.h"
#include "products1.h"
#include "user.h"
#include "UsersData.h"
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

    if (age < 16)   // to make sure that the buyer is old enough to purchase products
    {
        ui->labelErrorAge_register->setVisible(true);
    }
    QString phoneNumber=ui->lineEdit_num->text();
    if (phoneNumber.length() != 11)     //to make sure that the buyer entered a valid phone number
    {
        ui->labelErrorPhone_register->setVisible(true);
    }
    QString email= ui->lineEdit_email->text();
    if ((!email.contains('@'))||(!email.contains(".com")))      //to make sure that the buyer entered an actual email
    {

        ui->labelErrorEmail_register->setVisible(true);
    }
    if (name.isEmpty() || password.isEmpty() || reenterpassword.isEmpty() || email.isEmpty() || phoneNumber.isEmpty())      //to male sure that the buyer entered all the data
    {
        ui->labelErrorAllFields_register->setVisible(true);
    }
    if (password==reenterpassword)
    {
        ui->labelErrorPass->setVisible(true);
    }
    for (auto i=0;i<Users_Buyer.size();i++)
    {
        if(name==(Users_Buyer[i].Get_Name()))
        {
            break;
            ui->labelErrorUsername->setVisible(true);
        }
    }
    User objectbuyer(name,age,email,phoneNumber,password);
    Users_Buyer.push_back(objectbuyer);
    hide();
    Products1* productsBuyer= new Products1(this);
    productsBuyer->show();
}

