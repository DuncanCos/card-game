#ifndef C_CARTE_H
#define C_CARTE_H


class c_carte
{
    public:
        c_carte();
        ~c_carte();
        enum forme{CARREAU, COEUR, TREFLE, PIQUE};
        bool setValeur(short v);
        bool setForme(forme f);

        bool setCarte(short v, forme f);
        short getValeur();
        short getForme();
        c_carte operator=(const c_carte &c);


    private:
        short m_valeur;
        short m_forme;
};

#endif // C_CARTE_H
