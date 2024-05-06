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
    void on_pushButton_continue_clicked();

private:
    Ui::ThankYou *ui;
};

#endif // THANKYOU_H
