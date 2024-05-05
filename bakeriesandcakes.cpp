#include "bakeriesandcakes.h"
#include "ui_bakeriesandcakes.h"
#include "shoppingcart.h"
#include "ShoppingCart_Stack.h"
#include "product.h"
BakeriesandCakes::BakeriesandCakes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BakeriesandCakes)
{
    ui->setupUi(this);
    ui->label_error_notfound->setVisible(false);
}

BakeriesandCakes::~BakeriesandCakes()
{
    delete ui;
}




void BakeriesandCakes::on_pushButton_viewbakeriesproduct_clicked()
{
    hide();
    shoppingcart* cart= new shoppingcart(this);
    cart->show();
}


void BakeriesandCakes::on_pushButton_addbakeryproduct1_clicked()
{
    Product object;
    QString name=ui->label_bakeriesproduct1name->text();
    object.setproduct_name(name);
    QString price=ui->label_bakeriesproduct1price->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_bakeriesproduct1desc->text();
    object.setproduct_description(description);
    QString link=ui->label_bakeriesproduct1imagelink->text();
    object.setimage_link(link);
    Cart_Items.push(object);

}


void BakeriesandCakes::on_pushButton_addbakeryproduct2_clicked()
{
    Product object;
    QString name=ui->label_bakeriesproduct2name->text();
    object.setproduct_name(name);
    QString price=ui->label_bakeriesproduct2price->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_bakeriesproduct2desc->text();
    object.setproduct_description(description);
    QString link=ui->label_bakeriesproduct2imagelink->text();
    object.setimage_link(link);
    Cart_Items.push(object);

}


void BakeriesandCakes::on_pushButton_addbakeryproduct3_clicked()
{
    Product object;
    QString name=ui->label_bakeriesproduct3name->text();
    object.setproduct_name(name);
    QString price=ui->label_bakeriesproduct3price->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_bakeriesproduct3desc->text();
    object.setproduct_description(description);
    QString link=ui->label_bakeriesproduct3imagelink->text();
    object.setimage_link(link);
    Cart_Items.push(object);

}


void BakeriesandCakes::on_pushButton_addbakeryproduct4_clicked()
{
    Product object;
    QString name=ui->label_bakeriesproduct4name->text();
    object.setproduct_name(name);
    QString price=ui->label_bakeriesproduct4price->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_bakeriesproduct4desc->text();
    object.setproduct_description(description);
    QString link=ui->label_bakeriesproduct4imagelink->text();
    object.setimage_link(link);
    Cart_Items.push(object);

}


void BakeriesandCakes::on_pushButton_addbakeryproduct5_clicked()
{
    Product object;
    QString name=ui->label_bakeriesproduct5name->text();
    object.setproduct_name(name);
    QString price=ui->label_bakeriesproduct5price->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_bakeriesproduct5desc->text();
    object.setproduct_description(description);
    QString link=ui->label_bakeriesproduct5imagelink->text();
    object.setimage_link(link);
    Cart_Items.push(object);

}


void BakeriesandCakes::on_pushButton_addbakeryproduct6_clicked()
{
    Product object;
    QString name=ui->label_bakeriesproduct6name->text();
    object.setproduct_name(name);
    QString price=ui->label_bakeriesproduct6price->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_bakeriesproduct6desc->text();
    object.setproduct_description(description);
    QString link=ui->label_bakeriesproduct6imagelink->text();
    object.setimage_link(link);
    Cart_Items.push(object);

}


void BakeriesandCakes::on_pushButton_addbakeryproduct7_clicked()
{
    Product object;
    QString name=ui->label_bakeriesproduct7name->text();
    object.setproduct_name(name);
    QString price=ui->label_bakeriesproduct7price->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_bakeriesproduct7desc->text();
    object.setproduct_description(description);
    QString link=ui->label_bakeriesproduct7imagelink->text();
    object.setimage_link(link);
    Cart_Items.push(object);

}


void BakeriesandCakes::on_pushButton_addbakeryproduct8_clicked()
{
    Product object;
    QString name=ui->label_bakeriesproduct8name->text();
    object.setproduct_name(name);
    QString price=ui->label_bakeriesproduct8price->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_bakeriesproduct8desc->text();
    object.setproduct_description(description);
    QString link=ui->label_bakeriesproduct8imagelink->text();
    object.setimage_link(link);
    Cart_Items.push(object);

}


void BakeriesandCakes::on_pushButton_addbakeryproduct9_clicked()
{
    Product object;
    QString name=ui->label_bakeriesproduct9name->text();
    object.setproduct_name(name);
    QString price=ui->label_bakeriesproduct9price->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_bakeriesproduct9desc->text();
    object.setproduct_description(description);
    QString link=ui->label_bakeriesproduct9imagelink->text();
    object.setimage_link(link);
    Cart_Items.push(object);

}


