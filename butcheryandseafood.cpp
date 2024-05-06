#include "butcheryandseafood.h"
#include "ui_butcheryandseafood.h"
#include "shoppingcart.h"
#include "ShoppingCart_Stack.h"
#include "product.h"
#include "vector_products.h"

butcheryandseafood::butcheryandseafood(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::butcheryandseafood)
{
    ui->setupUi(this);
}

butcheryandseafood::~butcheryandseafood()
{
    delete ui;
}

void butcheryandseafood::on_pushButton_addbutcheryproduct_clicked()
{
    Product object;
    QString name=ui->label_productnamebutchery->text();
    object.setproduct_name(name);
    QString price=ui->label_butcheryproductprice->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_butcheryproductdesc->text();
    object.setproduct_description(description);
    QString link=ui->label_butcheryproductimagelink1->text();
    object.setimage_link(link);
    Cart_Items.push(object);

}


void butcheryandseafood::on_pushButton_viewbutcheryproduct_clicked()
{
    hide();
    shoppingcart* cart= new shoppingcart(this);
    cart->show();
}


void butcheryandseafood::on_pushButton_searchbutchery_clicked()
{
    QString name_searching = ui->lineEdit_butcherysearch->text();
    Product Objects;
    bool found_item = Objects.searchProduct(name_searching);
    if(found_item==false)
    {
        ui->label_errormessagebutchery->setVisible(true);
    }
    else
    {
        for(int i=0; i<products.size();i++)
        {
            QString name=ui->label_productnamebutchery->text();
            if(name_searching==products[i].getProductName())
            {
                if (name == "")
                {
                    ui->label_productnamebutchery->setText(products[i].getProductName());
                    ui->label_butcheryproductprice->setText(QString::number(products[i].getProductPrice())); // Convert float to QString
                    ui->label_butcheryproductdesc->setText(products[i].getProductDescription());
                    ui->label_butcheryproductimagelink1->setText(products[i].getimage_link());
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
                    QString name=ui->label_productnamebutchery_2->text();
                    if(name=="")
                    {
                        ui->label_productnamebutchery_2->setText(products[i].getProductName());
                        ui->label_butcheryproductprice_2->setText(QString::number(products[i].getProductPrice()));
                        ui->label_butcheryproductdesc_2->setText(products[i].getProductDescription());
                        ui->label_butcheryproductimagelink_2->setText(products[i].getimage_link());
                    }
                    else
                    {
                        QString name=ui->label_productnamebutchery3->text();
                        if(name=="")
                        {
                            ui->label_productnamebutchery3->setText(products[i].getProductName());
                            ui->label_butcheryproductprice_3->setText(QString::number(products[i].getProductPrice()));
                            ui->label_butcheryproductdesc_3->setText(products[i].getProductDescription());
                            ui->label_butcheryproductimagelink_3->setText(products[i].getimage_link());
                        }
                        else
                        {
                            QString name=ui->label_productnamebutchery_4->text();
                            if(name=="")
                            {
                                ui->label_productnamebutchery_4->setText(products[i].getProductName());
                                ui->label_butcheryproductprice_4->setText(QString::number(products[i].getProductPrice()));
                                ui->label_butcheryproductdesc_4->setText(products[i].getProductDescription());
                                ui->label_butcheryproductimagelink_4->setText(products[i].getimage_link());
                            }
                            else
                            {
                                QString name=ui->label_productnamebutchery_5->text();
                                if(name=="")
                                {
                                    ui->label_productnamebutchery_5->setText(products[i].getProductName());
                                    ui->label_butcheryproductprice_5->setText(QString::number(products[i].getProductPrice()));
                                    ui->label_butcheryproductdesc_5->setText(products[i].getProductDescription());
                                    ui->label_butcheryproductimagelink_5->setText(products[i].getimage_link());
                                }
                                else
                                {
                                    QString name=ui->label_productnamebutchery_6->text();
                                    if(name=="")
                                    {
                                        ui->label_productnamebutchery_6->setText(products[i].getProductName());
                                        ui->label_butcheryproductprice_6->setText(QString::number(products[i].getProductPrice()));
                                        ui->label_butcheryproductdesc_6->setText(products[i].getProductDescription());
                                        ui->label_butcheryproductimagelink_6->setText(products[i].getimage_link());
                                    }
                                    else
                                    {
                                        QString name=ui->label_productnamebutchery_7->text();
                                        if(name=="")
                                        {
                                            ui->label_productnamebutchery_7->setText(products[i].getProductName());
                                            ui->label_butcheryproductprice_7->setText(QString::number(products[i].getProductPrice()));
                                            ui->label_butcheryproductdesc_7->setText(products[i].getProductDescription());
                                            ui->label_butcheryproductimagelink_7->setText(products[i].getimage_link());
                                        }
                                        else
                                        {
                                            QString name=ui->label_productnamebutchery_8->text();
                                            if(name=="")
                                            {
                                                ui->label_productnamebutchery_8->setText(products[i].getProductName());
                                                ui->label_butcheryproductprice_8->setText(QString::number(products[i].getProductPrice()));
                                                ui->label_butcheryproductdesc_8->setText(products[i].getProductDescription());
                                                ui->label_butcheryproductimagelink_8->setText(products[i].getimage_link());
                                            }
                                            else
                                            {
                                                QString name=ui->label_productnamebutchery_9->text();
                                                if(name=="")
                                                {
                                                    ui->label_productnamebutchery_9->setText(products[i].getProductName());
                                                    ui->label_butcheryproductprice_9->setText(QString::number(products[i].getProductPrice()));
                                                    ui->label_butcheryproductdesc_9->setText(products[i].getProductDescription());
                                                    ui->label_butcheryproductimagelink_9->setText(products[i].getimage_link());
                                                }
                                                else
                                                {
                                                    QString name=ui->label_productnamebutchery_10->text();
                                                    if(name=="")
                                                    {

                                                        ui->label_productnamebutchery_10->setText(products[i].getProductName());
                                                        ui->label_butcheryproductprice_10->setText(QString::number(products[i].getProductPrice()));
                                                        ui->label_butcheryproductdesc_10->setText(products[i].getProductDescription());
                                                        ui->label_butcheryproductimagelink_10->setText(products[i].getimage_link());
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




void butcheryandseafood::on_pushButton_addbutcheryproduct_2_clicked()
{
    Product object;
    QString name=ui->label_productnamebutchery_2->text();
    object.setproduct_name(name);
    QString price=ui->label_butcheryproductprice_2->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_butcheryproductdesc_2->text();
    object.setproduct_description(description);
    QString link=ui->label_butcheryproductimagelink_2->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void butcheryandseafood::on_pushButton_addbutcheryproduct_3_clicked()
{
    Product object;
    QString name=ui->label_productnamebutchery3->text();
    object.setproduct_name(name);
    QString price=ui->label_butcheryproductprice_3->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_butcheryproductdesc_3->text();
    object.setproduct_description(description);
    QString link=ui->label_butcheryproductimagelink_3->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void butcheryandseafood::on_pushButton_addbutcheryproduct_4_clicked()
{
    Product object;
    QString name=ui->label_productnamebutchery_4->text();
    object.setproduct_name(name);
    QString price=ui->label_butcheryproductprice_4->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_butcheryproductdesc_4->text();
    object.setproduct_description(description);
    QString link=ui->label_butcheryproductimagelink_4->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void butcheryandseafood::on_pushButton_addbutcheryproduct_5_clicked()
{
    Product object;
    QString name=ui->label_productnamebutchery_5->text();
    object.setproduct_name(name);
    QString price=ui->label_butcheryproductprice_5->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_butcheryproductdesc_5->text();
    object.setproduct_description(description);
    QString link=ui->label_butcheryproductimagelink_5->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void butcheryandseafood::on_pushButton_addbutcheryproduct_6_clicked()
{
    Product object;
    QString name=ui->label_productnamebutchery_6->text();
    object.setproduct_name(name);
    QString price=ui->label_butcheryproductprice_6->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_butcheryproductdesc_6->text();
    object.setproduct_description(description);
    QString link=ui->label_butcheryproductimagelink_6->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void butcheryandseafood::on_pushButton_addbutcheryproduct_7_clicked()
{
    Product object;
    QString name=ui->label_productnamebutchery_7->text();
    object.setproduct_name(name);
    QString price=ui->label_butcheryproductprice_7->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_butcheryproductdesc_7->text();
    object.setproduct_description(description);
    QString link=ui->label_butcheryproductimagelink_7->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void butcheryandseafood::on_pushButton_addbutcheryproduct_8_clicked()
{
    Product object;
    QString name=ui->label_productnamebutchery_7->text();
    object.setproduct_name(name);
    QString price=ui->label_butcheryproductprice_7->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_butcheryproductdesc_7->text();
    object.setproduct_description(description);
    QString link=ui->label_butcheryproductimagelink_7->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void butcheryandseafood::on_pushButton_addbutcheryproduct_9_clicked()
{
    Product object;
    QString name=ui->label_productnamebutchery_9->text();
    object.setproduct_name(name);
    QString price=ui->label_butcheryproductprice_9->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_butcheryproductdesc_9->text();
    object.setproduct_description(description);
    QString link=ui->label_butcheryproductimagelink_9->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}


void butcheryandseafood::on_pushButton_addbutcheryproduct_10_clicked()
{
    Product object;
    QString name=ui->label_productnamebutchery_10->text();
    object.setproduct_name(name);
    QString price=ui->label_butcheryproductprice_10->text();
    float pricey=price.toFloat();
    object.setproduct_price(pricey);
    QString description=ui->label_butcheryproductdesc_10->text();
    object.setproduct_description(description);
    QString link=ui->label_butcheryproductimagelink_10->text();
    object.setimage_link(link);
    Cart_Items.push(object);
}

