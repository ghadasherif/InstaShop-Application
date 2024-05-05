#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login_register_window.h"
#include "login_register_seller.h"
#include "product.h"
#include <QFile>
#include <QMessageBox>
#include "vector_products.h"
//#include "ui_login_register_window.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFile file("");
    if(!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::information(this, "title", "file is not open");
    }
    else
    {
        QTextStream in(&file);
        //QString text1;
        while (!in.atEnd()) {
            for (int i = 0; i < 5; i++)
            {
                QString line1 = in.readLine(); //name
                QString line2 = in.readLine();//product_description
                QString line3 = in.readLine();//id
                QString line4 = in.readLine();//price
                QString line5 = in.readLine(); //image link
                Product obj;
                int x= line3.toInt();
                float y= line2.toFloat();
            
                /*obj.setproduct_name(line1);
                obj.setproduct_price(y);
                obj.setproduct_ID(x);
                obj.setproduct_description(line4);*/
                obj.addProduct(line1,line4,line2,line3,line5);
            }
            products.push_back(obj);
        }
        file.close(); 
}

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_seller_button_clicked()
{
    hide();
    login_register_seller* LoginRegister2= new login_register_seller(this);
    LoginRegister2->show();
}


void MainWindow::on_buyer_button_clicked()
{
    hide();
    Login_Register_Window* LoginRegister= new Login_Register_Window(this);
    LoginRegister->show();
}

