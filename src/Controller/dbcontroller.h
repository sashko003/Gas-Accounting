#ifndef DBCONTROLLER_H
#define DBCONTROLLER_H

#include <QString>
#include <QtSql>
#include "..\common.h"

class DbController
{
public:
    DbController();

protected:
    QSqlQueryModel* selectTable(QString);
    QSqlError       getLastError();

    QSqlDatabase db;
    static const string connection_string_sqlauth;
    static const string connection_string_winauth;
};

#endif // DBCONTROLLER_H
