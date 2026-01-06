#ifndef ESFERA_H_INCLUDED
#define ESFERA_H_INCLUDED

class Esfera{
    float areaSuperficie(int);
    float volumeEsfera(int);
    int x, y, z;
    float raio, area, volume;
public:
    Esfera();
    Esfera(float, int, int, int);
    void setRaio(float);
    void aumentaRaio(int);
    void setCentroEsfera(int, int, int);
    void imprimeRaio();
    float getVolume();
    void imprimeCentro();
    void imprimeAreaVolume();
    void compara(Esfera &e);


};


#endif // ESFERA_H_INCLUDED
