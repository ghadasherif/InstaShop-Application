#ifndef BAKERIESANDCAKES_H
#define BAKERIESANDCAKES_H

#include <QDialog>

namespace Ui {
class BakeriesandCakes;
}

class BakeriesandCakes : public QDialog
{
    Q_OBJECT

public:
    explicit BakeriesandCakes(QWidget *parent = nullptr);
    ~BakeriesandCakes();

private slots:
    void on_pushButton_SearchItemBakeries_clicked();

    void on_pushButton_addbakeryproduct_clicked();

    void on_pushButton_viewbakeriesproduct_clicked();

    void on_pushButton_addbakeryproduct1_clicked();

    void on_pushButton_addbakeryproduct2_clicked();

    void on_pushButton_addbakeryproduct3_clicked();

    void on_pushButton_addbakeryproduct4_clicked();

    void on_pushButton_addbakeryproduct5_clicked();

    void on_pushButton_addbakeryproduct6_clicked();

    void on_pushButton_addbakeryproduct7_clicked();

    void on_pushButton_addbakeryproduct8_clicked();

    void on_pushButton_addbakeryproduct9_clicked();

    void on_pushButton_addbakeryproduct10_clicked();

    void on_pushButton_Search_clicked();

private:
    Ui::BakeriesandCakes *ui;
};

#endif // BAKERIESANDCAKES_H
