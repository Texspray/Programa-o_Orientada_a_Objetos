#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED


class Circulo {
private:
	void calculaArea(int);
	void calculaCircunferencia(int);
	float raio, area, circunferencia;
public:
	void setRaio(int);
	void aumentaRaio(int);
	void getValorRaio();
	void getAreaCirculo();
	void getCircunferencia();

};



#endif // CIRCULO_H_INCLUDED
