#ifndef CARRO_H_INCLUDED
#define CARRO_H_INCLUDED

class Carro{
    float tanque, consome, posicao;
public:
    Carro();
    Carro(float);
    Carro(float, float);
    void abastecer(float);
    void moverCarro(float);
    float getDistancia();
    float getCombustivel();

};


#endif // CARRO_H_INCLUDED
