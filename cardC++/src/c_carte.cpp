#include "c_carte.h"

c_carte::c_carte()
{
    //ctor
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
    if(v<1 && v>15){
        m_valeur = v;
        return true;
    }
    return retour;
}
bool c_carte::setCarte(short v, forme f){

}
bool c_carte::setForme(c_carte::forme f){
    m_forme = f;
    return true;
}
