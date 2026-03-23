#include "Perfil.h"
#include "Postagem.h"


int Perfil::getTotalDeVisualizacoes() {
    int total = 0;
    for(int i = 0; i < MAXIMO_POSTAGENS; i++) {
        if (postagens[i] != NULL) total += postagens[i]->visualizacoes;
    }
   
    return total;
}

bool Perfil::postar(Postagem* p) {
    // 1. Verificar se a postagem já existe no perfil (prevenção de duplicados)
    for(int i = 0; i < MAXIMO_POSTAGENS; i++) {
        if(postagens[i] == p) {
            return false;
        }
    }

    // 2. Tentar adicionar baseado na quantidade
    if (quantidade < MAXIMO_POSTAGENS) {
        postagens[quantidade] = p;
        quantidade++;
        return true;
    } 
    // 3. Se quantidade >= 2, não há mais espaço
    return false;
}
    

void Perfil::imprimir() {
    // 1. Cabeçalho do Perfil
    cout << "Perfil: " << nome << " - " << quantidade << " postagens - " 
         << getTotalDeVisualizacoes() << " visualizacoes totais" << endl;

    // 2. Verificação de conteúdo
    for(int i = 0; i < MAXIMO_POSTAGENS; i++) {
        if (postagens[i] != nullptr) { 
            // Chamamos o método imprimir() diretamente do objeto p1
            postagens[i]->imprimir(); 
       
        }
    }  
 }

  string Perfil::getNome(){
    return nome;

  }
  void Perfil::setNome(string n){
    this -> nome = n;

  }
  int Perfil:: getQuantidade(){

  }
  int Perfil:: getPostagens(){

  }