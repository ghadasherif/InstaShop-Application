#ifndef DELETEITEM_SELLER_H
#define DELETEITEM_SELLER_H

#include <QDialog>

namespace Ui {
class deleteitem_seller;
}

class deleteitem_seller : public QDialog
{
    Q_OBJECT

public:
    explicit deleteitem_seller(QWidget *parent = nullptr);
    ~deleteitem_seller();

private:
    Ui::deleteitem_seller *ui;
};

#endif // DELETEITEM_SELLER_H
