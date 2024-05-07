#include "thankyou.h"
#include "ui_thankyou.h"
#include "mainwindow.h"
#include <QFile>
#include <QMessageBox>
#include "product.h"
#include "vector_products.h"
#include "UsersData.h"
#include "user.h"
#include <QTextStream>
#include <QVector>
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
    QFile SellerFile("");

    if(!file.open(QFile::WriteOnly|QFile::Text)) //opens for write
    {
        QMessageBox::information(this,"title","file is not open");

    }
      QTextStream out (&file);
    for (auto it=products.begin();it!=products.end();it++) // iterates over the vector of products and retrueves its data from the point it last stopped and writes it to the file
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
          if(!SellerFile.open(QFile::WriteOnly|QFile::Text)) //opens for write
          {
                QMessageBox::information(this,"title","file is not open");
          }
          QTextStream sellerout (&SellerFile);
          for (auto it=Users_Buyer.begin();it!=Users_Buyer.end();it++) // iterates over the vector of products and retrueves its data from the point it last stopped and writes it to the file
          {
                QString text1 = it->Get_Name();
                sellerout<<text1;
                QString text2 = it->Get_Email();
                sellerout<<text2;
                QString text3 =  QString::number(it->Get_Age());
                sellerout<<text3;
                QString text4 =  it-> Get_Phone(); //QString::n(it->Get_Phone());
                sellerout<<text4;
                QString text5 =  it->Get_Password();
                sellerout<<text5;
          }
          file.flush();
          file.close();
          if(!BuyerFile.open(QFile::WriteOnly|QFile::Text)) //opens for write
          {
                QMessageBox::information(this,"title","file is not open");
          }
          QTextStream buyerout (&BuyerFile);
          for (auto it=Users_Buyer.begin();it!=Users_Buyer.end();it++) // iterates over the vector of products and retrueves its data from the point it last stopped and writes it to the file
          {
                QString text1 = it->Get_Name();
                buyerout<<text1;
                QString text2 = it->Get_Email();
                buyerout<<text2;
                QString text3 =  QString::number(it->Get_Age());
                buyerout<<text3;
                QString text4 =  it-> Get_Phone(); //QString::n(it->Get_Phone());
                buyerout<<text4;
                QString text5 =  it->Get_Password();
                buyerout<<text5;
          }
          file.flush();
          file.close();





    hide();
    MainWindow * new_window = new MainWindow(this);
    new_window->show();
}

