#ifndef BAKERIESANDCAKES_H
#define BAKERIESANDCAKES_H

#include <QDialog>

namespace Ui {
class BakeriesandCakes;
}

class BakeriesandCakes : public QDialog
{
    Q_OBJECT

public:
    explicit BakeriesandCakes(QWidget *parent = nullptr); //cosntructor of the class
    ~BakeriesandCakes(); // destructor of the class

private slots:
   // void on_pushButton_SearchItemBakeries_clicked();

   // void on_pushButton_addbakeryproduct_clicked();

    void on_pushButton_viewbakeriesproduct_clicked(); // to view the shopping cart of the app to reflect items that were added and are displayed and shown, also the current window is hidden and the shoppingcart window appears, return void.

    void on_pushButton_addbakeryproduct1_clicked(); // to add an item to the shopping cart and immediately adds it to the stack using also the data in the labels about the products and returns void

    void on_pushButton_addbakeryproduct2_clicked(); // to add an item to the shopping cart and immediately adds it to the stack using also the data in the labels about the products and returns void

    void on_pushButton_addbakeryproduct3_clicked(); //to add an item to the shopping cart and immediately adds it to the stack using also the data in the labels about the products and returns void

    void on_pushButton_addbakeryproduct4_clicked(); //to add an item to the shopping cart and immediately adds it to the stack using also the data in the labels about the products and returns void

    void on_pushButton_addbakeryproduct5_clicked(); //to add an item to the shopping cart and immediately adds it to the stack using also the data in the labels about the products and returns void

    void on_pushButton_addbakeryproduct6_clicked(); //to add an item to the shopping cart and immediately adds it to the stack using also the data in the labels about the products and returns void

    void on_pushButton_addbakeryproduct7_clicked(); //to add an item to the shopping cart and immediately adds it to the stack using also the data in the labels about the products and returns void

    void on_pushButton_addbakeryproduct8_clicked(); //to add an item to the shopping cart and immediately adds it to the stack using also the data in the labels about the products and returns void

    void on_pushButton_addbakeryproduct9_clicked(); //to add an item to the shopping cart and immediately adds it to the stack using also the data in the labels about the products and returns void

    void on_pushButton_addbakeryproduct10_clicked(); //to add an item to the shopping cart and immediately adds it to the stack using also the data in the labels about the products and returns void

    void on_pushButton_Search_clicked(); // Searches the vector of products in vector_products for all the items that have a name matching to the name entered by the user in the line edit and returns void.

private:
    Ui::BakeriesandCakes *ui;
};

#endif // BAKERIESANDCAKES_H
