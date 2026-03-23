#ifndef POSTAGEM_H
#define POSTAGEM_H
#include <string>
#include <iostream>


using namespace std;

class Postagem {
public: 
  string legenda;  //ATRIBUTO
  int visualizacoes = 0;

  void assistir ();    //MÉTODOS
  void imprimir ();
};

#endif