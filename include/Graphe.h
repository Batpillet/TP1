#ifndef GRAPHE_H
#define GRAPHE_H


class Graphe
{
    public:
        Graphe(/*int ordre, std::vector<Arete*> matriceArete, std::vector<Sommet*> matriceSommet*/);
        ~Graphe();

        int Getordre() { return m_ordre; }
        void Setordre(int val) { m_ordre = val; }
        std::vector<Arete*> GetmatriceArete() { return m_matriceArete; }
        void SetmatriceArete(std::vector<Arete*> val) { m_matriceArete = val; }
        std::vector<Sommet*> GetmatriceSommet() { return m_matriceSommet; }
        void SetmatriceSommet(std::vector<Sommet*> val) { m_matriceSommet = val; }

    protected:

    private:
        int m_ordre;
        std::vector<Arete*> m_matriceArete;
        std::vector<Sommet*> m_matriceSommet;
};

#endif // GRAPHE_H
