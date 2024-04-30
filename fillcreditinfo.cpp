#include "fillcreditinfo.h"
#include "ui_fillcreditinfo.h"
#include "thankyou.h"

FillCreditinfo::FillCreditinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FillCreditinfo)
{
    ui->setupUi(this);
}

FillCreditinfo::~FillCreditinfo()
{
    delete ui;
}

void FillCreditinfo::on_pushButton_submitpayment_clicked()
{
    hide();
    ThankYou* thanks = new ThankYou(this);
    thanks->show();
}

