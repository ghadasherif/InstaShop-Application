#include "product.h"
#include <iostream>
//#include "vector_products.h"
#include "globals.h"

//std::vector<Product> products(10);
//std::stack<Product> Cart_Items;

using namespace std;

Product::Product() {}

void Product::setproduct_name(const QString& name) {
    productName = name; }

void Product::setproduct_price(float p) {
    price = p; }

void Product::setproduct_description(const QString& desc) {
    productDescription = desc; }

void Product::setproduct_ID(int id) {
    productID = id; }
void Product::setimage_link(QString link)
{
    image_link=link;
}
QString Product::getimage_link()
{
    return image_link;
}
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


void Product::addProduct(const QString& name, float price, const QString& description,int id,QString link) {
    Product newProduct;
    newProduct.setproduct_name(name);
    newProduct.setproduct_price(price);
    newProduct.setproduct_description(description);
    newProduct.setproduct_ID(id);
    newProduct.setimage_link(link);
    // push/ add the new product in the vector or products created
    products.push_back(newProduct);
}
bool Product::searchProduct(const QString& name){
    bool found = false; // flag to check if product available
    for(size_t i=0 ; i<products.size(); i++){
        if(products[i].getProductName() == name){
            found = true;
            return found;
            //products[i].displayProductDetails(); // to display details of product that matches the name searched
            //cout << "======================" << endl;
        }
    }
    return found;
    //if(found==false){
        //cout << name.toStdString() << " could not be found!!" << endl;
   // }
}


