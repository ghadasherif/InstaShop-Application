#include "register2.h"
#include "ui_register2.h"
#include "products2.h"

register2::register2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::register2)
{
    ui->setupUi(this);
}

register2::~register2()
{
    delete ui;
}

void register2::on_pushButton_submitregisterseller_clicked()
{
    hide();
    Products2* productsseller= new Products2(this);
    productsseller->show();
}

