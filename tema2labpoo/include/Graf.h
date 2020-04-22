#include <iostream>

class Graf
{
protected:
    int nr_noduri;
public:
    Graf();
    Graf(int nr_noduri);
    Graf(const Graf &G);
    virtual int nr_muchii()=0;
    virtual ~Graf();
    Graf &operator=(const Graf &G);
    friend std::ostream &operator<<(std::ostream &out, const Graf &f1);
    friend std::istream &operator>>(std::istream &in, Graf &f1);
};



