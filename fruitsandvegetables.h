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

private:
    Ui::FruitsandVegetables *ui;
};

#endif // FRUITSANDVEGETABLES_H
