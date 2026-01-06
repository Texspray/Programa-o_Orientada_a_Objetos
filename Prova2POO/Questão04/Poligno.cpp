#include <iostream>
#include "Poligno.h"

using namespace std;

Poligno::Poligno(int h, int l){
    this->altura = h;
    this->comprimento = l;
}
void Poligno::setAltura(int a){
        this->altura = a;
}
void Poligno::setComprimento(int l){
    this->comprimento = l;
}
int Poligno::getComprimento(){
    return comprimento;
}
int Poligno::getAltura(){
    return altura;
}
double Poligno::area(){
    return 1;
}
Triangulo::Triangulo(): Poligno(1,1){
}
Triangulo::Triangulo(int h, int l): Poligno(h, l){
}

double Triangulo::area(){
    return (altura*comprimento)/2;
}
Retangulo::Retangulo(): Poligno(1,1){

}

Retangulo::Retangulo(int h, int l): Poligno(h, l){

}

double Retangulo::area(){
    return (getComprimento()*getAltura());
}


