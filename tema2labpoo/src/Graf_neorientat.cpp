#include "Graf_neorientat.h"
#include "Exceptiemuchii.h"

Graf_neorientat::Graf_neorientat()
{
    L.Setl(nullptr);
    L.Setnrnod(0);
    nr_noduri=0;
}
Graf_neorientat::~Graf_neorientat()
{
    L.~Lista();
    nr_noduri=0;
}
Graf_neorientat::Graf_neorientat(const Graf_neorientat &G)
{
    this->L=G.L;
    this->nr_noduri=G.nr_noduri;
}
Graf_neorientat& Graf_neorientat::operator=(const Graf_neorientat &G)
{
    this->~Graf_neorientat();
    this->L=G.L;
    this->nr_noduri=G.nr_noduri;
}
std::ostream &operator<<(std::ostream &out, Graf_neorientat &f1)
{
    out<<f1.L;
    return out;
}
std::istream &operator>>(std::istream &in, Graf_neorientat &f1)
{
    in>>f1.L;
    f1.nr_noduri=f1.L.Getnrnod();
    return in;
}
int Graf_neorientat::nr_muchii()
{
    int sum=0;
    for (int i=0;i<L.Getnrnod();i++)
        sum+=L[i].getdim();
    if ((sum/2)>(L.Getnrnod()*(L.Getnrnod()-1)/2))
        throw Exceptiemuchii();
    return (sum/2);
}
void Graf_neorientat::functie(std::vector<Graf_neorientat> ve)
{
    std::cout << "Cate elemente sa aiba vectorul? ";
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        Graf_neorientat aux;
        std::cin >> aux;
        ve.push_back(aux);
    }
    for (int i = 0; i < n; i++) {
        std::cout << ve[i];
    }
}
void Graf_neorientat::vectortati (int radacina)
{
    int vfcurent,ok=1;
    std::vector <int> tati(nr_noduri,-2);
    std::vector <int> aux;
    tati[radacina]=-1;
    vfcurent=radacina;
    aux.push_back(vfcurent);
    while (ok==1)
    {
        for (int i=0; i<L[vfcurent].getdim(); i++)
        {
            if (tati[L[vfcurent][i]]==-2)
            {
                tati[L[vfcurent][i]]=vfcurent;
                aux.push_back(L[vfcurent][i]);
            }
        }
        aux.erase (aux.begin());
        if(aux.size()!=0)
            vfcurent=aux[0];
        else
            ok=0;
    }
    for (int i=0; i<tati.size(); i++)
        std::cout<<tati[i]<<" ";
}
