#include "user_ui.h"
#include "ui_user_ui.h"

UserUI::UserUI(QWidget *parent) :
    BaseWindow(parent),
    ui(new Ui::UserUI)
{
    ui->setupUi(this);
}

UserUI::~UserUI()
{
    delete ui;
}
