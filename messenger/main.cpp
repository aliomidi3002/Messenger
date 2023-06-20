#include "starterwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    starterWindow w;
    w.showMaximized();
    return a.exec();
}
