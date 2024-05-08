#include "fruitsandvegetables.h"
#include "ui_fruitsandvegetables.h"
#include "shoppingcart.h"
//#include "ShoppingCart_Stack.h"
#include "product.h"
//#include "vector_products.h"
#include "globals.h"

//std::vector<Product> products(10);
//std::stack<Product> Cart_Items;


FruitsandVegetables::FruitsandVegetables(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FruitsandVegetables)
{
    ui->setupUi(this);
}

FruitsandVegetables::~FruitsandVegetables()
{
    delete ui;
}

void FruitsandVegetables::on_pushButton_addfruitsproduct_clicked()
{
    Product object;
    QString name=ui->label_productfruitsname->text();
    object.setproduct_name(name);
    QString price=ui->label_fruitspriceproduct->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_fruitsproductdesc->text();
    object.setproduct_description(description);
    QString link=ui->label_fruitsproductimagelink->text();
    object.setimage_link(link);
    Cart_Items.push(object);

}


void FruitsandVegetables::on_pushButton_viewfruitsproduct_clicked()
{
    hide();
    shoppingcart* cart= new shoppingcart(this);
    cart->show();
}


void FruitsandVegetables::on_pushButton_searchfruits_clicked()
{
    QString name_searching = ui->lineEdit_searchfruits->text();
    Product Objects;
    bool found_item = Objects.searchProduct(name_searching);
    if(found_item==false)
    {
        ui->label_errormessagefruits->setVisible(true);
    }
    else
    {
        for(int i=0; i<products.size();i++)
        {
            QString name=ui->label_productfruitsname->text();
            if(name_searching==products[i].getProductName())
            {
                if (name == "")
                {
                    ui->label_productfruitsname->setText(products[i].getProductName());
                    ui->label_fruitspriceproduct->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                    ui->label_fruitsproductdesc->setText(products[i].getProductDescription());
                    ui->label_fruitsproductimagelink->setText(products[i].getimage_link());
                }

                //                if(name=="")
                //                {
                //                    ui->label_bakeriesproduct1name->setText(products[i].getProductName());
                //                    ui->label_bakeriesproduct1price->setText(products[i].getProductPrice());
                //                    ui->label_bakeriesproduct1desc->setText(products[i].getProductDescription());
                //                    ui->label_bakeriesproduct1imagelink->setText(products[i].getimage_link());
                //                }
                else
                {
                    QString name=ui->label_productfruitsname_2->text();
                    if(name=="")
                    {
                        ui->label_productfruitsname_2->setText(products[i].getProductName());
                        ui->label_fruitspriceproduct_2->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                        ui->label_fruitsproductdesc_2->setText(products[i].getProductDescription());
                        ui->label_fruitsproductimagelink_2->setText(products[i].getimage_link());

                    }
                    else
                    {
                        QString name=ui->label_productfruitsname_3->text();
                        if(name=="")
                        {
                            ui->label_productfruitsname_3->setText(products[i].getProductName());
                            ui->label_fruitspriceproduct_3->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                            ui->label_fruitsproductdesc_3->setText(products[i].getProductDescription());
                            ui->label_fruitsproductimagelink_3->setText(products[i].getimage_link());

                        }
                        else
                        {
                            QString name=ui->label_productfruitsname_4->text();
                            if(name=="")
                            {
                                ui->label_productfruitsname_4->setText(products[i].getProductName());
                                ui->label_fruitspriceproduct_4->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                                ui->label_fruitsproductdesc_4->setText(products[i].getProductDescription());
                                ui->label_fruitsproductimagelink_4->setText(products[i].getimage_link());

                            }
                            else
                            {
                                QString name=ui->label_productfruitsname_5->text();
                                if(name=="")
                                {
                                    ui->label_productfruitsname_5->setText(products[i].getProductName());
                                    ui->label_fruitspriceproduct_5->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                                    ui->label_fruitsproductdesc_5->setText(products[i].getProductDescription());
                                    ui->label_fruitsproductimagelink_5->setText(products[i].getimage_link());

                                }
                                else
                                {
                                    QString name=ui->label_productfruitsname_6->text();
                                    if(name=="")
                                    {
                                        ui->label_productfruitsname_6->setText(products[i].getProductName());
                                        ui->label_fruitspriceproduct_6->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                                        ui->label_fruitsproductdesc_6->setText(products[i].getProductDescription());
                                        ui->label_fruitsproductimagelink_6->setText(products[i].getimage_link());

                                    }
                                    else
                                    {
                                        QString name=ui->label_productfruitsname_7->text();
                                        if(name=="")
                                        {
                                            ui->label_productfruitsname_7->setText(products[i].getProductName());
                                            ui->label_fruitspriceproduct_7->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                                            ui->label_fruitsproductdesc_7->setText(products[i].getProductDescription());
                                            ui->label_fruitsproductimagelink_7->setText(products[i].getimage_link());

                                        }
                                        else
                                        {
                                            QString name=ui->label_productfruitsname_8->text();
                                            if(name=="")
                                            {
                                                ui->label_productfruitsname_8->setText(products[i].getProductName());
                                                ui->label_fruitspriceproduct_8->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                                                ui->label_fruitsproductdesc_8->setText(products[i].getProductDescription());
                                                ui->label_fruitsproductimagelink_8->setText(products[i].getimage_link());

                                            }
                                            else
                                            {
                                                QString name=ui->label_productfruitsname_9->text();
                                                if(name=="")
                                                {
                                                    ui->label_productfruitsname_9->setText(products[i].getProductName());
                                                    ui->label_fruitspriceproduct_9->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                                                    ui->label_fruitsproductdesc_9->setText(products[i].getProductDescription());
                                                    ui->label_fruitsproductimagelink_9->setText(products[i].getimage_link());

                                                }
                                                else
                                                {
                                                    QString name=ui->label_productfruitsname_10->text();
                                                    if(name=="")
                                                    {
                                                        ui->label_productfruitsname_10->setText(products[i].getProductName());
                                                        ui->label_fruitspriceproduct_10->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                                                        ui->label_fruitsproductdesc_10->setText(products[i].getProductDescription());
                                                        ui->label_fruitsproductimagelink_10->setText(products[i].getimage_link());

                                                    }
                                                }
                                            }

                                        }
                                    }
                                }
                            }
                        }
                    }


                }
            }
        }
    }
}



