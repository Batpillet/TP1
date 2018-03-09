#ifndef ARETE_H
#define ARETE_H


class Arete
{
    public:
        Arete(Sommet A, Sommet B);
        ~Arete();

        Sommet Getm_A() { return m_A; }
        void Setm_A(Sommet val) { m_A = val; }
        Sommet Getm_B() { return m_B; }
        void Setm_B(Sommet val) { m_B = val; }

    protected:

    private:
        Sommet m_A;
        Sommet m_B;
};

#endif // ARETE_H
