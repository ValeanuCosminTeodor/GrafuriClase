#include <iostream>

class Matrice
{
    int **a;
    int row;
    int col;
public:
    Matrice();
    Matrice(int nr1, int nr2);
    Matrice(const Matrice &mat2);
    ~Matrice();
    int **getA();
    void setA(int **a);
    int getRow();
    void setRow(int row);
    int getCol();
    void setCol(int col);
    int operator()(int i,int j);
    Matrice &operator=(const Matrice &mat1);
    friend std::ostream &operator<<(std::ostream &out, const Matrice &f1);
    friend std::istream &operator>>(std::istream &in, Matrice &f1);
};
