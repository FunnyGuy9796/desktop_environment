#include "mainwindow.h"
#include <QScreen>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QScreen *screen = w.screen();
    QRect screenGeom(screen->availableGeometry());
    int width = screenGeom.width();
    int height = screenGeom.height();
    w.setFixedSize(width, height);
    w.show();
    return a.exec();
}
