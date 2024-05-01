#ifndef PRODUCT_H
#define PRODUCT_H
#include<QString>
class Product
{  private :
    QString productName;
    float price;
    QString productDescription;
    int productID;
public:
    Product();
    QString getProductName();
    float getProductPrice();
    QString getProductDescription();
    int getProductID();
    void displayProductDetails();

};

#endif // PRODUCT_H
