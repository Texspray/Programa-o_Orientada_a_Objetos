#include "Esfera.h"
#include <iostream>

using namespace std;

Esfera::Esfera(){
    raio = 0;
    x = 0;
    y = 0;
    z = 0;
    area = 0;
    volume = 0;
}
Esfera::Esfera(float r, int x, int y, int z){
    this ->raio = r;
    this->x = x;
    this->y = y;
    this->z = z;
    areaSuperficie(raio);
    volumeEsfera(raio);
}

float Esfera::areaSuperficie(int r){
    area = (r*r*4*3.14);
    return area;
}

float Esfera::volumeEsfera(int r){
    volume = ((4*r*r*r*3.14)/3);
    return volume;
}

void Esfera::setRaio(float n){
    this->raio = n;
    areaSuperficie(raio);
    volumeEsfera(raio);

}
float Esfera::getVolume(){
    return volume;
}

void Esfera::aumentaRaio(int n){
    this->raio = (n/100)*raio;
}
void Esfera::setCentroEsfera(int x, int y, int z){
    this->x = x;
    this->y = y;
    this->z = z;
}
void Esfera::imprimeRaio(){
    std::cout << "\nO raio eh: " << raio << endl;
}

void Esfera::imprimeCentro(){
    std::cout <<"\nx: " << x << "\ny: " << y << "\nz: " << z << endl;
}
void Esfera::imprimeAreaVolume(){
    cout << "\nA area da esfera eh: "<< area <<"\nO volume da esfera eh: " << volume << endl;
}
void Esfera::compara(Esfera &p){
    if (this -> volume > p.getVolume())
        cout << "O volume eh maior" << endl;
    else
        cout << "O volume nao eh maior" << endl;
}

