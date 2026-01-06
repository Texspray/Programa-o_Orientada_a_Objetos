#include "Ingresso.h"
#include "Data.h"
#include <iostream>

using namespace std;

Ingresso::Ingresso(){
    nome = "";
    data[0] = 27;
    data[1] = 8;
    data[2] = 2021;
    valor = 0;
}

Ingresso::Ingresso(string n, Data& d, float v){
    nome = n;
    data[0] = d.getDia();
    data[1] = d.getMes();
    data[2] = d.getAno();
    valor = v;
}

float Ingresso::getValor(){
    return valor;
}

void Ingresso::exibir(){
    cout << nome << endl;
    cout << data[0] << endl;
    cout << data[1] << endl;
    cout << data[2] << endl;
    cout << valor << endl;
}

void Ingresso::ImprimeValor(){
    cout << "O valor pago eh: "<< valor << endl;
}
