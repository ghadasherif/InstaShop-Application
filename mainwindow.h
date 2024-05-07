#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "product.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
extern QVector<Product>::iterator current;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr); // reads all the data from the users (buyers and sellers) and put the data in their corresponding files and the same is done for products vector and its corresponding file
    ~MainWindow();

private slots:
    void on_seller_button_clicked(); // hides the current window and opens products2 window

    void on_buyer_button_clicked(); // hides the current window and opens products1 window

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
