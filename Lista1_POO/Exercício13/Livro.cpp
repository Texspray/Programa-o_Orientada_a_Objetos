#include "Livro.h"
#include <string>
#include <iostream>

using namespace std;

Livro::Livro(){
    string titulo="";
    string nomeAutor="";
    string isbn="";
    int edicao = 1;
    int volume=1;
    int numeroPaginas=1;
    int paginaAtual=1;
}

Livro::Livro(string t, int p){
    titulo = t;
    numeroPaginas=p;
}

void Livro::setAutor(string a){
    if (a.length()>20)
        cout<<"O nome do autor não pode passar de 20 caracteres, digite um novo"<<endl;
    nomeAutor = a;
}

void Livro::setnumeroPaginas(int n){
    numeroPaginas = n;
}

void Livro::setTitulo(string t){
    if (t.length()>30)
        cout<<"O nome do livro nao pode passar de 30 caracteres, digite um novo"<<endl;
    else
        titulo = t;
}
void Livro::irParaPagina(int p){
    if (p>numeroPaginas)
        cout<<"A pagina apontada e maior que o numero de paginas do livro"<<endl;
    else
        paginaAtual = p;

}
void Livro::proximaPagina(){
    paginaAtual++;
}
void Livro::getTitulo(){
     cout<<"O nome do livro eh: "<< titulo << endl;
}

void Livro::getPaginaAtual(){
    cout<<"A pagina atual eh: "<<paginaAtual<<endl;
}

