#ifndef BUTCHERYANDSEAFOOD_H
#define BUTCHERYANDSEAFOOD_H

#include <QDialog>

namespace Ui {
class butcheryandseafood;
}

class butcheryandseafood : public QDialog
{
    Q_OBJECT

public:
    explicit butcheryandseafood(QWidget *parent = nullptr);
    ~butcheryandseafood();

private slots:
    void on_pushButton_addbutcheryproduct_clicked();

    void on_pushButton_viewbutcheryproduct_clicked();

    void on_pushButton_searchbutchery_clicked();

    void on_pushButton_addbutcheryproduct_2_clicked();

    void on_pushButton_addbutcheryproduct_3_clicked();

    void on_pushButton_addbutcheryproduct_4_clicked();

    void on_pushButton_addbutcheryproduct_5_clicked();

    void on_pushButton_addbutcheryproduct_6_clicked();

    void on_pushButton_addbutcheryproduct_7_clicked();

    void on_pushButton_addbutcheryproduct_8_clicked();

    void on_pushButton_addbutcheryproduct_9_clicked();

    void on_pushButton_addbutcheryproduct_10_clicked();

private:
    Ui::butcheryandseafood *ui;
};

#endif // BUTCHERYANDSEAFOOD_H
