#include "Matrice.h"

Matrice::Matrice()
{
    row=0;
    col=0;
    this->a=nullptr;
}
Matrice::Matrice(int nr1, int nr2)
{
    row = nr1;
    col = nr2;
    a = new int *[row];
    for (int i = 0; i < row; i++)
        a[i] = new int[col];
}

Matrice::Matrice(const Matrice &mat2)
{
    col = mat2.col;
    row = mat2.row;
    a = new int *[row];
    for (int i = 0; i < row; i++)
        a[i] = new int[col];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            a[i][j] = mat2.a[i][j];
}

Matrice::~Matrice()
{
    for (int i = 0; i < row; i++)
        delete[] a[i];
    delete[] a;
}

std::ostream &operator<<(std::ostream &out, const Matrice &f1)
{
    for (int i = 0; i < f1.row; i++) {
        for (int j = 0; j < f1.col; j++)
            out << f1.a[i][j] << " ";
        out << '\n';
    }
    out << '\n';
    return out;
}

std::istream &operator>>(std::istream &in, Matrice &f1)
{
    in>>f1.row>>f1.col;
     f1.a = new int *[f1.row];
    for (int i = 0; i < f1.row; i++)
        f1.a[i] = new int[f1.col];
    for (int i = 0; i < f1.row; i++)
        for (int j = 0; j < f1.col; j++) {
            std::cout << "mat[" << i+1 << "][" << j+1 << "]=";
            in >> f1.a[i][j];
        }
    return in;
}
Matrice &Matrice::operator=(const Matrice &mat1)
{
    this->~Matrice();
    row = mat1.row;
    col = mat1.col;
    a = new int *[row];
    for (int i = 0; i < row; i++)
        a[i] = new int[col];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            a[i][j] = mat1.a[i][j];

    return *this;

}
int **Matrice::getA()
{
    return a;
}
void Matrice::setA(int **a) {
    Matrice::a = a;
}
int Matrice::getRow()
{
    return row;
}
void Matrice::setRow(int row) {
    Matrice::row = row;
}
int Matrice::getCol()
{
    return col;
}
void Matrice::setCol(int col) {
    Matrice::col = col;
}
int Matrice::operator()(int i, int j)
{
    return a[i][j];
}
