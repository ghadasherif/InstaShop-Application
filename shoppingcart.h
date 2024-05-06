#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <QDialog>

namespace Ui {
class shoppingcart;
}

class shoppingcart : public QDialog
{
    Q_OBJECT

public:
    explicit shoppingcart(QWidget *parent = nullptr);
    ~shoppingcart();

private slots:

    void on_pushButton_nextcart_clicked();

    void on_pushButton_backcart_clicked();

    void on_Product1_Remove_clicked();

    void on_Product2_Remove_clicked();

    void on_Product3_Remove_clicked();

    void on_Product4_Remove_clicked();

    void on_Product5_Remove_clicked();

    void on_Product6_Remove_clicked();

    void on_Product7_Remove_clicked();

    void on_Product8_Remove_clicked();

    void on_Product9_Remove_clicked();

    void on_Product10_Remove_clicked();

   // void on_pushButton_clicked();

    void on_pushButton_CalculateTotal_clicked();

private:
    Ui::shoppingcart *ui;
};

#endif // SHOPPINGCART_H
