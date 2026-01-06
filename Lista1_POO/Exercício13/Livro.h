#ifndef LIVRO_H_INCLUDED
#define LIVRO_H_INCLUDED
#include <string>

using namespace std;

class Livro{
    string titulo;
    string nomeAutor;
    string isbn;
    int edicao;
    int volume;
    int numeroPaginas;
    int paginaAtual;
public:
    Livro();
    Livro(string, int);
    void setAutor(string);
    void setnumeroPaginas(int);
    void setTitulo(string);
    void irParaPagina(int);
    void proximaPagina();
    void getTitulo();
    void getPaginaAtual();
};


#endif // LIVRO_H_INCLUDED
