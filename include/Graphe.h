#ifndef GRAPHE_H
#define GRAPHE_H
#include <fstream>
#include <vector>
#include <Arete.h>

class Graphe
{
    public:
        Graphe();
        ~Graphe();

        int Getordre() { return m_ordre; }
        void Setordre(int val) { m_ordre = val; }
        std::vector<Arete*> GetmatriceArete() { return m_matriceArete; }
        void SetmatriceArete(std::vector<Arete*> val) { m_matriceArete = val; }
        std::vector<Sommet*> GetmatriceSommet() { return m_matriceSommet; }
        void SetmatriceSommet(std::vector<Sommet*> val) { m_matriceSommet = val; }

        void RecupFichier(std::ifstream & influence, std::vector<Arete*> *m_matriceArete);
        void affiche(std::vector<Arete*> m_matriceArete);

    protected:

    private:
        int m_ordre;
        std::vector<Arete*> m_matriceArete;
        std::vector<Sommet*> m_matriceSommet;
};

#endif // GRAPHE_H
