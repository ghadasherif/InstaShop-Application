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

private:
    Ui::BakeriesandCakes *ui;
};

#endif // BAKERIESANDCAKES_H
