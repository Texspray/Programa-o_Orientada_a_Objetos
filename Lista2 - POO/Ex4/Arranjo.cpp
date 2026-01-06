#include <iostream>
#include "Arranjo.h"
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


int Fatorial::calcular(){
    i = n;
    calculo = 1;
    while(i>1){
        calculo*=i--;
    }
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

Arranjo::Arranjo(int a, int n): Fatorial(a){
    this->n = n;
    A = (calcular()/setCalcular(a-n));


}
float Arranjo::getArranjo(){
    return A;
}
void Arranjo::exibirArranjo(){
    cout << getArranjo() << endl;
}

