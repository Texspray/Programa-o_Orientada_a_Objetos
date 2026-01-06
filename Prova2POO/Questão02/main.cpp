#include <iostream>
#include "Data.h"
#include "Ingresso.h"

using namespace std;

int main()
{
    //datas
    Data d(25, 12, 2021);
    Data d2(15, 6 ,2022);
    //criando ingressos
    Ingresso i("Carvalho", d, 200);
    Ingresso i2("Edson", d2, 200);
    //exibindo valores
    i.exibir();
    i.ImprimeValor();
    i2.exibir();
    return 0;
}
