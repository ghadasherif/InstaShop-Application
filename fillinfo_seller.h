#ifndef FILLINFO_SELLER_H
#define FILLINFO_SELLER_H

#include <QDialog>

namespace Ui {
class FillInfo_Seller;
}

class FillInfo_Seller : public QDialog
{
    Q_OBJECT

public:
    explicit FillInfo_Seller(QWidget *parent = nullptr);
    ~FillInfo_Seller();

private slots:
    void on_pushButton_submit_clicked();

private:
    Ui::FillInfo_Seller *ui;
};

#endif // FILLINFO_SELLER_H
