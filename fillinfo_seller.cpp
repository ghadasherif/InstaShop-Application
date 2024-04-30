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

}

