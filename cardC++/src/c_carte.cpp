#include "c_carte.h"

c_carte::c_carte()
{
    //ctor
    m_valeur = -1;
    m_forme = -1;
}

c_carte::~c_carte()
{
    //dtor
}

short c_carte::getForme(){
return m_forme;

}

short c_carte::getValeur(){
    return m_valeur;
}


bool c_carte::setValeur(short v){
    bool retour = false;
    if(v>0 && v<15){
        m_valeur = v;
        return true;
    }
    return retour;
}
bool c_carte::setCarte(short v, forme f){
    if(v>0 && v<15 && f>-1 && f<4){
        return true;
    }
    return false;
}
bool c_carte::setForme(c_carte::forme f){
    m_forme = f;
    return true;
}

void c_carte::operator=(const c_carte &c){

    this -> m_forme=c.m_forme;
    this -> m_valeur=c.m_valeur;
}

