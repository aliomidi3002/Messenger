#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Dialog secDialog;
    secDialog.setModal(true);
    secDialog.exec();
}


void MainWindow::on_pushButton_2_clicked()
{
    signIn SignIN;
    SignIN.setModal(true);
    SignIN.exec();
}

