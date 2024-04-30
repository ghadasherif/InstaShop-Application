#include "shoppingcart.h"
#include "ui_shoppingcart.h"
#include "checkout.h"
#include "products1.h"


shoppingcart::shoppingcart(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shoppingcart)
{
    ui->setupUi(this);
}

shoppingcart::~shoppingcart()
{
    delete ui;
}




void shoppingcart::on_pushButton_nextcart_clicked()
{
    hide();
    checkout* checkoutwindow= new checkout(this);
    checkoutwindow->show();
}


void shoppingcart::on_pushButton_backcart_clicked()
{
    hide();
    Products1* productsbuy= new Products1(this);
    productsbuy->show();
}

