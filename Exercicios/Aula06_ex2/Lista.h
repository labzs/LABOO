#ifndef LISTA_H
#define LISTA_H
#include <string>
#include <iostream>
#include "Postagem.h"

using namespace std;


class Lista : public Postagem {
protected:
    Video** videos;      // Vetor de ponteiros para Video
    int tamanho;         // Capacidade máxima
    int quantidade;      // Quantidade atual

public:
    Lista(string legenda, int tamanho);
    virtual ~Lista();

    bool adicionar(Video* v);
    void imprimir();
    
    Video** getVideos();
    int getQuantidade();
};