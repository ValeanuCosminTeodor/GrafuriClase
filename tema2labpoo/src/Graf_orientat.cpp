#include "Graf_orientat.h"

Graf_orientat::Graf_orientat()
{
    A.setA(nullptr);
    A.setCol(0);
    A.setRow(0);
    nr_noduri=0;
}
Graf_orientat::~Graf_orientat()
{
    A.~Matrice();
    nr_noduri=0;
}
Graf_orientat::Graf_orientat(const Graf_orientat &G)
{
    this->A=G.A;
    this->nr_noduri=G.nr_noduri;
}
Graf_orientat& Graf_orientat::operator=(const Graf_orientat &G)
{
    this->~Graf_orientat();
    this->A=G.A;
    this->nr_noduri=G.nr_noduri;
}
std::ostream &operator<<(std::ostream &out, Graf_orientat &f1)
{
    out<<f1.A;
    return out;
}
std::istream &operator>>(std::istream &in, Graf_orientat &f1)
{
    in>>f1.A;
    f1.nr_noduri=f1.A.getRow();
    return in;
}
int Graf_orientat::nr_muchii()
{
    int sum=0;
    for (int i=0;i<A.getCol();i++)
        for (int j=0;j<A.getRow();j++)
            sum+=A(i,j);
    return sum;
}
void Graf_orientat::functie(std::vector<Graf_orientat> ve)
{
    std::cout << "Cate elemente sa aiba vectorul? ";
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        Graf_orientat aux;
        std::cin >> aux;
        ve.push_back(aux);
    }
    for (int i = 0; i < n; i++) {
        std::cout << ve[i];
    }

}
