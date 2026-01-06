#include "Ponto.h"
#include <iostream>

using namespace std;

Ponto::Ponto(){
    x = 0;
    y = 0;
}

Ponto::Ponto(double x, double y): x(x), y(y){}

Ponto::Ponto(Ponto *p){
    this->x = p->getX();
    this->y = p->getY();
}

int Ponto::getX(){
    return(this->x);
}

int Ponto::getY(){
    return(this->y);
}

int Ponto::eIgual(Ponto p){
    if ((this->x==p.getX()) && (this->y==p.getY())){
        cout << "\nOs pontos sao iguais\n" << endl;
        return 1;
    }
    else
        cout << "\nOs pontos nao sao iguais\n" << endl;
        return 0;
}

void Ponto::setPonto(double x, double y){
    this -> x = x;
    this -> y = y;
}
void Ponto::movimentaPonto(){
    this->x=0;
    this->y=0;
}
void Ponto::movimentaPonto(double x, double y){
    this->x = x;
    this-> y = y;
}
void Ponto::movimentaPonto(Ponto *p){
    this->x = p->getX();
    this->y = p->getY();
}

Ponto Ponto::operator+ (const Ponto &p){
    Ponto p1;
    p1.x = p.x + this->x;
    p1.y = p.y + this->y;
    return p1;
}
