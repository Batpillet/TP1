#include "Sommet.h"
#include <string>

Sommet::Sommet()
:std::string m_nom("")
{
    //ctor
}

Sommet::Sommet(std::string nom)
:std::string m_nom(nom)
{
    //ctor
}

Sommet::~Sommet()
{
    //dtor
}
