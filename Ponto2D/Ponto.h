#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED

class Ponto{
    int x, y;
public:
    Ponto();
    Ponto(double, double);
    Ponto(Ponto *p);
    void setPonto(double, double);
    int getX();
    int getY();
    void movimentaPonto();
    void movimentaPonto(double, double);
    void movimentaPonto(Ponto *p);
    int eIgual(Ponto p);
    Ponto operator+ (const Ponto &p);
};


#endif // PONTO_H_INCLUDED
