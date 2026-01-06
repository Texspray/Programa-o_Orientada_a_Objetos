#include <iostream>
#include "Fatorial.h"
using namespace std;

Fatorial::Fatorial(){
    n = 0;
    i = 1;
    calculo = 1;
}

Fatorial::Fatorial(int a){
    n = a;
    i = 1;
    calculo = 1;
}

ResultadoF::ResultadoF(int a): Fatorial(a){
}

int Fatorial::calcular(){
    i = n;
    calculo = 1;
    while(i>1){
        calculo*=i--;
    }
    cout<< calculo << endl;
    i = 1;
    return calculo;

}
int Fatorial::setCalcular(int a){
    n = a;
    i = n;
    calculo = 1;
    while(i>1){
        calculo*=i--;
    }
    cout<< calculo << endl;
    i = 1;
    return calculo;



}
void Fatorial::exibir(){
    i = n;
    while(i>1){
        cout<<i<<"x";
        i--;
    }


}
