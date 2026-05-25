#ifndef LISTA_H
#define LISTA_H
#include "Conteudo.h"
#include "Video.h"


class Lista: public Conteudo {
protected:
    int nMaximoVideos;
    int quantidadeVideos;

  
public:
    Lista(string legenda, int tamanho);
    bool adicionar(Lista* lista);
    virtual ~Lista();
    bool adicionar(Conteudo* conteudo);
    void imprimir() override;
    Conteudo** getConteudos();
    int getQuantidade();
    int getDuracao();
    int getVisualizacoes();
};

#endif