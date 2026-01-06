#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
class Data{
    int dia, mes, ano;
public:
    Data();
    Data(int, int, int);
    int getDia();
    int getMes();
    int getAno();
    void exibirDia();
    void exibirMes();
    void exibirAno();

};



#endif // DATA_H_INCLUDED
