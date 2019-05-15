#include "db_controller.h"
#include "mainwindow.h"
#include "logindialog.h"
#include <QApplication>
#include <QThread>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    DbController db_controller(0);

    MainWindow window(0, &db_controller);
    //window.show();

    LoginDialog login;
    login.setMainWindow(&window);
    login.show();
    return app.exec();
}
