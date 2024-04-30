#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login_register_window.h"
//#include "ui_login_register_window.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_seller_button_clicked()
{
    hide();
    Login_Register_Window* LoginRegister= new Login_Register_Window(this);
    LoginRegister->show();

}


void MainWindow::on_buyer_button_clicked()
{
    hide();
    Login_Register_Window* LoginRegister= new Login_Register_Window(this);
    LoginRegister->show();
}

