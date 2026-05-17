#ifndef LISTA_H
#define LISTA_H
#include "Conteudo.h"


class Lista: public Conteudo {
protected:
    int nMaximoVideos;
    int quantidadeVideos;
  

  
public:
    Lista(string legenda, int tamanho);
    virtual ~Lista();
    bool adicionar(Conteudo* conteudo);
    void imprimir();
    Conteudo** getConteudos();
    int getQuantidade();

};

#endif