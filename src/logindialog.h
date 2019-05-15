#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

    void setMainWindow(MainWindow *main);

private slots:
    void on_pushButton_Login_clicked();

private:
    Ui::LoginDialog *ui;
    MainWindow *mainUi;
};

#endif // LOGINDIALOG_H
