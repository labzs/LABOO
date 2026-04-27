#ifndef VIDEO_H
#define VIDEO_H
#include <string>
#include <iostream>
#include "Postagem.h"

using namespace std;



//DECLARAÇÃO DA SUBCLASSE:
//class NomeSubClasse: public NomeSuperClasse {}

class Video: public Postagem {
protected:
int duracao = 0;

//MODO DE VISIBILIDADE
public: 
 Video(string legenda, int duracao);
 ~Video();
 int getDuracao();
 void assistir(int tempo);
};


#endif