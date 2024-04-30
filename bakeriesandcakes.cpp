#include "bakeriesandcakes.h"
#include "ui_bakeriesandcakes.h"
#include "shoppingcart.h"

BakeriesandCakes::BakeriesandCakes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BakeriesandCakes)
{
    ui->setupUi(this);
}

BakeriesandCakes::~BakeriesandCakes()
{
    delete ui;
}

void BakeriesandCakes::on_pushButton_SearchItemBakeries_clicked()
{

}


void BakeriesandCakes::on_pushButton_addbakeryproduct_clicked()
{

}


void BakeriesandCakes::on_pushButton_viewbakeriesproduct_clicked()
{
    hide();
    shoppingcart* cart= new shoppingcart(this);
    cart->show();
}

