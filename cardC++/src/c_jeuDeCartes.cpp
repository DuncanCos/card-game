#include "c_jeuDeCartes.h"
#include <iostream>
#include <random>

using namespace std;

c_jeuDeCartes::c_jeuDeCartes()
{
    //ctor
    m_cartesDistribuees = -1;
}

c_jeuDeCartes::~c_jeuDeCartes()
{
    //dtor
}


c_jeuDeCartes::c_jeuDeCartes(int tailleJeu){
    setTailleJeu(tailleJeu);
     m_cartesDistribuees = -1;
}

void c_jeuDeCartes::melangerJeu(){

for(int i =0; i< m_tailleJeu; i++)
{

    c_carte replaceCard;
    replaceCard.setValeur(m_tabJeu[i].getValeur());
    replaceCard.setForme(static_cast<c_carte::forme>(m_tabJeu[i].getForme()));

    int otherCord = rand() % m_tailleJeu;

    m_tabJeu[i]= m_tabJeu[otherCord];
    m_tabJeu[otherCord]=replaceCard;

}

}

void c_jeuDeCartes::rangerJeu(){


    for(int i =0; i<13; i++)
    {
        m_tabJeu[i].setValeur(i+1);
        m_tabJeu[i].setForme(c_carte::CARREAU);
    }
    for(int i =13; i<26; i++)
    {
        m_tabJeu[i].setValeur(i-12);
        m_tabJeu[i].setForme(c_carte::COEUR);
    }
    for(int i =26; i<39; i++)
    {
        m_tabJeu[i].setValeur(i-25);
        m_tabJeu[i].setForme(c_carte::TREFLE);
    }
    for(int i =39; i<52; i++)
    {
        m_tabJeu[i].setValeur(i-38);
        m_tabJeu[i].setForme(c_carte::PIQUE);
    }

}

c_carte c_jeuDeCartes::distribuer(){

    if(m_cartesDistribuees != m_tailleJeu){
        m_cartesDistribuees +=1;
    }
    return m_tabJeu[m_cartesDistribuees];


}

void c_jeuDeCartes::setTailleJeu(int tailleJeu){

    if(tailleJeu==32 || tailleJeu ==52)
    {
        m_tailleJeu = tailleJeu;
    }else{
    m_tailleJeu=32;
    }


    m_tabJeu = new c_carte[m_tailleJeu];
}

int c_jeuDeCartes::getCartesDistribuees(){

    return m_tailleJeu;

}

