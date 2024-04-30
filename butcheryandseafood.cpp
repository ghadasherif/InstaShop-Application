#include "butcheryandseafood.h"
#include "ui_butcheryandseafood.h"
#include "shoppingcart.h"

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

}


void butcheryandseafood::on_pushButton_viewbutcheryproduct_clicked()
{
    hide();
    shoppingcart* cart= new shoppingcart(this);
    cart->show();
}


void butcheryandseafood::on_pushButton_searchbutchery_clicked()
{

}

