#ifndef MANAGER_UI_H
#define MANAGER_UI_H

#include <QWidget>

namespace Ui {
class ManagerUi;
}

class ManagerUi : public QWidget
{
    Q_OBJECT

public:
    explicit ManagerUi(QWidget *parent = 0);
    ~ManagerUi();

private:
    Ui::ManagerUi *ui;
};

#endif // MANAGER_UI_H
