#ifndef FATORIAL_H_INCLUDED
#define FATORIAL_H_INCLUDED

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

class ResultadoF: public Fatorial{
public:
    ResultadoF(int);
};


#endif // FATORIAL_H_INCLUDED
