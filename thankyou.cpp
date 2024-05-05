#include "thankyou.h"
#include "ui_thankyou.h"
#include "mainwindow.h"
#include <QFile>
#include <QMessageBox>
#include "product.h"
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
    QFile file();
    if(!file.open(QFile::WriteOnly|QFile::Text))
    {
        QMessageBox::information(this,"title","file is not open");
    else
        {
            QTextStream out (&file);
            for (auto it=current;it!=products.end;it++)
            {
                QString text1 = products[i].getProductName();
                out<<text1;
                QString text2 = products[i].getProductDescription();
                out<<text2;
                QString text3 = products[i].getProductID();
                out<<text3;
                QString text4 = products[i].getProductPrice();
                out<<text4;
                QString text5 =  products[i].getimage_link();
                out<<text5;
            }
            file.flush();
            file.close();
        }
    }
    hide();
    MainWindow * new_window = new MainWindow(this);
    new_window->show();
}

