#ifndef FILLCREDITINFO_H
#define FILLCREDITINFO_H

#include <QDialog>

namespace Ui {
class FillCreditinfo;
}

class FillCreditinfo : public QDialog
{
    Q_OBJECT

public:
    explicit FillCreditinfo(QWidget *parent = nullptr);
    ~FillCreditinfo();

private slots:
    void on_pushButton_submitpayment_clicked();

private:
    Ui::FillCreditinfo *ui;
};

#endif // FILLCREDITINFO_H
