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

private:
    Ui::ThankYou *ui;
};

#endif // THANKYOU_H
