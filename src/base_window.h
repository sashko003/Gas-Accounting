#ifndef BASE_WINDOW_H
#define BASE_WINDOW_H

#include <QWidget>
#define DEFAULT_WIDTH 800
#define DEFAULT_HEIGHT 500

namespace Ui {
class BaseWindow;
}

class BaseWindow : public QWidget
{
    Q_OBJECT

public:
    explicit BaseWindow(QWidget *parent = 0);
    ~BaseWindow();

private:
    Ui::BaseWindow *ui;
};

#endif // BASE_WINDOW_H
