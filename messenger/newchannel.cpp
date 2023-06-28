#include "newchannel.h"
#include "ui_newchannel.h"
#include "setting.h"

NewChannel::NewChannel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewChannel)
{
    ui->setupUi(this);
}

NewChannel::~NewChannel()
{
    delete ui;
}

void NewChannel::on_pushButton_clicked()
{
    close(); // Close the Login dialog
    QWidget * Setting = parentWidget();
    if (Setting) {
        Setting->show(); // Show the main window
    }
}

