#include "products1.h"
#include "ui_products1.h"
#include "bakeriesandcakes.h"
#include "dairy.h"
#include "butcheryandseafood.h"
#include "fruitsandvegetables.h"

Products1::Products1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Products1)
{
    ui->setupUi(this);
}

Products1::~Products1()
{
    delete ui;
}

void Products1::on_pushButton_bakeriescakes_clicked()
{
    hide();
    BakeriesandCakes* bakeriescakes= new BakeriesandCakes(this);
    bakeriescakes->show();
}


void Products1::on_pushButton_dairy_clicked()
{
    hide();
    Dairy* dairyproducts= new Dairy(this);
    dairyproducts->show();
}


void Products1::on_pushButton_butcheryseafood_clicked()
{
    hide();
    butcheryandseafood* butcheryseafood= new butcheryandseafood(this);
    butcheryseafood->show();
}


void Products1::on_pushButton_fruitsvegetables_clicked()
{
    hide();
    FruitsandVegetables* fruitsveggies= new FruitsandVegetables(this);
    fruitsveggies->show();
}

