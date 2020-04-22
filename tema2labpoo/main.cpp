#include <iostream>
#include "Graf_neorientat.h"
#include "Exceptiemuchii.h"

int main()
{
    Graf_neorientat G1;
    std::cin>>G1;
    std::cout<<G1;
    try
    {
        std::cout<<G1.nr_muchii()<<std::endl;
    }
    catch (Exceptiemuchii&x)
    {
        std::cout<<x.what()<<std::endl<<"Problema";
    }
    G1.vectortati(2);
    return 0;
}
