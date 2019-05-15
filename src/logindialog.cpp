#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::setMainWindow(MainWindow *qMain)
{
    mainUi = qMain;
}

void LoginDialog::on_pushButton_Login_clicked()
{
    if(true)// such user is registered
    {
        mainUi->show();
        delete this;
    }
}
