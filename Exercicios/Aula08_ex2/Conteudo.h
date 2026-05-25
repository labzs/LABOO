#ifndef CONTEUDO_H
#define CONTEUDO_H
#include "Postagem.h"


class Conteudo: public Postagem {
protected:
    int visualizacoes;
public:
    Conteudo(string legenda);
    virtual ~Conteudo();
    Conteudo** conteudos;

    int getVisualizacoes();
    virtual void assistir();    
};

#endif