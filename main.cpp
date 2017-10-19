#include <iostream>
#include <string>
#include <vector>
//#include <string.h> // c string
using namespace std;

int main()
{
    vector<string> Verbes = {"Dormir","Etudier","Imaginer","Chercher","Finir","Rougir","Continuer","Planter","Introduire","Nager","Donner","Devoir"};
    vector<string> _Exception3 = {"Aller","Falloir","Devoir"};
    int     Groupe[Verbes.size()] = {0};
    //cout <<  (Verbes[0][ Verbes[0].size() -1 ] == 'z') <<endl;
    for (int i= 0; i< Verbes.size(); i++)
    {
        cout<<Verbes[i];
        // if
        // {

        // }
        //  else
        if (Verbes[i][Verbes[i].size()-2] == 'e'  && Verbes[i][Verbes[i].size()-1]  == 'r')
        {
            Groupe[i] = 1;
            cout<<"   1er groupe"<<endl;
        }

        else if (Verbes[i][Verbes[i].size()-2] == 'i'  && Verbes[i][Verbes[i].size()-1]  == 'r')
        {
            Groupe[i] = 2;
            cout<<"   2ém groupe"<<endl;
        }

        else if (Verbes[i][Verbes[i].size()-2] == 'r'  && Verbes[i][Verbes[i].size()-1]  == 'e')
        {
            Groupe[i] = 3;
            cout<<"   3ém groupe"<<endl;
        }
    }
    return 0;
}
