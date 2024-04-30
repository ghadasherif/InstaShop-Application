#ifndef LOGIN_REGISTER_WINDOW_H
#define LOGIN_REGISTER_WINDOW_H

#include <QDialog>

namespace Ui {
class Login_Register_Window;
}

class Login_Register_Window : public QDialog
{
    Q_OBJECT

public:
    explicit Login_Register_Window(QWidget *parent = nullptr);
    ~Login_Register_Window();

private slots:
    void on_pushButton_Register_clicked();

    void on_pushButton_login_clicked();

private:
    Ui::Login_Register_Window *ui;
};

#endif // LOGIN_REGISTER_WINDOW_H
