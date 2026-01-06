#include "Carro.h"
#include <iostream>

using namespace std;

Carro::Carro(){
    tanque = 0;
    consome = 15;
    posicao = 0;
}

Carro::Carro(float g): tanque(g){
    if(g>50)
    {
        cout << "\nO tanque chegou no limite: 50 litros" << endl;
        tanque = 50;
    }
    consome = 15;
    posicao = 0;
}

Carro::Carro(float g, float c): tanque(g), consome(c) {
    if(g>50)
    {
        cout << "\nO tanque chegou no limite: 50 litros" << endl;
        tanque = 50;
    }
    posicao = 0;
}

void Carro::abastecer(float g){
    tanque+=g;
    if(tanque>50)
    {
        cout << "\nO tanque chegou no limite: 50 litros" << endl;
        tanque = 50;
    }
}

void Carro::moverCarro(float d){
    if (d>tanque*consome)
        cout << "\nO carro nao pode se mover essa quantidade, coloque mais gasolina" << endl;
    else
    {
        this->tanque = getCombustivel() - (d/consome);
        this->posicao = getDistancia() + d;
        cout << "\nO carro se moveu ate: " << posicao << " metros" << endl;
        cout << "\nO carro tem no tanque: " << getCombustivel()<< " litros" << endl;

    }


}

float Carro::getDistancia(){
    return posicao;

}
float Carro::getCombustivel(){
    return tanque;
}
