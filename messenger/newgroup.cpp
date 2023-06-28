#include "newgroup.h"
#include "ui_newgroup.h"
#include "setting.h"

NewGroup::NewGroup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewGroup)
{
    ui->setupUi(this);
}

NewGroup::~NewGroup()
{
    delete ui;
}

void NewGroup::on_pushButton_clicked()
{
    close(); // Close the Login dialog
    QWidget * Setting = parentWidget();
    if (Setting) {
        Setting->show(); // Show the main window
    }
}

