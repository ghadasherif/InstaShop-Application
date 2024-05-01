#include "login_register_seller.h"
#include "ui_login_register_seller.h"
#include "products2.h"
#include "register2.h"

login_register_seller::login_register_seller(QWidget *parent) :
    QDialog(parent)

{
    ui->setupUi(this);
}

login_register_seller::~login_register_seller()
{
    delete ui;
}

void login_register_seller::on_pushButton_login_seller_clicked()
{
    hide();
    Products2* productsseller= new Products2(this);
    productsseller->show();
}


void login_register_seller::on_pushButton_register_Seller_clicked()
{
    hide();
    register2* registerseller= new register2(this);
    registerseller->show();
}

