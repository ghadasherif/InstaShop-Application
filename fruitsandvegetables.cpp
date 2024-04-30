#include "fruitsandvegetables.h"
#include "ui_fruitsandvegetables.h"
#include "shoppingcart.h"

FruitsandVegetables::FruitsandVegetables(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FruitsandVegetables)
{
    ui->setupUi(this);
}

FruitsandVegetables::~FruitsandVegetables()
{
    delete ui;
}

void FruitsandVegetables::on_pushButton_addfruitsproduct_clicked()
{

}


void FruitsandVegetables::on_pushButton_viewfruitsproduct_clicked()
{
    hide();
    shoppingcart* cart= new shoppingcart(this);
    cart->show();
}


void FruitsandVegetables::on_pushButton_searchfruits_clicked()
{

}

