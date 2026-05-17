#ifndef LISTA_H
#define LISTA_H
#include "Conteudo.h"
#include "Video.h"

class Lista: public Conteudo {
protected:
    int nMaximoVideos;
    int quantidadeVideos;
    Video** videos;

  
public:
    Lista(string legenda, int tamanho);
    virtual ~Lista();
    bool adicionar(Conteudo* v);
    void imprimir();
    Video** getVideos();
    int getQuantidade();

};

#endif