#include "mainwindow.hpp"

#include <QApplication>
#include "player.hpp"
#include "user.hpp"
#include "admin.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
