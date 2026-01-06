#include <iostream>
#include "Carro.h"

using namespace std;

int main()
{

    Carro c1(20);
    Carro c2(30);
    Carro c3(30, 10);
    cout << "\nCarro 1 e 2 (Comandos da prova) \n" << endl;
    //movendo primeiro carro
    c1.moverCarro(200);
    //movendo segundo carro;
    c2.moverCarro(400);
    cout << "\n\n\n---------Carro 3 com todos os comandos---------- \n" << endl;

    //movendo carro 3, com consumo de 10 km/litro
    c3.moverCarro(100);
    c3.moverCarro(200);
    c3.abastecer(51);
    c3.moverCarro(500);





    return 0;
}
