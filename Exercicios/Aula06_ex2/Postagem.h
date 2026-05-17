#ifndef POSTAGEM_H
#define POSTAGEM_H
#include <string>
#include <iostream>


using namespace std;

class Postagem {
protected: 
  string legenda;  //ATRIBUTO
  int visualizacoes = 0;
public:
  string getLegenda();
  void setLegenda(string leg);
  int getVisualizacoes();
  void assistir ();    //MÉTODOS
  void imprimir ();
 
// Construtor
 Postagem(string legenda);
 virtual ~Postagem();
  
};


#endif