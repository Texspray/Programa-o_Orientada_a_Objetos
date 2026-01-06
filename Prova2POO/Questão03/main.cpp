#include <iostream>
#include "IngessoVip.h"
using namespace std;

void Imprime(Ingresso &i){
    i.ImprimeValor();
}

int main()
{
    //criando data do evento
    Data d(25, 8, 1999);
    //criando objetos ingresso
    Ingresso i("Carvalho", d, 310);
    Ingresso i2("Edson", d, 310);
    //criando ingreeso vip e imprimindo seu valor
    IngressoVip vp(10, i2);
    Imprime(vp);
    return 0;
}
