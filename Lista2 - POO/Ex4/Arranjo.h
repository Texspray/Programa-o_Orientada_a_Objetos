#ifndef ARRANJO_H_INCLUDED
#define ARRANJO_H_INCLUDED

class Fatorial{
    int n;
    int i;
    int calculo;
public:
    Fatorial();
    Fatorial(int);
    int calcular();
    int setCalcular(int);
    void exibir();
};

class Arranjo: public Fatorial{
    int n;
    int A;
public:
    Arranjo(int);
    Arranjo(int, int);
    float getArranjo();
    void exibirArranjo();
};


#endif // ARRANJO_H_INCLUDED
