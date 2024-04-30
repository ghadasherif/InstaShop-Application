#ifndef PRODUCTS2_H
#define PRODUCTS2_H

#include <QDialog>

namespace Ui {
class Products2;
}

class Products2 : public QDialog
{
    Q_OBJECT

public:
    explicit Products2(QWidget *parent = nullptr);
    ~Products2();

private slots:
    void on_pushButton_additemseller_clicked();

    void on_pushButton_clicked();

    void on_pushButton_deleteseller_clicked();

private:
    Ui::Products2 *ui;
};

#endif // PRODUCTS2_H
