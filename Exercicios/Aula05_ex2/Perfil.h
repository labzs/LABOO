#ifndef PERFIL_H
#define PERFIL_H


#include <iostream>
#include <string>
#include "Postagem.h"
using namespace std;



class Perfil {
private:
  string nome;
  Postagem** postagens; // Ponteiro para um vetor de ponteiros
  int quantidade = 0;
  int maximoPostagens;  // Nova variável para guardar o limite informado

public:
  int getTotalDeVisualizacoes();
  bool postar(Postagem* p);
  void imprimir();
  string getNome();
  void setNome(string n);
  int getQuantidade();
  Postagem** getPostagens();
  
  // Construtor
  Perfil(string nome, int maximoDePostagens);
  //Destrutor 
  ~Perfil(); 
};


#endif