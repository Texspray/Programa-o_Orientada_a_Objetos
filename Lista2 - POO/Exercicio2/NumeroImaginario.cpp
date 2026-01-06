#include <iostream>
#include "NumeroImaginario.h"

using namespace std;

NumeroImaginario::NumeroImaginario(){
    x = 0;
    y = 0;
}
NumeroImaginario::NumeroImaginario(int x, int y): x(x), y(y){
}
void NumeroImaginario::mostrar(){
    cout << x << endl;
    count << y << endl;
}
NumeroImaginario NumeroImaginario::operator+ (const NumeroImaginario &z){
    NumeroImaginario z1;
    p1.x = z.x + this->x;
    p1.y = z.y + this->y;
    return z1;
}
