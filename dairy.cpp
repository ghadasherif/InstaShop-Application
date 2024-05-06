#include "dairy.h"
#include "ui_dairy.h"
#include "shoppingcart.h"
#include "ShoppingCart_Stack.h"
#include "product.h"
#include "vector_products.h"
Dairy::Dairy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dairy)
{
    ui->setupUi(this);
}

Dairy::~Dairy()
{
    delete ui;
}

void Dairy::on_pushButton_adddairyproduct_clicked()
{
    Product object;
    QString name=ui->label_dairyproductname1->text();
    object.setproduct_name(name);
    QString price=ui->label_dairyproductprice1->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_dairyproductdesc1->text();
    object.setproduct_description(description);
    QString link=ui->label_dairyproductimagelink1->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void Dairy::on_pushButton_viewdairyproduct_clicked()
{
    hide();
    shoppingcart* cart= new shoppingcart(this);
    cart->show();
}


void Dairy::on_pushButton_Searchdairy_clicked()
{
    QString name_searching = ui->lineEdit_searchdairy->text();
    Product Objects;
    bool found_item = Objects.searchProduct(name_searching);
    if(found_item==false)
    {
        ui->label_errormessagedairy->setVisible(true);
    }
    else
    {
        for(int i=0; i<products.size();i++)
        {
            QString name=ui->label_dairyproductname1->text();
            if(name_searching==products[i].getProductName())
            {
                if (name == "")
                {
                    ui->label_dairyproductname1->setText(products[i].getProductName());
                    ui->label_dairyproductprice1->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                    ui->label_dairyproductdesc1->setText(products[i].getProductDescription());
                    ui->label_dairyproductimagelink1->setText(products[i].getimage_link());
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
                    QString name=ui->label_dairyproductname2->text();
                    if(name=="")
                    {
                        ui->label_dairyproductname2->setText(products[i].getProductName());
                        ui->label_dairyproductprice2->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                        ui->label_dairyproductdesc2->setText(products[i].getProductDescription());
                        ui->label_dairyproductimagelink2->setText(products[i].getimage_link());

                    }
                    else
                    {
                        QString name=ui->label_dairyproductname3->text();
                        if(name=="")
                        {
                            ui->label_dairyproductname3->setText(products[i].getProductName());
                            ui->label_dairyproductprice3->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                            ui->label_dairyproductdesc3->setText(products[i].getProductDescription());
                            ui->label_dairyproductimagelink3->setText(products[i].getimage_link());

                        }
                        else
                        {
                            QString name=ui->label_dairyproductname4->text();
                            if(name=="")
                            {
                                ui->label_dairyproductname4->setText(products[i].getProductName());
                                ui->label_dairyproductprice4->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                                ui->label_dairyproductdesc4->setText(products[i].getProductDescription());
                                ui->label_dairyproductimagelink4->setText(products[i].getimage_link());

                            }
                            else
                            {
                                QString name=ui->label_dairyproductname5->text();
                                if(name=="")
                                {
                                    ui->label_dairyproductname5->setText(products[i].getProductName());
                                    ui->label_dairyproductprice5->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                                    ui->label_dairyproductdesc5->setText(products[i].getProductDescription());
                                    ui->label_dairyproductimagelink5->setText(products[i].getimage_link());

                                }
                                else
                                {
                                    QString name=ui->label_dairyproductname6->text();
                                    if(name=="")
                                    {
                                        ui->label_dairyproductname6->setText(products[i].getProductName());
                                        ui->label_dairyproductprice6->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                                        ui->label_dairyproductdesc6->setText(products[i].getProductDescription());
                                        ui->label_dairyproductimagelink6->setText(products[i].getimage_link());

                                    }
                                    else
                                    {
                                        QString name=ui->label_dairyproductname7->text();
                                        if(name=="")
                                        {
                                            ui->label_dairyproductname7->setText(products[i].getProductName());
                                            ui->label_dairyproductprice7->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                                            ui->label_dairyproductdesc7->setText(products[i].getProductDescription());
                                            ui->label_dairyproductimagelink7->setText(products[i].getimage_link());

                                        }
                                        else
                                        {
                                            QString name=ui->label_dairyproductname8->text();
                                            if(name=="")
                                            {
                                                ui->label_dairyproductname8->setText(products[i].getProductName());
                                                ui->label_dairyproductprice8->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                                                ui->label_dairyproductdesc8->setText(products[i].getProductDescription());
                                                ui->label_dairyproductimagelink8->setText(products[i].getimage_link());

                                            }
                                            else
                                            {
                                                QString name=ui->label_dairyproductname9->text();
                                                if(name=="")
                                                {
                                                    ui->label_dairyproductname9->setText(products[i].getProductName());
                                                    ui->label_dairyproductprice9->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                                                    ui->label_dairyproductdesc9->setText(products[i].getProductDescription());
                                                    ui->label_dairyproductimagelink9->setText(products[i].getimage_link());

                                                }
                                                else
                                                {
                                                    QString name=ui->label_dairyproductname10->text();
                                                    if(name=="")
                                                    {
                                                        ui->label_dairyproductname10->setText(products[i].getProductName());
                                                        ui->label_dairyproductprice10->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                                                        ui->label_dairyproductdesc10->setText(products[i].getProductDescription());
                                                        ui->label_dairyproductimagelink10->setText(products[i].getimage_link());

                                                        ;
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


void Dairy::on_pushButton_adddairyproduct_2_clicked()
{
    Product object;
    QString name=ui->label_dairyproductname2->text();
    object.setproduct_name(name);
    QString price=ui->label_dairyproductprice2->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_dairyproductdesc2->text();
    object.setproduct_description(description);
    QString link=ui->label_dairyproductimagelink2->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void Dairy::on_pushButton_adddairyproduct_3_clicked()
{
    Product object;
    QString name=ui->label_dairyproductname3->text();
    object.setproduct_name(name);
    QString price=ui->label_dairyproductprice3->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_dairyproductdesc3->text();
    object.setproduct_description(description);
    QString link=ui->label_dairyproductimagelink3->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void Dairy::on_pushButton_adddairyproduct_4_clicked()
{
    Product object;
    QString name=ui->label_dairyproductname4->text();
    object.setproduct_name(name);
    QString price=ui->label_dairyproductprice4->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_dairyproductdesc4->text();
    object.setproduct_description(description);
    QString link=ui->label_dairyproductimagelink4->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void Dairy::on_pushButton_adddairyproduct_5_clicked()
{
    Product object;
    QString name=ui->label_dairyproductname5->text();
    object.setproduct_name(name);
    QString price=ui->label_dairyproductprice5->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_dairyproductdesc5->text();
    object.setproduct_description(description);
    QString link=ui->label_dairyproductimagelink5->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void Dairy::on_pushButton_adddairyproduct_6_clicked()
{
    Product object;
    QString name=ui->label_dairyproductname6->text();
    object.setproduct_name(name);
    QString price=ui->label_dairyproductprice6->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_dairyproductdesc6->text();
    object.setproduct_description(description);
    QString link=ui->label_dairyproductimagelink6->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void Dairy::on_pushButton_adddairyproduct_7_clicked()
{
    Product object;
    QString name=ui->label_dairyproductname7->text();
    object.setproduct_name(name);
    QString price=ui->label_dairyproductprice7->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_dairyproductdesc7->text();
    object.setproduct_description(description);
    QString link=ui->label_dairyproductimagelink7->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void Dairy::on_pushButton_adddairyproduct_8_clicked()
{
    Product object;
    QString name=ui->label_dairyproductname8->text();
    object.setproduct_name(name);
    QString price=ui->label_dairyproductprice8->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_dairyproductdesc8->text();
    object.setproduct_description(description);
    QString link=ui->label_dairyproductimagelink8->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void Dairy::on_pushButton_adddairyproduct_9_clicked()
{
    Product object;
    QString name=ui->label_dairyproductname9->text();
    object.setproduct_name(name);
    QString price=ui->label_dairyproductprice9->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_dairyproductdesc9->text();
    object.setproduct_description(description);
    QString link=ui->label_dairyproductimagelink9->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void Dairy::on_pushButton_adddairyproduct_10_clicked()
{
    Product object;
    QString name=ui->label_dairyproductname10->text();
    object.setproduct_name(name);
    QString price=ui->label_dairyproductprice10->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_dairyproductdesc10->text();
    object.setproduct_description(description);
    QString link=ui->label_dairyproductimagelink10->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}

