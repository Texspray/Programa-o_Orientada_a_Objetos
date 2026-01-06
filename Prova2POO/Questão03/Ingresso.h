#ifndef INGRESSO_H_INCLUDED
#define INGRESSO_H_INCLUDED
#include "Data.h"
#include <string>

using namespace std;

class Ingresso{
    string nome;
    int data[3];
protected:
    float valor;
public:
    Ingresso();
    Ingresso(string, Data& d, float);
    Data d;
    void exibir();
    float getValor();
    virtual void ImprimeValor();


};


#endif // INGRESSO_H_INCLUDED
