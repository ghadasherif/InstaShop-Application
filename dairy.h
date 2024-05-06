#ifndef DAIRY_H
#define DAIRY_H

#include <QDialog>

namespace Ui {
class Dairy;
}

class Dairy : public QDialog
{
    Q_OBJECT

public:
    explicit Dairy(QWidget *parent = nullptr);
    ~Dairy();

private slots:
    void on_pushButton_adddairyproduct_clicked();

    void on_pushButton_viewdairyproduct_clicked();

    void on_pushButton_Searchdairy_clicked();

    void on_pushButton_adddairyproduct_2_clicked();

    void on_pushButton_adddairyproduct_3_clicked();

    void on_pushButton_adddairyproduct_4_clicked();

    void on_pushButton_adddairyproduct_5_clicked();

    void on_pushButton_adddairyproduct_6_clicked();

    void on_pushButton_adddairyproduct_7_clicked();

    void on_pushButton_adddairyproduct_8_clicked();

    void on_pushButton_adddairyproduct_9_clicked();

    void on_pushButton_adddairyproduct_10_clicked();

private:
    Ui::Dairy *ui;
};

#endif // DAIRY_H
