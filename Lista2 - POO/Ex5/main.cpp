#include <iostream>
#include "Ponto2D.h"

using namespace std;

int main()
{
    Ponto p1(2, 2);
    Ponto p2(9, 1);
    cout << p1.distanciaPontos(p2) << endl;

    return 0;
}
