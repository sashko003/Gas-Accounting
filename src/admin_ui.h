#ifndef ADMIN_UI_H
#define ADMIN_UI_H

#include <QWidget>

namespace Ui {
class AdminUi;
}

class AdminUi : public QWidget
{
    Q_OBJECT

public:
    explicit AdminUi(QWidget *parent = 0);
    ~AdminUi();

private:
    Ui::AdminUi *ui;
};

#endif // ADMIN_UI_H
