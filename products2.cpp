#include "products2.h"
#include "ui_products2.h"
#include "fillinfo_seller.h"
#include "deleteitem_seller.h"
#include "UsersData.h"

Products2::Products2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Products2)
{
    ui->setupUi(this);
}

Products2::~Products2()
{
    delete ui;
}

void Products2::on_pushButton_additemseller_clicked()
{
    hide();
    FillInfo_Seller* fillinfoseller= new FillInfo_Seller(this);
    fillinfoseller->show();
}



void Products2::on_pushButton_deleteseller_clicked()
{
    hide();
    deleteitem_seller* deleteitem= new deleteitem_seller(this);
    deleteitem->show();
}