void BakeriesandCakes::on_pushButton_addbakeryproduct10_clicked()
{
    Product object;
    QString name=ui->label_bakeriesproduct10name->text();
    object.setproduct_name(name);
    QString price=ui->label_bakeriesproduct10price->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_bakeriesproduct10desc->text();
    object.setproduct_description(description);
    QString link=ui->label_bakeriesproduct10imagelink->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void BakeriesandCakes::on_pushButton_Search_clicked()
{
    QString name_searching = ui->lineEdit_itemsearchbakeries->text();
    Product Objects;
    bool found_item = Objects.searchProduct(name_searching);
    if(found_item==false)
    {
        ui->label_error_notfound->setVisible(true);
    }
    else
    {
        for(int i=0; i<products.size();i++)
        {
            QString name=ui->label_bakeriesproduct1name->text();
            if(name_searching==products[i].getProductName())
            {
                if(name!="")
                {
                    ui->label_bakeriesproduct1name->setText(products[i].getProductName());
                    ui->label_bakeriesproduct1price->setText(products[i].getProductPrice());
                    ui->label_bakeriesproduct1desc->setText(products[i].getProductDescription());
                    ui->label_bakeriesproduct1imagelink->setText(products[i].getimage_link());
                }
                else
                {
                    QString name=ui->label_bakeriesproduct2name->text();
                    if(name!="")
                    {
                        ui->label_bakeriesproduct2name->setText(products[i].getProductName());
                        ui->label_bakeriesproduct2price->setText(products[i].getProductPrice());
                        ui->label_bakeriesproduct2desc->setText(products[i].getProductDescription());
                        ui->label_bakeriesproduct2imagelink->setText(products[i].getimage_link());
                    }
                    else
                    {
                        QString name=ui->label_bakeriesproduct3name->text();
                        if(name!="")
                        {
                            ui->label_bakeriesproduct3name->setText(products[i].getProductName());
                            ui->label_bakeriesproduct3price->setText(products[i].getProductPrice());
                            ui->label_bakeriesproduct3desc->setText(products[i].getProductDescription());
                            ui->label_bakeriesproduct3imagelink->setText(products[i].getimage_link());
                        }
                        else
                        {
                            QString name=ui->label_bakeriesproduct4name->text();
                            if(name!="")
                            {
                                ui->label_bakeriesproduct4name->setText(products[i].getProductName());
                                ui->label_bakeriesproduct4price->setText(products[i].getProductPrice());
                                ui->label_bakeriesproduct4desc->setText(products[i].getProductDescription());
                                ui->label_bakeriesproduct4imagelink->setText(products[i].getimage_link());
                            }
                            else
                            {
                                QString name=ui->label_bakeriesproduct5name->text();
                                if(name!="")
                                {
                                    ui->label_bakeriesproduct5name->setText(products[i].getProductName());
                                    ui->label_bakeriesproduct5price->setText(products[i].getProductPrice());
                                    ui->label_bakeriesproduct5desc->setText(products[i].getProductDescription());
                                    ui->label_bakeriesproduct5imagelink->setText(products[i].getimage_link());
                                }
                                else
                                {
                                    QString name=ui->label_bakeriesproduct6name->text();
                                    if(name!="")
                                    {
                                        ui->label_bakeriesproduct6name->setText(products[i].getProductName());
                                        ui->label_bakeriesproduct6price->setText(products[i].getProductPrice());
                                        ui->label_bakeriesproduct6desc->setText(products[i].getProductDescription());
                                        ui->label_bakeriesproduct6imagelink->setText(products[i].getimage_link());
                                    }
                                    else
                                    {
                                        QString name=ui->label_bakeriesproduct7name->text();
                                        if(name!="")
                                        {
                                            ui->label_bakeriesproduct7name->setText(products[i].getProductName());
                                            ui->label_bakeriesproduct7price->setText(products[i].getProductPrice());
                                            ui->label_bakeriesproduct7desc->setText(products[i].getProductDescription());
                                            ui->label_bakeriesproduct7imagelink->setText(products[i].getimage_link());
                                        }
                                        else
                                        {
                                            QString name=ui->label_bakeriesproduct8name->text();
                                            if(name!="")
                                            {
                                                ui->label_bakeriesproduct8name->setText(products[i].getProductName());
                                                ui->label_bakeriesproduct8price->setText(products[i].getProductPrice());
                                                ui->label_bakeriesproduct8desc->setText(products[i].getProductDescription());
                                                ui->label_bakeriesproduct8imagelink->setText(products[i].getimage_link());
                                            }
                                            else
                                            {
                                                QString name=ui->label_bakeriesproduct9name->text();
                                                if(name!="")
                                                {
                                                    ui->label_bakeriesproduct9name->setText(products[i].getProductName());
                                                    ui->label_bakeriesproduct9price->setText(products[i].getProductPrice());
                                                    ui->label_bakeriesproduct9desc->setText(products[i].getProductDescription());
                                                    ui->label_bakeriesproduct9imagelink->setText(products[i].getimage_link());
                                                }
                                                else
                                                {
                                                    QString name=ui->label_bakeriesproduct10name->text();
                                                    if(name!="")
                                                    {
                                                        ui->label_bakeriesproduct10name->setText(products[i].getProductName());
                                                        ui->label_bakeriesproduct10price->setText(products[i].getProductPrice());
                                                        ui->label_bakeriesproduct10desc->setText(products[i].getProductDescription());
                                                        ui->label_bakeriesproduct10imagelink->setText(products[i].getimage_link());
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

