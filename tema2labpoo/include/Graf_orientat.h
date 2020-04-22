#include <iostream>
#include <vector>
#include "Matrice.h"
#include "Graf.h"

class Graf_orientat : public Graf
{
    Matrice A;
public:
    Graf_orientat();
    Graf_orientat(int nr_noduri,Matrice A):
    Graf(nr_noduri){
     this->A = A;
    }
    int nr_muchii();
    ~Graf_orientat();
    Graf_orientat(const Graf_orientat &G);
    Graf_orientat &operator=(const Graf_orientat &G);
    friend std::ostream &operator<<(std::ostream &out, Graf_orientat &f1);
    friend std::istream &operator>>(std::istream &in, Graf_orientat &f1);
    void functie(std::vector<Graf_orientat> ve);
};
