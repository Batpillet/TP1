#include "Sommet.h"
#include <string>

Sommet::Sommet()
:m_nom()
{
    //ctor
}

Sommet::Sommet(char nom, int numero)
:m_nom(nom), m_numero(numero)
{
    //ctor
}

Sommet::~Sommet()
{
    //dtor
}
