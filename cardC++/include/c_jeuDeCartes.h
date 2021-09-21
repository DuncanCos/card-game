#ifndef C_JEUDECARTES_H

#define C_JEUDECARTES_H
#include <c_carte.h>

class c_jeuDeCartes
{
    public:
        c_jeuDeCartes();
        ~c_jeuDeCartes();
        c_jeuDeCartes(c_jeuDeCartes &j);
        c_jeuDeCartes(int tailleJeu);
        void melangerJeu();
        void rangerJeu();
        c_carte distribuer();
        void setTailleJeu(int tailleJeu);
        int getCartesDistribuees();

    protected:

    private:
        int m_tailleJeu;
        int m_cartesDistribuees;
        c_carte *m_tabJeu;
};

#endif // C_JEUDECARTES_H
