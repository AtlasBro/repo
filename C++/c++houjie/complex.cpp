#include <iostream>
#include "complex.h"

using namespace std;

ostream&
operator<<(ostream &os, const complex &x)
{
    return os << '(' << real(x) << ',' << imag(x) << ')';
}

int main()
{
    complex c1(2, 1);
}