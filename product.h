#ifndef PRODUCT_H
#define PRODUCT_H
#include<QString>
#include <vector>
//#include "vector_products.h"
class Product
{  private :
        QString productName;
        float price;
        QString productDescription;
        int productID;
        //int nextProductID = 1;
        QString image_link;
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
        void addProduct(const QString& name, float price, const QString& description, int id,QString link);
        //void displayProductDetails();
        bool searchProduct(const QString& name);
        void setimage_link(QString link);
        QString getimage_link();
};

#endif // PRODUCT_H
