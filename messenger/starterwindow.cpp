#include "starterwindow.h"
#include "ui_starterwindow.h"

starterWindow::starterWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::starterWindow)
{
    ui->setupUi(this);
}

starterWindow::~starterWindow()
{
    delete ui;
}
