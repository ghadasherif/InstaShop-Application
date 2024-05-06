#ifndef FRUITSANDVEGETABLES_H
#define FRUITSANDVEGETABLES_H

#include <QDialog>

namespace Ui {
class FruitsandVegetables;
}

class FruitsandVegetables : public QDialog
{
    Q_OBJECT

public:
    explicit FruitsandVegetables(QWidget *parent = nullptr);
    ~FruitsandVegetables();

private slots:
    void on_pushButton_addfruitsproduct_clicked();

    void on_pushButton_viewfruitsproduct_clicked();

    void on_pushButton_searchfruits_clicked();

    void on_pushButton_addfruitsproduct_2_clicked();

    void on_pushButton_addfruitsproduct_3_clicked();

    void on_pushButton_addfruitsproduct_4_clicked();

    void on_pushButton_addfruitsproduct_5_clicked();

    void on_pushButton_addfruitsproduct_6_clicked();

    void on_pushButton_addfruitsproduct_7_clicked();

    void on_pushButton_addfruitsproduct_8_clicked();

    void on_pushButton_addfruitsproduct_9_clicked();

    void on_pushButton_addfruitsproduct_10_clicked();

private:
    Ui::FruitsandVegetables *ui;
};

#endif // FRUITSANDVEGETABLES_H
