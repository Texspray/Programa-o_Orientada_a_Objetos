#include <iostream>
#include "Ponto.h"
using namespace std;

int main()
{
    Ponto p2(4, 3);
    Ponto p1(5,13);
    Ponto p3(&p1);
    Ponto *p4 = new Ponto();
    p3.setPonto(5, 13);
    *p4 = p3 + p1;
    cout << "p4.x: " << p4->getX() << "\np4.y: " << p4->getY() << endl;
    return 0;
}
