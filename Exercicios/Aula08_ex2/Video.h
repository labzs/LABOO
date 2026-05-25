#include "Conteudo.h"

#ifndef VIDEO_H
#define VIDEO_H

//DECLARAÇÃO DA SUBCLASSE:
//class NomeSubClasse: public NomeSuperClasse {}

class Video: public Conteudo {
protected:
    int duracao = 0;

//MODO DE VISIBILIDADE
public: 
    Video(string legenda, int duracao);
    virtual ~Video();
    int getDuracao();
    void assistir(int tempo);
    void imprimir() override;
    static void setPorcentagem(double valor);
    static double getPorcentagem();

private:
    static double percentualReferencia;
};

#endif