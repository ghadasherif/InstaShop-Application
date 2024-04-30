#include "deleteitem_seller.h"
#include "ui_deleteitem_seller.h"

deleteitem_seller::deleteitem_seller(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteitem_seller)
{
    ui->setupUi(this);
}

deleteitem_seller::~deleteitem_seller()
{
    delete ui;
}
