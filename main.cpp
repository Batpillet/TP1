#include <iostream>
#include <Sommet.h>
#include <string>
#include <fstream>
#include <Sommet.h>
#include <Graphe.h>
#include <Arete.h>

int main()
{
    std::ifstream influence("influence.txt");

    Graphe G;
    std::vector<Arete*>matriceArete;

    G.RecupFichier(influence, &matriceArete);
    G.affiche(matriceArete);

    return 0;
}
