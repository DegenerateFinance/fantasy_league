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

    fstream playersTXT("textfiles/players.txt", ios::in | ios::out);
    if (!playersTXT)
    {
        cerr<<"Error opening file"<<endl;
    }

    if (playersTXT.is_open())
    {
        cout<<"open success\n";
        playersTXT << "Say something !!!";
        string sOut;
        getline(playersTXT, sOut);

        cout<< sOut<<endl;
        playersTXT.close();
    }

    std::cout<<"run in terminal"<<std::endl;


    return a.exec();
}
