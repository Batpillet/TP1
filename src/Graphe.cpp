#include "Graphe.h"
#include <vector>
#include <fstream>
#include <iostream>

Graphe::Graphe(/*int ordre, std::vector<Arete*> matriceArete, std::vector<Sommet*> matriceSommet*/)
    :m_ordre(0), m_matriceArete(), m_matriceSommet()
{
    //ctor
}

Graphe::~Graphe()
{
    //dtor
}

void Graphe::RecupFichier(std::ifstream & influence, std::vector<Arete*> *m_matriceArete)
{
    std::string a, b;

    while (influence >> a >> b)
    {
        if((a[0] >= 'A' && a[0] <= 'Z') || (a[0] >= 'a' && a[0] <= 'z') && (b[0] >= 'A' && b[0] <= 'Z') || (b[0] >= 'a' && b[0] <= 'z'))
        {
            Sommet *A = new Sommet(a);
            Sommet *B = new Sommet(b);
            m_matriceArete->push_back(new Arete(A,B));
        }
        else
            std::cout << "Erreur d'ecriture, reessayez." << std::endl;
    }
}

void Graphe::affiche(std::vector<Arete*> m_matriceArete)
{
    for(unsigned int i(0) ; i<m_matriceArete.size() ; ++i)
    {
        std::cout << m_matriceArete[i]->Getm_A().Getm_nom() << " influence " << m_matriceArete[i]->Getm_B().Getm_nom() << std::endl;
    }
}
