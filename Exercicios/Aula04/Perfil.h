#ifndef PERFIL_H
#define PERFIL_H
#include <iostream>
#include <string>
#include "Postagem.h"
using namespace std;

class Perfil {
public:
  string nome;
  Postagem* p1 = NULL;
  Postagem* p2 = NULL;
  int quantidade = 0;

  int getTotalDeVisualizacoes();
  bool postar(Postagem* p);
  void imprimir();
};

#endif