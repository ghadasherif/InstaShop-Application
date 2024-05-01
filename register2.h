#ifndef REGISTER2_H
#define REGISTER2_H

#include <QDialog>

namespace Ui {
class register2;
}

class register2 : public QDialog
{
    Q_OBJECT

public:
    explicit register2(QWidget *parent = nullptr);
    ~register2();

private slots:


    void on_pushButton_SubmitRegisterSeller_clicked();

private:
    Ui::register2 *ui;
};

#endif // REGISTER2_H
