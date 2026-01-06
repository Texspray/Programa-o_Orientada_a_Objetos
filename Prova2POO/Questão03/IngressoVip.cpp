#include <iostream>
#include "IngessoVip.h"

using namespace std;

IngressoVip::IngressoVip(int v, Ingresso &i){
    valorAdcional = v;
    this->valor = i.getValor() + valorAdcional;
}

void IngressoVip::ImprimeValor(){

    cout << "O valor pago eh: "<< this->valor << endl;
}

