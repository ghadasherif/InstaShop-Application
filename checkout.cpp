#include "checkout.h"
#include "ui_checkout.h"
#include "thankyou.h"
#include "fillcreditinfo.h"

checkout::checkout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checkout)
{
    ui->setupUi(this);
}

checkout::~checkout()
{
    delete ui;
}

void checkout::on_pushButton_creditoption_clicked()
{
    hide();
    FillCreditinfo* fillcredit= new FillCreditinfo(this);
    fillcredit->show();
}


void checkout::on_pushButton_cashoption_clicked()
{
    hide();
    ThankYou* thanks= new ThankYou(this);
    thanks->show();
}

