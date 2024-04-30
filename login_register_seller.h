#ifndef LOGIN_REGISTER_SELLER_H
#define LOGIN_REGISTER_SELLER_H

#include <QDialog>

namespace Ui {
class login_register_seller;
}

class login_register_seller : public QDialog
{
    Q_OBJECT

public:
    explicit login_register_seller(QWidget *parent = nullptr);
    ~login_register_seller();

private slots:
    void on_pushButton_login_seller_clicked();

    void on_pushButton_register_Seller_clicked();

private:
    Ui::login_register_seller *ui;
};

#endif // LOGIN_REGISTER_SELLER_H
