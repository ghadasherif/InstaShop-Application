#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login_register_window.h"
#include "login_register_seller.h"
#include "product.h"
#include <QFile>
#include <QMessageBox>
#include <QDebug>
//#include "vector_products.h"
#include "UsersData.h"
#include "globals.h"

//std::vector<Product> products(10);
//std::stack<Product> Cart_Items;


#include "ui_login_register_window.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFile file("/Users/ghadasherif/build-InstaShop-Qt_6_5_1_macos-Debug/qrc_Products.cpp");
    QFile buyerFile("/Users/ghadasherif/build-InstaShop-Qt_6_5_1_macos-Debug/qrc_Users_Buyer.cpp"); // File for buyers
    QFile sellerFile("/Users/ghadasherif/build-InstaShop-Qt_6_5_1_macos-Debug/qrc_Users_Seller.cpp"); // File for sellers



    if(!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::information(this, "products file", "file is not open");
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
                float y= line4.toFloat();

            
                /*obj.setproduct_name(line1);
                obj.setproduct_price(y);
                obj.setproduct_ID(x);
                obj.setproduct_description(line4);*/

                obj.addProduct(line1,y,line2,x,line5);
                 products.push_back(obj);
            }
//            products.push_back(obj);
        }
        file.close();
        auto current = products.end();
//        current=products.end();
    }
    if (!buyerFile.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::information(this, "Buyer File", "Unable to open buyer file.");
    }
    else
    {
        QTextStream in(&buyerFile);
        while (!in.atEnd()) {
             // QString line = in.readLine();
            // qDebug() << "Read line:" << line;
            QString name = in.readLine();
            int age = in.readLine().toInt();
            QString email = in.readLine();
            QString phone = in.readLine();
            QString password = in.readLine();

            User buyer(name, age, email, phone, password);
            Users_Buyer.push_back(buyer);
        }
        buyerFile.close();
    }
    if (!sellerFile.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::information(this, "Seller File", "Unable to open seller file.");
    }
    else
    {
        QTextStream in(&sellerFile);
        while (!in.atEnd()) {
            QString name = in.readLine();
            int age = in.readLine().toInt();
            QString email = in.readLine();
            QString phone = in.readLine();
            QString password = in.readLine();

            User seller(name, age, email, phone, password);
            Users_Seller.push_back(seller);
        }
        sellerFile.close();
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_seller_button_clicked()
{
   // qDebug() << "Seller button clicked";
    hide();
    login_register_seller* LoginRegister2= new login_register_seller(this);
    LoginRegister2->show();
   // qDebug() << "Seller window shown";
}


void MainWindow::on_buyer_button_clicked()
{
    hide();
    Login_Register_Window* LoginRegister= new Login_Register_Window(this);
    LoginRegister->show();
}


