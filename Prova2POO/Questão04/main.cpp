#include <iostream>
#include "Poligno.h"

using namespace std;


double area(Poligno &p){
    return p.area();

}
int main()
{
    Triangulo t1;
    Triangulo t2(2, 10);
    Retangulo r(2,3);
    Poligno *poli= &t1;
    poli->setAltura(4);
    poli->setComprimento(2);
    cout << area(t2) << endl;
    cout << area(*poli) << endl;
    cout << area(r) << endl;
    return 0;
}
