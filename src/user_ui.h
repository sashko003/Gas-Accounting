#ifndef USER_UI_H
#define USER_UI_H

#include "base_window.h"

namespace Ui {
class UserUI;
}

class UserUI : public BaseWindow
{
    Q_OBJECT

public:
    explicit UserUI(QWidget *parent = 0);
    ~UserUI();

private:
    Ui::UserUI *ui;
};

#endif // USER_UI_H
