#include <iostream>
#include "Data.h"
using namespace std;

Data::Data(){
    dia = 27;
    mes = 8;
    ano = 2021;
}

Data::Data(int d, int m, int a){
    if(d>0 && d<30){
        this->dia = d;
    }
    else
        dia = 1;
    if(m>0 && m<13){
        this->mes = m;
    }
    else
        mes = 1;
    if(a>0 && a<2101){
        this->ano = a;
    }
    else
        ano = 1;

}

int Data::getDia(){
    return dia;
}
void Data::exibirDia(){
    cout << "dia: "<< getDia() << endl;;
}

int Data::getMes(){
    return mes;
}
void Data::exibirMes(){
    cout << "mes: "<< mes << endl;;
}

int Data::getAno(){
    return ano;
}
void Data::exibirAno(){
    cout << "ano: "<< ano << endl;;
}

