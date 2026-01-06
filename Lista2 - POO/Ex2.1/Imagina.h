#ifndef IMAGINA_H_INCLUDED
#define IMAGINA_H_INCLUDED

class Imagina{
    int x, y;
public:
    Imagina();
    Imagina(int, int);
    void mostrar();
    Imagina operator+ (const Imagina &z);
    Imagina operator- (const Imagina &z);
    Imagina operator* (const Imagina &z);
    Imagina operator/ (const Imagina &z);
};



#endif // IMAGINA_H_INCLUDED
