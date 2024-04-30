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

private:
    Ui::butcheryandseafood *ui;
};

#endif // BUTCHERYANDSEAFOOD_H