void FruitsandVegetables::on_pushButton_addfruitsproduct_2_clicked()
{
    Product object;
    QString name=ui->label_productfruitsname_2->text();
    object.setproduct_name(name);
    QString price=ui->label_fruitspriceproduct_2->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_fruitsproductdesc_2->text();
    object.setproduct_description(description);
    QString link=ui->label_fruitsproductimagelink_2->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void FruitsandVegetables::on_pushButton_addfruitsproduct_3_clicked()
{
    Product object;
    QString name=ui->label_productfruitsname_3->text();
    object.setproduct_name(name);
    QString price=ui->label_fruitspriceproduct_3->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_fruitsproductdesc_3->text();
    object.setproduct_description(description);
    QString link=ui->label_fruitsproductimagelink_3->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void FruitsandVegetables::on_pushButton_addfruitsproduct_4_clicked()
{
    Product object;
    QString name=ui->label_productfruitsname_4->text();
    object.setproduct_name(name);
    QString price=ui->label_fruitspriceproduct_4->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_fruitsproductdesc_4->text();
    object.setproduct_description(description);
    QString link=ui->label_fruitsproductimagelink_4->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void FruitsandVegetables::on_pushButton_addfruitsproduct_5_clicked()
{
    Product object;
    QString name=ui->label_productfruitsname_5->text();
    object.setproduct_name(name);
    QString price=ui->label_fruitspriceproduct_5->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_fruitsproductdesc_5->text();
    object.setproduct_description(description);
    QString link=ui->label_fruitsproductimagelink_5->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void FruitsandVegetables::on_pushButton_addfruitsproduct_6_clicked()
{
    Product object;
    QString name=ui->label_productfruitsname_6->text();
    object.setproduct_name(name);
    QString price=ui->label_fruitspriceproduct_6->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_fruitsproductdesc_6->text();
    object.setproduct_description(description);
    QString link=ui->label_fruitsproductimagelink_6->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void FruitsandVegetables::on_pushButton_addfruitsproduct_7_clicked()
{
    Product object;
    QString name=ui->label_productfruitsname_7->text();
    object.setproduct_name(name);
    QString price=ui->label_fruitspriceproduct_7->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_fruitsproductdesc_7->text();
    object.setproduct_description(description);
    QString link=ui->label_fruitsproductimagelink_7->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void FruitsandVegetables::on_pushButton_addfruitsproduct_8_clicked()
{
    Product object;
    QString name=ui->label_productfruitsname_8->text();
    object.setproduct_name(name);
    QString price=ui->label_fruitspriceproduct_8->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_fruitsproductdesc_8->text();
    object.setproduct_description(description);
    QString link=ui->label_fruitsproductimagelink_8->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void FruitsandVegetables::on_pushButton_addfruitsproduct_9_clicked()
{
    Product object;
    QString name=ui->label_productfruitsname_9->text();
    object.setproduct_name(name);
    QString price=ui->label_fruitspriceproduct_9->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_fruitsproductdesc_9->text();
    object.setproduct_description(description);
    QString link=ui->label_fruitsproductimagelink_9->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void FruitsandVegetables::on_pushButton_addfruitsproduct_10_clicked()
{
    Product object;
    QString name=ui->label_productfruitsname_10->text();
    object.setproduct_name(name);
    QString price=ui->label_fruitspriceproduct_10->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_fruitsproductdesc_10->text();
    object.setproduct_description(description);
    QString link=ui->label_fruitsproductimagelink_10->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}

