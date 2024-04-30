#include "login_register_window.h"
#include "ui_login_register_window.h"
#include "register.h"
#include "products1.h"

Login_Register_Window::Login_Register_Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login_Register_Window)
{
    ui->setupUi(this);
}

Login_Register_Window::~Login_Register_Window()
{
    delete ui;
}

void Login_Register_Window::on_pushButton_Register_clicked()
{
    hide();
    Register* RegisterBuyer= new Register(this);
    RegisterBuyer->show();
}


void Login_Register_Window::on_pushButton_login_clicked()
{
    hide();
    Products1* productsbuyer= new Products1(this);
    productsbuyer->show();
}

