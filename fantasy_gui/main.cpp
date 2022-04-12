#include "mainwindow.hpp"

#include <QApplication>

#include "player.hpp"
#include "user.hpp"
#include "admin.hpp"
#include "manager.hpp"

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow loginPage;
    loginPage.show();
    manager notMe;

    fstream testFile("textfile.txt", ios::in | ios::out);
    if (!testFile)
    {
        cerr<<"Error opening file"<<endl;
    }

    if (testFile.is_open())
    {
        cout<<"open success\n";
        testFile << "Say something !!!";
        string sOut;
        getline(testFile, sOut);

        cout<< sOut<<endl;
        testFile.close();
    }
    else
    {
        cout<<"not open\n";
    }

    std::cout<<"run in terminal"<<std::endl;


    return a.exec();
}
