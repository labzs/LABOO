#ifndef POSTAGEM_H
#define POSTAGEM_H
#include <string>
#include <iostream>


using namespace std;

class Postagem {
protected: 
  string legenda;  //ATRIBUTO
  Postagem** postagens;
  
public:
  string getLegenda();
  void setLegenda(string leg);
  virtual int getVisualizacoes() = 0;
  void assistir ();   
  virtual void imprimir () = 0;
 
// Construtor
 Postagem(string legenda);
 virtual ~Postagem();
  
};


#endif