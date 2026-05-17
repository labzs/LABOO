#ifndef LISTA_H
#define LISTA_H
#include "Postagem.h"
#include "Video.h"

class Lista: public Postagem {
protected:
    int nMaximoVideos;
    int quantidadeVideos;
    Video** videos;

  
public:
    Lista(string legenda, int tamanho);
    ~Lista();
    bool adicionar(Video* v);
    void imprimir();
    Video** getVideos();
    int getQuantidade();

};

#endif;