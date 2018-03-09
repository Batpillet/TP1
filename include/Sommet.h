#ifndef SOMMET_H
#define SOMMET_H


class Sommet
{
    public:
        Sommet();
        Sommet(std::string nom);
        ~Sommet();

        std::string Getm_nom() { return m_nom; }
        void Setm_nom(std::string val) { m_nom = val; }

    protected:

    private:
        std::string m_nom;
};

#endif // SOMMET_H
