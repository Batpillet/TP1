#ifndef SOMMET_H
#define SOMMET_H
#include <string>

class Sommet
{
    public:
        Sommet();
        Sommet(char nom, int numero);
        ~Sommet();

        char Getm_nom() { return m_nom; }
        void Setm_nom(char val) { m_nom = val; }

    private:
        char m_nom;
        int m_numero;
};

#endif // SOMMET_H
