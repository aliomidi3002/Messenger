#include "setting.h"
#include "ui_setting.h"
#include "chatpage.h"
#include "editprofile.h"
#include "newgroup.h"
#include "newchannel.h"
#include "logout.h"

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


void Setting::on_pushButton_clicked()
{
    hide();
    EditProfile *prof;
    prof = new EditProfile(this);
    prof->show();
}


void Setting::on_pushButton_2_clicked()
{
    hide();
    NewGroup *group;
    group = new NewGroup(this);
    group->show();
}


void Setting::on_pushButton_3_clicked()
{
    hide();
    NewChannel *channel;
    channel = new NewChannel(this);
    channel->show();
}


void Setting::on_pushButton_5_clicked()
{
    hide();
    LogOut * out;
    out = new LogOut(this);
    out->show();
}

