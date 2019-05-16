#include "admin_ui.h"
#include "ui_admin_ui.h"

AdminUi::AdminUi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminUi)
{
    ui->setupUi(this);
}

AdminUi::~AdminUi()
{
    delete ui;
}
