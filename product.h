#ifndef PRODUCT_H
#define PRODUCT_H
#include<QString>
#include <vector>
class Product
{  private :
    QString productName;
    float price;
    QString productDescription;
    int productID;
std:: vector<Product> products;
    int nextProductID = 1;
public:
    Product();
    QString getProductName();
    float getProductPrice();
    QString getProductDescription();
    int getProductID();
    void setproduct_name(const QString& name);
    void setproduct_price(float p);
    void setproduct_description(const QString& desc);
    void setproduct_ID(int id);
    void addProduct(const QString& name, float price, const QString& description);
    void displayProductDetails();
    void searchProduct(const QString& name);


};

#endif // PRODUCT_H
