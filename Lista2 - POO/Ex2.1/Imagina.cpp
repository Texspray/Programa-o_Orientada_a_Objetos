#include <iostream>
#include "Imagina.h"
using namespace std;

Imagina::Imagina(){
    x = 0;
    y = 0;
}

Imagina::Imagina(int x, int y): x(x), y(y){
}

void Imagina::mostrar(){
    cout<< x << endl;
    cout << y << endl;
}
Imagina Imagina::operator+ (const Imagina &z){
    Imagina z1;
    z1.x = z.x + this->x;
    z1.y = z.y + this->y;
    return z1;
}
Imagina Imagina::operator- (const Imagina &z){
    Imagina z1;
    z1.x = -z.x + this->x;
    z1.y = -z.y + this->y;
    return z1;
}
