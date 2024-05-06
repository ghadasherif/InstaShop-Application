#include "deleteitem_seller.h"
#include "ui_deleteitem_seller.h"
#include "vector_products.h"
#include <QMessageBox>
#include "ShoppingCart_Vector.h"

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

void deleteitem_seller::on_pushButton_submitdeleteitem_clicked()
{
    QString itemNameToDelete = ui->lineEdit_namedeleteseller->text();
    bool itemFound = false;

    // Iterate over the vector of products
    for (int i = 0; i < Cart_item_Vecs.size(); i++) {
        if (Cart_item_Vecs[i].getProductName() == itemNameToDelete) {
            // Remove the product from the vector
            Cart_item_Vecs.erase(Cart_item_Vecs.begin() + i);
            itemFound = true;
            break; // Exit the loop after removing the item
        }
    }

    if (itemFound) {
        // Provide feedback to the user
        QMessageBox::information(this, "Success", "Item deleted successfully.");
    } else {
        // Set the visibility of the labels to true
        ui->label_deleteproductid->setVisible(true);
        ui->label_namedeleteseller->setVisible(true);
    }

    // Clear the input field
    ui->lineEdit_namedeleteseller->clear();
}

