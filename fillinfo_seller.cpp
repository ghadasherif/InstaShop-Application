#include "fillinfo_seller.h"
#include "ui_fillinfo_seller.h"
#include "product.h"

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
    QString productName = ui->lineEdit_nameseller->text();
    QString productPrice = ui->lineEdit_priceseller->text();
    QString productID = ui->lineEdit_idseller->text();
    QString productDescription = ui->lineEdit_descriptionseller->text();
    QString productImage= ui->lineEdit_imagelink->text();
    if (productName.isEmpty() || productPrice.isEmpty() || productID.isEmpty() || productDescription.isEmpty()) {
        // Show an error message if any required fields are empty
        ui->label_errormessageinfoseller->setVisible(true);
        return; // Stop further processing
    } else {
        // Hide the error message if all required fields are filled
        ui->label_errormessageinfoseller->setVisible(false);
    }

}

// for loop in a ector or produtcs/ product{i]. get productname== value in line edit
// if search function
// remove from vector of prodcuts and then break.
// set visible l true (item u want to delete is not found)
