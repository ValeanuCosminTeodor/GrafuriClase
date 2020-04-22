#include <iostream>
#include "Vector.h"

class Lista
{
    Vector *l;
    int nrnod;
public:
    Lista();
    Lista(Vector *l,int nrnod);
    ~Lista();
    void Setl(Vector *l);
    void Setnrnod(int nrnod);
    int Getnrnod();
    Vector operator[](int i);
    Lista(const Lista& a);
    friend std::istream& operator >>(std::istream& in,Lista& f1);
    friend std::ostream& operator <<(std::ostream& out,Lista& f1);
    Lista &operator=(const Lista &vec);
};
