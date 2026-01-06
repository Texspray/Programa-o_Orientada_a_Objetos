#ifndef PONTO2D_H_INCLUDED
#define PONTO2D_H_INCLUDED


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
    float distanciaPontos(Ponto p);
    Ponto operator+ (const Ponto &p);
};

class Pixel: public Ponto{
    char cor;
    bool a;
public:
    Pixel();
    Pixel(char, bool, double, double);

};



#endif // PONTO2D_H_INCLUDED
