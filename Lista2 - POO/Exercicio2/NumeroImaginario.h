#ifndef NUMEROIMAGINARIO_H_INCLUDED
#define NUMEROIMAGINARIO_H_INCLUDED

class NumeroImaginario{
    int x, y;
public:
    NumeroImaginario();
    NumeroImaginario(int, int);
    void mostrar();
    NumeroImaginario operator+ (const NumeroImaginario &z);
    NumeroImaginario operator- (const NumeroImaginario &z);
    NumeroImaginario operator* (const NumeroImaginario &z);
    NumeroImaginario operator/ (const NumeroImaginario &z);
};



#endif // NUMEROIMAGINARIO_H_INCLUDED
