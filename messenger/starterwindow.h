#ifndef STARTERWINDOW_H
#define STARTERWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class starterWindow; }
QT_END_NAMESPACE

class starterWindow : public QMainWindow
{
public:
    starterWindow(QWidget *parent = nullptr);
    ~starterWindow();

private:
    Ui::starterWindow *ui;
};
#endif // STARTERWINDOW_H
