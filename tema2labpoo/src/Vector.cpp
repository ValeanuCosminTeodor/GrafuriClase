#include "Vector.h"

Vector::Vector()
{
    v=nullptr;
    this->dim=0;
}

Vector::Vector(int *v,int dim)
{
    this->dim=dim;
    this->v=new int [dim];
    for (int i=0;i<dim;i++)
        this->v[i]=v[i];
}

Vector::~Vector()
{
    delete [] v;
    this->dim=0;
}
Vector::getdim()
{
    return this->dim;
}
Vector::Vector(const Vector& a)
{
    dim=a.dim;
    v=new int [dim];
    for (int i=0;i<dim;i++)
        v[i]=a.v[i];
}
std::istream& operator >>(std::istream& in,Vector& f1)
{
    in>>f1.dim;
    f1.v=new int [f1.dim];
    for (int i=0;i<f1.dim;i++)
        in>>f1.v[i];
    return in;
}
std::ostream& operator <<(std::ostream& out,Vector& f1)
{
    for (int i=0;i<f1.dim;i++)
        out<<f1.v[i]<<" ";
    return out;
}
Vector& Vector::operator=(const Vector &vec)
{
    this->~Vector();
    dim=vec.dim;
    v=new int [dim];
    for (int i=0;i<dim;i++)
        v[i]=vec.v[i];
}
int const& Vector::operator[] (int const& index) const
{
    return v[index];
}
