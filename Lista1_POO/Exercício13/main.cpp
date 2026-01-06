#include <iostream>
#include <string>
#include "Livro.h"

using namespace std;

int main()
{
    Livro l;
    l.setAutor("Carvalho");
    l.setnumeroPaginas(30);
    l.setTitulo("Como pensar como um cientista");
    l.getTitulo();
    l.irParaPagina(31);
    l.proximaPagina();
    l.getPaginaAtual();
    return 0;
}
