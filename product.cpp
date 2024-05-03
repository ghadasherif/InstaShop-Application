#include "product.h"
#include <iostream>
using namespace std;

Product::Product() {}

void setproduct_name(const QString& name) {
    productName = name; }

void setproduct_price(float p) {
    price = p; }

void setproduct_description(const QString& desc) {
    productDescription = desc; }

void setproduct_ID(int id) {
    productID = id; }

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

void Product::addProduct(const QString& name, float price, const QString& description) {
    Product newProduct;
    newProduct.setProductName(name);
    newProduct.setProductPrice(price);
    newProduct.setProductDescription(description);
    newProduct.setProductID(nextProductID++);

    // push/ add the new product in the vector or products created
    products.push_back(newProduct);
}
