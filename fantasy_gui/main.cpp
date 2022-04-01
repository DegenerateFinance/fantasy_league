#include "mainwindow.hpp"

#include <QApplication>

#include "player.hpp"
#include "user.hpp"
#include "admin.hpp"
#include "manager.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow loginPage;
    loginPage.show();
    manager notMe;

    fstream testFile;
    testFile.open("aaa.txt", ios::out);
    if (testFile.is_open())
    {
        cout<<"open success\n";
        testFile << "Holly fak it worked !";
        testFile.close();
    }
    else
    {
        cout<<"not open\n";
    }

    std::cout<<"run in terminal"<<std::endl;


    return a.exec();
}
