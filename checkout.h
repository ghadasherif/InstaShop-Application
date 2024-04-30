#ifndef CHECKOUT_H
#define CHECKOUT_H

#include <QDialog>

namespace Ui {
class checkout;
}

class checkout : public QDialog
{
    Q_OBJECT

public:
    explicit checkout(QWidget *parent = nullptr);
    ~checkout();

private slots:
    void on_pushButton_creditoption_clicked();

    void on_pushButton_cashoption_clicked();

private:
    Ui::checkout *ui;
};

#endif // CHECKOUT_H
