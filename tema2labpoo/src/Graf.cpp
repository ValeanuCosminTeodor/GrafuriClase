#include "Graf.h"

Graf::Graf()
{
    nr_noduri=0;
}
Graf::Graf(int nr_noduri)
{
    this->nr_noduri=nr_noduri;
}
Graf::~Graf()
{
    nr_noduri=0;
}
Graf::Graf(const Graf& G)
{
    this->nr_noduri=G.nr_noduri;
}
std::istream& operator >>(std::istream& in,Graf& f1)
{
    in>>f1.nr_noduri;
    return in;
}
std::ostream& operator <<(std::ostream& out,const Graf& f1)
{
    out<<"Numarul de noduri este "<<f1.nr_noduri<<std::endl;
    return out;
}
Graf &Graf::operator=(const Graf &G)
{
    this->~Graf();
    this->nr_noduri=G.nr_noduri;
    return *this;
}
