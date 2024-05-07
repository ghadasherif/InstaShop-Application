#ifndef THANKYOU_H
#define THANKYOU_H

#include <QDialog>

namespace Ui {
class ThankYou;
}

class ThankYou : public QDialog
{
    Q_OBJECT

public:
    explicit ThankYou(QWidget *parent = nullptr);
    ~ThankYou();

private slots:
    void on_pushButton_continue_clicked(); //hides the current window and takes the user back to the main window after writing all the products and their details in the vector of products in the vector_products and writes all the users' (sellers and buyers) details to their corresponding files and returns void

private:
    Ui::ThankYou *ui;
};

#endif // THANKYOU_H
