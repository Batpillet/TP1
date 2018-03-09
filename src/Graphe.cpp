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

void Graphe::RecupFichier(std::ifstream & influence, std::vector<Arete*> m_matriceArete)
{
    std::string a, b;
    Sommet A, B;
    while (influence >> a >> b)
    {
        A.Setm_nom(a);
        B.Setm_nom(b);
        Arete T(A,B);
        m_matriceArete.push_back(&T);
    }
    std::cout << m_matriceArete.size() << std::endl;
    for(unsigned int i(0) ; i<m_matriceArete.size() ; ++i)
    {
        std::cout << i << std::endl;
        std::cout << m_matriceArete[i]->Getm_A().Getm_nom() << std::endl;
        std::cout << m_matriceArete[i]->Getm_B().Getm_nom() << std::endl;
    }
}

void Graphe::affiche(std::vector<Arete*> m_matriceArete)
{
    for(unsigned int i(0) ; i<m_matriceArete.size() ; ++i)
    {
        std::cout << m_matriceArete[i]->Getm_A().Getm_nom() << std::endl;
        std::cout << m_matriceArete[i]->Getm_B().Getm_nom() << std::endl;
    }
}
