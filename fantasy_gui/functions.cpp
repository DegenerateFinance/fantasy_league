#include "functions.hpp"

void exportAdmins(vector<admin*> administrator)
{
    ofstream adminsTXT("textfiles/admins.txt", ios::trunc);
    //trunc opens the file for output operations and deletes previous content
    if (adminsTXT.is_open())
    {
        cout<<"exporting admins"<<endl;
        for(unsigned i=0;i<administrator.size();i++)
        {
            char a=31;  //US unit separator, INFORMATION SEPARATOR ONE
            adminsTXT<<administrator[i]->getUsername();
            adminsTXT<<"\n";
            adminsTXT<<administrator[i]->getPassword();
            adminsTXT<<"\n";
            adminsTXT<<a<<endl;
        }

        adminsTXT.close();
        cout<<"admins exported"<<endl;
    }
    else
        cout<<"Error opening file"<<endl;
}

