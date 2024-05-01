#include "fillcreditinfo.h"
#include "ui_fillcreditinfo.h"
#include "thankyou.h"

FillCreditinfo::FillCreditinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FillCreditinfo)
{
    ui->setupUi(this);
    ui->labelErrorCVC_credit->setVisible(false);
    ui->labelErrorCardNum_credit->setVisible(false);
    ui->labelErrorAllFields_credit->setVisible(false);
}

FillCreditinfo::~FillCreditinfo()
{
    delete ui;
}

void FillCreditinfo::on_pushButton_submitpayment_clicked()
{  QString CardHolderName= ui->lineEdit_cardname->text();
    QString cvc= ui->lineEdit_cardcvc->text();
    if(cvc.length() != 3 ){
        ui->labelErrorCVC_credit->setVisible(true);
    }
    else {
        ui->labelErrorCVC_credit->setVisible(false);

    }

    QString cardNumber = ui->lineEdit_cardnum->text();
    if (cardNumber.length() != 16){
        ui->labelErrorCardNum_credit->setVisible(true);
    }
    else {
        ui->labelErrorCardNum_credit->setVisible(false);

    }
    QString month = ui->comboBox_creditMonth ->currentText();
    QString day = ui->comboBox_creditDay->currentText();

    if (CardHolderName.isEmpty()||cardNumber.isEmpty()|| cvc.isEmpty()|| month.isEmpty() || day.isEmpty()){
        ui->labelErrorAllFields_credit->setVisible(true);
    } else {
        ui->labelErrorAllFields_credit->setVisible(false);

    }
    hide();
    ThankYou* thanks = new ThankYou(this);
    thanks->show();
}

