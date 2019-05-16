#include "manager_ui.h"
#include "ui_manager_ui.h"

ManagerUi::ManagerUi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManagerUi)
{
    ui->setupUi(this);
}

ManagerUi::~ManagerUi()
{
    delete ui;
}
