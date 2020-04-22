#include "Lista.h"

Lista::Lista()
{
    this->l=nullptr;
    this->nrnod=0;
}
Lista::Lista(Vector *l,int nrnod)
{
    this->nrnod=nrnod;
    this->l=new Vector [nrnod];
    for (int i=0;i<nrnod;i++)
    {
        this->l[i]=l[i];
    }
}
Lista::~Lista()
{
    for (int i=0;i<nrnod;i++)
        l[i].~Vector();
    this->nrnod=0;
    delete [] l;
}
Lista::Lista(const Lista& a)
{
    this->nrnod=a.nrnod;
    l=new Vector [nrnod];
    for (int i=0;i<nrnod;i++)
        l[i]=a.l[i];
}
std::istream& operator >>(std::istream& in,Lista& f1)
{
    in>>f1.nrnod;
    f1.l=new Vector [f1.nrnod];
    for (int i=0;i<f1.nrnod;i++)
        in>>f1.l[i];
    return in;
}
 std::ostream& operator <<(std::ostream& out,Lista& f1)
{
    for (int i=0;i<f1.nrnod;i++)
        out<<"Numarul de vecini:"<<f1.l[i]<<std::endl;
    return out;
}
Lista& Lista::operator=(const Lista &lst)
{
    this->~Lista();
    this->nrnod=lst.nrnod;
    this->l=new Vector [nrnod];
    for (int i=0;i<nrnod;i++)
        this->l[i]=lst.l[i];
}
void Lista::Setl(Vector *l)
{
    Lista::l=l;
}
void Lista::Setnrnod(int nrnod)
{
    Lista::nrnod=nrnod;
}
int Lista::Getnrnod()
{
    return nrnod;
}
Vector Lista::operator[](int i)
{
    return l[i];
}
