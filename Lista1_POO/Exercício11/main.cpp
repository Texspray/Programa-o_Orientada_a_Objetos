#include <iostream>
#include "Circulo.h"
using namespace std;


int main()
{
    Circulo c;
    c.setRaio(10);
    c.aumentaRaio(150);
    c.getValorRaio();
    c.getAreaCirculo();
    c.getCircunferencia();
    return 0;
}
