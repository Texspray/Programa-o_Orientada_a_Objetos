#ifndef INGESSOVIP_H_INCLUDED
#define INGESSOVIP_H_INCLUDED
#include "Ingresso.h"

class IngressoVip: public Ingresso{
    int valorAdcional;
public:
    IngressoVip(int, Ingresso& i);
    void ImprimeValor();


};


#endif // INGESSOVIP_H_INCLUDED
