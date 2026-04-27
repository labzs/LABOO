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
  void imprimirVideo ();
// Construtor
 Postagem(string legenda);
 ~Postagem();
  
};


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


#endif