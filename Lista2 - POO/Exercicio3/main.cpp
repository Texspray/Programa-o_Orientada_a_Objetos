#include <iostream>
#include "Fatorial.h"

using namespace std;

int main()
{

    ResultadoF f(3);
    Fatorial f2(10);
    f2.calcular();
    f.setCalcular(10);
    f.exibir();
    return 0;
}
