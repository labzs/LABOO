#ifndef PERFIL_H
#define PERFIL_H


#include <iostream>
#include <string>
#include "Postagem.h"
using namespace std;

#define MAXIMO_POSTAGENS 12

class Perfil {
private:
  string nome;
  Postagem* postagens[MAXIMO_POSTAGENS];
  int quantidade = 0;
public:
  int getTotalDeVisualizacoes();
  bool postar(Postagem* p);
  void imprimir();
  string getNome();
  void setNome(string n);
  int getQuantidade();
  Postagem** getPostagens();
};

#endif