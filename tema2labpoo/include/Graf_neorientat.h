#include <iostream>
#include <vector>
#include "Lista.h"
#include "Graf.h"

class Graf_neorientat : public Graf
{
    Lista L;
public:
    Graf_neorientat();
    Graf_neorientat(int nr_noduri,Lista L):
    Graf(nr_noduri){
     this->L = L;
    }
    int nr_muchii();
    ~Graf_neorientat();
    Graf_neorientat(const Graf_neorientat &G);
    Graf_neorientat &operator=(const Graf_neorientat &G);
    friend std::ostream &operator<<(std::ostream &out, Graf_neorientat &f1);
    friend std::istream &operator>>(std::istream &in, Graf_neorientat &f1);
    void functie(std::vector<Graf_neorientat> ve);
    void vectortati (int radacina);
};


