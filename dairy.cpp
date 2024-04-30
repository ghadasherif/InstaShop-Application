#include "dairy.h"
#include "ui_dairy.h"
#include "shoppingcart.h"
Dairy::Dairy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dairy)
{
    ui->setupUi(this);
}

Dairy::~Dairy()
{
    delete ui;
}

void Dairy::on_pushButton_adddairyproduct_clicked()
{

}


void Dairy::on_pushButton_viewdairyproduct_clicked()
{
    hide();
    shoppingcart* cart= new shoppingcart(this);
    cart->show();
}


void Dairy::on_pushButton_Searchdairy_clicked()
{

}

