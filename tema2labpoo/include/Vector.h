#include <iostream>

class Vector
{
    int *v;
    int dim;
public:
    Vector();
    Vector(int *v,int dim);
    ~Vector();
    int getdim();
    Vector(const Vector& a);
    friend std::istream& operator >>(std::istream& in,Vector& f1);
    friend std::ostream& operator <<(std::ostream& out,Vector& f1);
    Vector &operator=(const Vector &vec);
    int const& operator[] (int const& index) const;
};


