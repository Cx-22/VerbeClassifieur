#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

// Source
// http://www.conjuguons.fr/groupes.php
int main()
{
    cout <<endl<<endl;
    vector<string> Verbes = {
    "Dormir","marcher","Etudier","découvrir","disconvenir","aller","Mange","Imaginer","Chercher",
    "Finir","Rougir","Continuer","Planter","Introduire","Nager","Donner","Devoir"
    };
    vector<string> _Exception2 =
    {
        "tenir","abstenir","appartenir","contenir","détenir","entretenir","maintenir",
        "obtenir","retenir","soutenir","venir","avenir","advenir","bienvenir","circonvenir","contrevenir",
        "convenir","devenir","disconvenir","intervenir","obvenir","parvenir","prévenir","provenir",
        "redevenir","ressouvenir","revenir","souvenir","subvenir","survenir","acquérir","conquérir",
        "enquérir","quérir","reconquérir","requérir","sentir","consentir","pressentir","ressentir","mentir",
        "démentir","partir","départir","repartir","repentir","sortir","ressortir","vêtir","dévêtir","revêtir",
        "survêtir","ouvrir","couvrir","découvrir","redécouvrir","recouvrir","entrouvrir","rentrouvrir","rouvrir",
        "offrir","souffrir","cueillir","accueillir","recueillir","assaillir","saillir","tressalllir","défaillir",
        "faillir","bouillir","débouillir","dormir","endormir","rendormir","courir","accourir","concourir","discourir",
        "encourir","parcourir","recourir","secourir","mourir","servir","desservir","resservir","fuir","enfuir","gésir"
    };
    int     Groupe[Verbes.size()] = {0};
    for (int i= 0; i< Verbes.size(); i++) // Pour chaque verbe donné
    {
        Verbes[i][0]=toupper(Verbes[i][0]);
        cout<<Verbes[i];
        // Premier Groupe
        if (Verbes[i][Verbes[i].size()-2] == 'e'  && Verbes[i][Verbes[i].size()-1]  == 'r')
        {
            if (!(Verbes[i] == "Aller"))
            {
                Groupe[i] = 1;
                cout<<"   1er groupe"<<endl;
            }
            else
            {
                Groupe[i] = 3;
                cout<<"   3ém groupe"<<endl;
            }
        }
        //  2éme groupe
        else if (Verbes[i][Verbes[i].size()-2] == 'i'  && Verbes[i][Verbes[i].size()-1]  == 'r')
        {
            for (int j= 0; j< _Exception2.size(); j++) //les verbes qui se terminent en -IR (comme Mourir : mour-ant; mour-ons)
            {
                _Exception2[j][0]=toupper(_Exception2[j][0]);
                if (_Exception2[j] == Verbes[i])
                {
                    Groupe[i] = 3;
                    cout<<"   3ém groupe"<<endl;
                }
            }
            if ( Verbes[i][Verbes[i].size()-3] == 'o' ) //  Les verbes qui se terminent en -OIR (comme Recevoir : recev-ant; recev-ons)
            {
                Groupe[i] = 3;
                cout<<"   3ém groupe"<<endl;
            }
            if (!Groupe[i])
            {
                Groupe[i] = 2;
                cout<<"   2ém groupe"<<endl;
            }
        }
        // 3ém groupe
        else if (Verbes[i][Verbes[i].size()-2] == 'r'  && Verbes[i][Verbes[i].size()-1]  == 'e')
        {
            Groupe[i] = 3;
            cout<<"   3ém groupe"<<endl;
        }
        else
            cout<<", est-t il un verbe conjugé? Veillez donnez son infinitf."<<endl;
    }
    return 0;
}
