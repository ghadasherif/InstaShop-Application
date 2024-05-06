#include "fillinfo_seller.h"
#include "ui_fillinfo_seller.h"
#include "products2.h"

FillInfo_Seller::FillInfo_Seller(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FillInfo_Seller)
{
    ui->setupUi(this);
}

FillInfo_Seller::~FillInfo_Seller()
{
    delete ui;
}

void FillInfo_Seller::on_pushButton_submit_clicked()
{
// for loop in a ector or produtcs/ product{i]. get productname== value in line edit
    // if )search function
    // remove from vector of prodcuts an dthen break.
    // set visible l true (item u want to delete is not found)
}

