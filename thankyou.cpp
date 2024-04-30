#include "thankyou.h"
#include "ui_thankyou.h"

ThankYou::ThankYou(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThankYou)
{
    ui->setupUi(this);
}

ThankYou::~ThankYou()
{
    delete ui;
}
