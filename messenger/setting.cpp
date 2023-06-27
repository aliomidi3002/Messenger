#include "setting.h"
#include "ui_setting.h"
#include "chatpage.h"

Setting::Setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Setting)
{
    ui->setupUi(this);
}

Setting::~Setting()
{
    delete ui;
}

void Setting::on_pushButton_4_clicked()
{
    close();
    QWidget * chatPage = parentWidget();
    if(chatPage){
        chatPage->show();
    }
}

//close(); // Close the Login dialog
//QWidget* mainWindow = parentWidget();
//if (mainWindow) {
//    mainWindow->show(); // Show the main window
//}

