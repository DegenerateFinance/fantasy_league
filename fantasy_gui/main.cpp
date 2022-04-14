#include "mainwindow.hpp"

#include <QApplication>

#include "player.hpp"
#include "user.hpp"
#include "admin.hpp"
#include "manager.hpp"
#include "functions.hpp"

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow loginPage;
    loginPage.show();
    manager notMe;


    notMe.addAdmin("testaAdminUser","SAFUAdminPW");

    notMe.addAdmin("Second Admin", "Very Safe");


    return a.exec();
}
