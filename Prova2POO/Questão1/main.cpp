#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    //CRIANDO OBJETO
    Data d(24, 8, 1999);
    //OBJETO TESTE PARA VALORES FORA DO INTERVALO
    Data d2(31, 14, -10);
    d2.exibirDia();
    d2.exibirMes();
    d2.exibirAno();
    d.exibirDia();
    d.exibirMes();
    d.exibirAno();


    return 0;
}
