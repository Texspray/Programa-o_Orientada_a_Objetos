#include "Circulo.h"
#include <iostream>
using namespace std;


void Circulo::calculaArea(int n){
    area = 2*3.14*n*n;

}
void Circulo::calculaCircunferencia(int n){
    circunferencia = 2*3.14*n;

}
void Circulo::setRaio(int n){
    raio = n;
    calculaArea(n);
    calculaCircunferencia(n);

}
void Circulo::aumentaRaio(int n){
    raio = raio*(n*0.01);

}
void Circulo::getValorRaio(){
    cout << "O valor do raio eh: " << raio << endl;

}
void Circulo::getAreaCirculo(){
    cout << "O valor da area eh: " << area << endl;


}
void Circulo::getCircunferencia(){
    cout << "O valor da circunferencia eh: " << circunferencia << endl;


}
