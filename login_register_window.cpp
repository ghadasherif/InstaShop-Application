#include "login_register_window.h"
#include "ui_login_register_window.h"
#include "register.h"
#include "products1.h"
#include "UsersData.h"
#include "user.h"
#include <QString>
Login_Register_Window::Login_Register_Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login_Register_Window)
{
    ui->setupUi(this);
    ui->labelError_username_andpass_buyer->setVisible(false);
}

Login_Register_Window::~Login_Register_Window()
{
    delete ui;
}

void Login_Register_Window::on_pushButton_Register_clicked()
{
    for (auto i=0;i<Users_Seller.size();i++)
    {
        QString username_copy_buyer=ui->lineEdit_username->text();
        QString password_copy_buyer=ui->lineEdit_password->text();
        if ((username_copy_buyer==(Users_Buyer[i].Get_Name()))&&(password_copy_buyer==(Users_Buyer[i].Get_Password())))
        {
            break;
            hide();
            Register* RegisterBuyer= new Register(this);
            RegisterBuyer->show();
        }
    }
    ui->labelError_username_andpass_buyer->setVisible(true);
}
void Login_Register_Window::on_pushButton_login_clicked()
{
    hide();
    Products1* productsbuyer= new Products1(this);
    productsbuyer->show();
}

