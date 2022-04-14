#include "functions.hpp"

void exportAdmins(vector<admin*> administrator)
{
    fstream adminsTXT("textfiles/admins.txt", ios::in | ios::out);
    if (adminsTXT.is_open())
    {
        cout<<"exporting admins"<<endl;
        for(unsigned i=0;i<administrator.size();i++)
        {
            adminsTXT<<administrator[i]->getUsername();
            adminsTXT<<"\n";
            adminsTXT<<administrator[i]->getPassword();
            adminsTXT<<"\n\n";
        }

        adminsTXT.close();
        cout<<"admins exported"<<endl;
    }
}

