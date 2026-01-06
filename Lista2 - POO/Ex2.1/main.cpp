#include <iostream>
#include "Imagina.h"

using namespace std;

int main()
{
    Imagina z1(4, 4);
    Imagina z2(4, 4);
    Imagina z3 = z1 + z2;
    z3.mostrar();
    Imagina z4 = z1 - z3;
    z4.mostrar();


    return 0;
}
