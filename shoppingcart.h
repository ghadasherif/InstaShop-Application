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

private:
    Ui::shoppingcart *ui;
};

#endif // SHOPPINGCART_H
