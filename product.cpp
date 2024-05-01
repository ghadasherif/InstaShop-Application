#include "product.h"
#include <iostream>
using namespace std;

Product::Product() {}

QString Product::getProductName()
{
    return productName;
}

float Product::getProductPrice()
{
    return price;
}

QString Product::getProductDescription()
{
    return productDescription;
}

int Product::getProductID()
{
    return productID;
}

void Product::displayProductDetails()
{
    cout << "Product name: " << getProductName().toStdString() << endl;
    cout << "Product price: " << getProductPrice() << endl;
    cout << "Product description: " << getProductDescription().toStdString() << endl;
    cout << "Product ID: " << getProductID() << endl;
}

