#include "thankyou.h"
#include "ui_thankyou.h"
#include "mainwindow.h"
#include <QFile>
#include <QMessageBox>
#include "product.h"
//#include "vector_products.h"
#include "UsersData.h"
#include "user.h"
#include "globals.h"

//std::vector<Product> products(10);
//std::stack<Product> Cart_Items;

#include <QTextStream>
ThankYou::ThankYou(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThankYou)
{
    ui->setupUi(this);
}

ThankYou::~ThankYou()
{
    delete ui;
}

void ThankYou::on_pushButton_continue_clicked()
{
    QFile file("output.txt");
    QFile BuyerFile("");

    if(!file.open(QFile::WriteOnly|QFile::Text))
    {
        QMessageBox::information(this,"title","file is not open");

    }
      QTextStream out (&file);
    for (auto it=products.begin();it!=products.end();it++)
        {
        QString text1 = it->getProductName();
                out<<text1;
        QString text2 = it->getProductDescription();
                out<<text2;
        QString text3 =  QString::number(it->getProductID());
                out<<text3;
        QString text4 =QString::number(it->getProductPrice(), 'f', 2);
                out<<text4;
        QString text5 =  it->getimage_link();
                out<<text5;
          }
          file.flush();
          file.close();



    hide();
    MainWindow * new_window = new MainWindow(this);
    new_window->show();
}

