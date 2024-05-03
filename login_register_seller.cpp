#include "login_register_seller.h"
#include "ui_login_register_seller.h"
#include "products2.h"
#include "register2.h"
#include "UsersData.h"
#include "user.h"
#include <QString>
login_register_seller::login_register_seller(QWidget *parent) :
    QDialog(parent)

{
    ui->setupUi(this);
    ui->labelError_username_andpass_seller->setVisible(false);
}

login_register_seller::~login_register_seller()
{
    delete ui;
}

void login_register_seller::on_pushButton_login_seller_clicked()
{
    for (auto i=0;i<(Users_Seller.size());i++)
    {
        QString username_copy=ui->lineEdit_username_loginreg_seller->text();
        QString passcode_copy=ui->lineEdit_pass_loginreg_seller->text();
        if ((username_copy==(Users_Seller[i].Get_Name()))&&(passcode_copy==(Users_Seller[i].Get_Password())))
        {
            break;
            hide();
            Products2* productsseller= new Products2(this);
            productsseller->show();
        }
    }
    ui->labelError_username_andpass_seller->setVisible(true);
}
void login_register_seller::on_pushButton_register_Seller_clicked()
{
    hide();
    register2* registerseller= new register2(this);
    registerseller->show();
}

