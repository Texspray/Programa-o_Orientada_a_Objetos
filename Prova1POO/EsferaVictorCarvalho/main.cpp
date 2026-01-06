#include <iostream>
#include "Esfera.h"
using namespace std;

int main()
{
    Esfera e1;
    Esfera e2(5, 10, 10, 10);
    Esfera *e3 = new Esfera();
    //define raio
    e1.setRaio(4);
    //imprime raio;
    e1.imprimeRaio();
    //imprime superficie e volume;
    e1.imprimeAreaVolume();
    //define centro
    e1.setCentroEsfera(10, 10, 10);
    //imprime centro
    e1.imprimeCentro();
    //compara volume
    e2.compara(e1);
    //objeto dinamico
    cout<<"\n\n";
    e3->setRaio(5);
    e3->compara(e1);

    return 0;
}
