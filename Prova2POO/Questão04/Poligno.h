#ifndef POLIGNO_H_INCLUDED
#define POLIGNO_H_INCLUDED

class Poligno{
protected:
    int comprimento, altura;
public:
    Poligno(int, int);
    void setComprimento(int);
    void setAltura(int);
    int getComprimento();
    int getAltura();
    virtual double area();

};

class Triangulo: public Poligno{
public:
    Triangulo();
    Triangulo(int, int);
    double area();

};
class Retangulo: public Poligno{
public:
    Retangulo ();
    Retangulo (int, int);
    double area();

};

#endif // POLIGNO_H_INCLUDED
