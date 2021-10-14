#include <iostream>
#include "c_carte.h"
#include "c_jeuDeCartes.h"
#include <random>
#include <string.h>

using namespace std;

int main()
{

    c_carte card;
    c_jeuDeCartes test;
    string playerName[10] = {{"duncan"},{"alessandro"},{"jose"},{"anna"},{"bov"},{"christelle"},{"redhouanne"},{"alain jupe"},{"florian"},{"jean"}};
    test.setTailleJeu(52);
    test.rangerJeu();
    test.melangerJeu();
    int nbrJoueur=10;
    //cin>>nbrJoueur;
    int nbrCarteDist = (int)test.getCartesDistribuees()/nbrJoueur;
    cout<< "nombre de carte par joueurs: "<<nbrCarteDist<<endl;

    int getCartDistrib=0;
    int joueurActu = 0;

    cout<<"jeu de carte de "<<playerName[joueurActu]<<endl;
    for(int i =0; i<52; i++)
    {
        getCartDistrib += 1;
        card = test.distribuer();
        cout << "carte de type " <<card.getForme()<<" de valeur "<<card.getValeur()<< endl;
        if(getCartDistrib>=nbrCarteDist)
        {
            joueurActu +=1;
            cout<<"jeu de carte de "<<playerName[joueurActu]<<endl;
            getCartDistrib =0;

        }
    }

    cout << "nb de carte: "<< test.getCartesDistribuees()+1<<endl;
    return 0;
}
