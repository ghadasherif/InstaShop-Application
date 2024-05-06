#include "shoppingcart.h"
#include "ui_shoppingcart.h"
#include "checkout.h"
#include "products1.h"
#include "ShoppingCart_Vector.h"
#include "ShoppingCart_Stack.h"
#include "product.h"
#include "vector_products.h"
shoppingcart::shoppingcart(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shoppingcart)
{
    ui->setupUi(this);
    for (auto i=0;i<Cart_item_Vecs.size();i++)
    {
        while(!Cart_Items.empty())
        {
            products.push_back(Cart_Items.top());
            Cart_Items.pop();
        }
    }
    for(int i=0; i<Cart_item_Vecs.size();i++)
    {
            QString name_displaying=ui->Item1_name->text();
            QString nameitem=Cart_item_Vecs[i].getProductName();
            float priceitem=Cart_item_Vecs[i].getProductPrice();
            QString price_str=QString::number(priceitem);
            if(name_displaying=="")
                {
                ui->Item1_name->setText(nameitem);
                ui->item1_price->setText(price_str);
                }
                else
                {
                    QString name_displaying=ui->Item2_name->text();
                    if(name_displaying=="")
                    {
                        ui->Item2_name->setText(nameitem);
                        ui->item2_price->setText(price_str);

                    }
                    else
                    {
                        QString name_displaying=ui->Item3_name->text();
                        if(name_displaying=="")
                        {
                            ui->Item3_name->setText(nameitem);
                            ui->item3_price->setText(price_str);
                        }
                        else
                        {
                            QString name_displaying=ui->Item4_name->text();
                            if(name_displaying=="")
                            {
                                ui->Item4_name->setText(nameitem);
                                ui->item4_price->setText(price_str);
                            }
                            else
                            {
                                QString name_displaying=ui->Item5_name->text();
                                if(name_displaying=="")
                                {
                                    ui->Item5_name->setText(nameitem);
                                    ui->item5_price->setText(price_str);
                                }
                                else
                                {
                                    QString name_displaying=ui->Item6_name->text();
                                    if(name_displaying=="")
                                    {
                                        ui->Item6_name->setText(nameitem);
                                        ui->item6_price->setText(price_str);
                                    }
                                    else
                                    {
                                        QString name_displaying=ui->Item7_name->text();
                                        if(name_displaying=="")
                                        {
                                            ui->Item7_name->setText(nameitem);
                                            ui->item7_price->setText(price_str);
                                        }
                                        else
                                        {
                                            QString name_displaying=ui->Item8_name->text();
                                            if(name_displaying=="")
                                            {
                                                ui->Item8_name->setText(nameitem);
                                                ui->item8_price->setText(price_str);
                                            }
                                            else
                                            {
                                                QString name_displaying=ui->Item9_name->text();
                                                if(name_displaying=="")
                                                {
                                                    ui->Item9_name->setText(nameitem);
                                                    ui->item9_price->setText(price_str);
                                                }
                                                else
                                                {
                                                    QString name_displaying=ui->Item10_name->text();
                                                    if(name_displaying=="")
                                                    {
                                                        ui->Item10_name->setText(nameitem);
                                                        ui->item10_price->setText(price_str);
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

shoppingcart::~shoppingcart()
{
    delete ui;
}




void shoppingcart::on_pushButton_nextcart_clicked()
{
    hide();
    checkout* checkoutwindow= new checkout(this);
    checkoutwindow->show();
}


void shoppingcart::on_pushButton_backcart_clicked()
{
    hide();
    Products1* productsbuy= new Products1(this);
    productsbuy->show();
}


void shoppingcart::on_Product1_Remove_clicked()
{
    QString NAME = ui->Item1_name->text();
    for (int i=0;i<Cart_item_Vecs.size();i++)
    {
        if(Cart_item_Vecs[i].getProductName()==NAME)
        {
            Cart_item_Vecs[i].setproduct_name("");
            Cart_item_Vecs[i].setproduct_price(0.0);
            break;
        }
    }
    ui->Item1_name->setText("");
    ui->item1_price->setText("");
}


void shoppingcart::on_Product2_Remove_clicked()
{
    QString NAME = ui->Item2_name->text();
    for (int i=0;i<Cart_item_Vecs.size();i++)
    {
        if(Cart_item_Vecs[i].getProductName()==NAME)
        {
            Cart_item_Vecs[i].setproduct_name("");
            Cart_item_Vecs[i].setproduct_price(NULL);
            break;
        }
    }
    ui->Item2_name->setText("");
    ui->item2_price->setText("");
}


void shoppingcart::on_Product3_Remove_clicked()
{
    QString NAME = ui->Item3_name->text();
    for (int i=0;i<Cart_item_Vecs.size();i++)
    {
        if(Cart_item_Vecs[i].getProductName()==NAME)
        {
            Cart_item_Vecs[i].setproduct_name("");
            Cart_item_Vecs[i].setproduct_price(NULL);
            break;
        }
    }
    ui->Item3_name->setText("");
    ui->item3_price->setText("");
}


void shoppingcart::on_Product4_Remove_clicked()
{
    QString NAME = ui->Item4_name->text();
    for (int i=0;i<Cart_item_Vecs.size();i++)
    {
        if(Cart_item_Vecs[i].getProductName()==NAME)
        {
            Cart_item_Vecs[i].setproduct_name("");
            Cart_item_Vecs[i].setproduct_price(NULL);
            break;
        }
    }
    ui->Item4_name->setText("");
    ui->item4_price->setText("");
}


void shoppingcart::on_Product5_Remove_clicked()
{
    QString NAME = ui->Item5_name->text();
    for (int i=0;i<Cart_item_Vecs.size();i++)
    {
        if(Cart_item_Vecs[i].getProductName()==NAME)
        {
            Cart_item_Vecs[i].setproduct_name("");
            Cart_item_Vecs[i].setproduct_price(NULL);
            break;
        }
    }
    ui->Item1_name->setText("");
    ui->item1_price->setText("");
}


void shoppingcart::on_Product6_Remove_clicked()
{
    QString NAME = ui->Item6_name->text();
    for (int i=0;i<Cart_item_Vecs.size();i++)
    {
        if(Cart_item_Vecs[i].getProductName()==NAME)
        {
            Cart_item_Vecs[i].setproduct_name("");
            Cart_item_Vecs[i].setproduct_price(NULL);
            break;
        }
    }
    ui->Item1_name->setText("");
    ui->item1_price->setText("");

}


void shoppingcart::on_Product7_Remove_clicked()
{
    QString NAME = ui->Item7_name->text();
    for (int i=0;i<Cart_item_Vecs.size();i++)
    {
        if(Cart_item_Vecs[i].getProductName()==NAME)
        {
            Cart_item_Vecs[i].setproduct_name("");
            Cart_item_Vecs[i].setproduct_price(NULL);
            break;
        }
    }
    ui->Item1_name->setText("");
    ui->item1_price->setText("");

}


void shoppingcart::on_Product8_Remove_clicked()
{
    QString NAME = ui->Item8_name->text();
    for (int i=0;i<Cart_item_Vecs.size();i++)
    {
        if(Cart_item_Vecs[i].getProductName()==NAME)
        {
            Cart_item_Vecs[i].setproduct_name("");
            Cart_item_Vecs[i].setproduct_price(NULL);
            break;
        }
    }
    ui->Item1_name->setText("");
    ui->item1_price->setText("");
}


void shoppingcart::on_Product9_Remove_clicked()
{
    QString NAME = ui->Item9_name->text();
    for (int i=0;i<Cart_item_Vecs.size();i++)
    {
        if(Cart_item_Vecs[i].getProductName()==NAME)
        {
            Cart_item_Vecs[i].setproduct_name("");
            Cart_item_Vecs[i].setproduct_price(NULL);
            break;
        }
    }
    ui->Item1_name->setText("");
    ui->item1_price->setText("");
}


void shoppingcart::on_Product10_Remove_clicked()
{
    QString NAME = ui->Item10_name->text();
    for (int i=0;i<Cart_item_Vecs.size();i++)
    {
        if(Cart_item_Vecs[i].getProductName()==NAME)
        {
            Cart_item_Vecs[i].setproduct_name("");
            Cart_item_Vecs[i].setproduct_price(NULL);
            break;
        }
    }
    ui->Item1_name->setText("");
    ui->item1_price->setText("");
}

void shoppingcart::on_pushButton_CalculateTotal_clicked()
{
    float num=0.0;
    for (int i=0; i<Cart_item_Vecs.size();i++)
    {
        if(Cart_item_Vecs[i].getProductPrice()!=0.0 && Cart_item_Vecs[i].getProductPrice()!=NULL)
        {
            num=num+Cart_item_Vecs[i].getProductPrice();
        }
    }
    QString total_figure = QString::number(num);
    ui->total_price->setText(total_figure);
}

