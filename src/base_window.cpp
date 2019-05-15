#include "base_window.h"
#include "ui_base_window.h"

BaseWindow::BaseWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BaseWindow)
{
    ui->setupUi(this);
    this->resize(DEFAULT_WIDTH, DEFAULT_HEIGHT);
}

BaseWindow::~BaseWindow()
{
    delete ui;
}
