#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <QDialog>

namespace Ui {
class shoppingcart;
}

class shoppingcart : public QDialog
{
    Q_OBJECT

public:
    explicit shoppingcart(QWidget *parent = nullptr); //Constructor for shopping cart class
    ~shoppingcart(); // destructor for shopping cart class

private slots:

    void on_pushButton_nextcart_clicked(); // hides the current window and opens and directs the user to the checkout window

    void on_pushButton_backcart_clicked(); // hides the current window and opens and directs the user to the product1 window again, if he wish continue shopping, returns void

    void on_Product1_Remove_clicked();  // Removes the product from the vector of shopping cart items and erases and hides it from the page, return void

    void on_Product2_Remove_clicked();  //Removes the product from the vector of shopping cart items and erases and hides it from the page, return void

    void on_Product3_Remove_clicked(); //Removes the product from the vector of shopping cart items and erases and hides it from the page, return void

    void on_Product4_Remove_clicked(); //Removes the product from the vector of shopping cart items and erases and hides it from the page, return void

    void on_Product5_Remove_clicked(); //Removes the product from the vector of shopping cart items and erases and hides it from the page, return void

    void on_Product6_Remove_clicked(); //Removes the product from the vector of shopping cart items and erases and hides it from the page, return void

    void on_Product7_Remove_clicked(); //Removes the product from the vector of shopping cart items and erases and hides it from the page, return void

    void on_Product8_Remove_clicked(); //Removes the product from the vector of shopping cart items and erases and hides it from the page, return void

    void on_Product9_Remove_clicked(); //Removes the product from the vector of shopping cart items and erases and hides it from the page, return void

    void on_Product10_Remove_clicked();//Removes the product from the vector of shopping cart items and erases and hides it from the page, return void

   // void on_pushButton_clicked();

    void on_pushButton_CalculateTotal_clicked(); // Calculates the total price of all the prices of all the products in the shopping cart, return void

private:
    Ui::shoppingcart *ui;
};

#endif // SHOPPINGCART_H
