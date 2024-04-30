#ifndef PRODUCTS1_H
#define PRODUCTS1_H

#include <QDialog>

namespace Ui {
class Products1;
}

class Products1 : public QDialog
{
    Q_OBJECT

public:
    explicit Products1(QWidget *parent = nullptr);
    ~Products1();

private slots:
    void on_pushButton_bakeriescakes_clicked();

    void on_pushButton_dairy_clicked();

    void on_pushButton_butcheryseafood_clicked();

    void on_pushButton_fruitsvegetables_clicked();

private:
    Ui::Products1 *ui;
};

#endif // PRODUCTS1_H
